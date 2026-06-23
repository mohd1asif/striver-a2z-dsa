/*
 * Problem: Longest Subarray with sum K (Positives, Negatives, and Zeros)
 * Approach: Prefix Sum + Hash Map. Keep a running sum. If (current_sum - target) exists in map, the subarray between that old index and current index adds up to target.
 * Time Complexity: O(N) since array is iterated once
 * Space Complexity: O(N) to store prefix sums in the map.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int longestSubarray(vector<int>& arr, int k) {
    unordered_map<int, int> prefixMap;
    int n=arr.size();
    int sum = 0;
    int maxlen = 0;

    for (int i=0; i<n; i++) {
        sum += arr[i];

        if (sum == k) {
            maxlen = max(maxlen, i + 1);
        }

        int rem = sum-k;
        if (prefixMap.find(rem) != prefixMap.end()) {
            int len = i - prefixMap[rem];
            maxlen = max(maxlen, len);
        }

        if (prefixMap.find(sum) == prefixMap.end()) {
            prefixMap[sum] = i;
        }
    }
    return maxlen;
}

int main() {
    int n, k;
    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter numbers for the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the sum: ";
    cin >> k;

    int nums = longestSubarray(arr, k);
    cout << "Length of the longest subarray: " << nums;

    return 0;
}
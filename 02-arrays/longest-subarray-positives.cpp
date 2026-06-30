/*
 * Problem: Longest Subarray with sum K (Positives and zeros)
 * Approach: Sliding Window. We keep adding numbers from the right to sum. If the total gets bigger than our target, we just drop numbers from the left side until it matches or drops below the target again.
 * Time Complexity: O(N) because the left and right pointers only move forward.
 * Space Complexity: O(1) 
 */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int longestSubarray(vector<int> arr, int k){
    int n = arr.size();
    int left=0, right=0;
    int sum=arr[0];
    int maxlen=0;

    while(right<n){
        while(left<=right && sum>k){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            maxlen=max(maxlen, right - left+1);
        }
        right++;
        if(right<n) sum+=arr[right];
    }
    return maxlen;

}

int main(){
    int n, k;
    cout << "Enter size of the array: ";
    cin >> n;

    vector <int> arr(n);
    cout << "Enter numbers for the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter the sum: ";
    cin >> k;

    int nums = longestSubarray(arr, k);
    cout << "Length of the longest subarray: " << nums;

}
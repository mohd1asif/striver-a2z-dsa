/*
 * Problem: Two Sum
 * Approach: Uses a hash map to store numbers and their indices as we iterate. 
 * For each number, we check if its needed (target - current) is 
 * already in the map. If found, we return the pair. If not, we save it and continue.
 * Time: O(N) 
 * Space: O(N)
 */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSums(vector<int> &arr, int target) {
    unordered_map<int, int> mpp; 
    
    for(int i=0; i<arr.size(); i++) {
        int needed = target - arr[i];

        if(mpp.find(needed) != mpp.end()) {
            return {mpp[needed], i}; 
        }
        
        mpp[arr[i]] = i;
    }
    
    return {-1, -1};
}

int main(){
    int n, target;
    cout << "Enter size of the array: ";
    cin >> n;

    vector <int> arr(n);
    cout << "Enter numbers for the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter the target: ";
    cin >> target;

    vector<int> nums = twoSums(arr, target);
    
    cout << "Length of the longest subarray: ";
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }

}
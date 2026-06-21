/*
 * Problem: Single Number
 * Approach: Use the bitwise XOR operator (^). Since matching numbers cancel each other out (n ^ n = 0) and 0 ^ n = n. By XOR all elements together leaves only the single number.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int> arr){
    int n = arr.size();
    int result = 0;
 
    for(int i=0; i<n; i++) {
        result = result ^ arr[i]; 
    }
    
    return result;
    
}

int main(){
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    vector <int> arr(n);
    cout << "Enter numbers for the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int nums = singleNumber(arr);
    cout << nums;

}
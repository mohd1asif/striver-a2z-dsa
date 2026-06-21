/*
 * Problem: Max Consecutive Ones
 * Approach: Iterate through the array once. Keep a current count of 1s, update the max count as we go, and reset the current count to 0 whenever we a 0 appear.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include<iostream>
#include<vector>
using namespace std;

int findMaxConsecutiveOnes(vector <int> &arr){
    int n = arr.size();
    int current_cnt = 0;
    int maximum_cnt = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            current_cnt++;
            maximum_cnt = max(maximum_cnt, current_cnt);
        }
        else{
            current_cnt = 0;
        }
    }
    return maximum_cnt;

}

int main(){
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    vector <int> arr(n);
    cout << "Enter numbers for the array (only 0 and 1): ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int num = findMaxConsecutiveOnes(arr);
    cout << num;

}
/*
 * Problem: Linear Search
 * Approach: Iterate through the array sequentially. If the target element is found, 
 * return its index. If the loop completes without finding the target, return -1.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector <int>&arr, int target){
    int n=arr.size();

    for(int i=0; i<n; i++){
        if(arr[i]==target){
           return i;
        }
    }
    return -1;
}

int main(){
    int n, i, target;
    cout << "Enter size of the array: ";
    cin >> n;

    if(n==0) return 0;

    vector<int> arr(n);

    cout << "Enter the numbers for the array: ";
    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter number to find: ";
    cin >> target;

    int num = linearSearch(arr, target);
    if(num != -1){
        cout << target << " found at index " << num;
    }
    else{
        cout << "Target not found in the array.";
    }
    
}
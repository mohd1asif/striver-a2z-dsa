/*
 * Problem: Move Zeroes to End
 * Approach: Two-Pointer in-place swap.
 * Pointer 'i' tracks the index for the next non-zero element.
 * Pointer 'j' iterates through the array. 
 * When a non-zero element is found at 'j', it is swapped with 'i', and 'i' is incremented.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector <int> &arr){
    int n=arr.size();
    int i=0;
    for(int j=0; j<n; j++){
        if(arr[j]!=0){
            swap(arr[i], arr[j]);
            i++;
        }
    }
}

int main(){
    int n, i;
    cout << "Enter size of the array: ";
    cin >> n;

    if(n==0) return 0;

    vector<int> arr(n);

    cout << "Enter the numbers for the array: ";
    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    moveZeroes(arr);
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }
  
}
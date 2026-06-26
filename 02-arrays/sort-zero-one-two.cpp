/*
 * Problem: Sort 0s, 1s, and 2s (Sort Colors)
 * Approach: Uses the Dutch National Flag algorithm. 
 * It uses three pointers (low, mid, high) to swap elements: 
 * 0s are pushed to the front, 2s to the back, and 1s are left in the middle.
 * Time: O(N)
 * Space: O(1)
 */

#include <iostream>
#include <vector>
using namespace std;

void sortZeroOneTwo(vector<int>&arr){
    int n=arr.size();
    int low = 0, mid = 0;
    int high = n-1;

    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }

}

int main(){
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    vector <int> arr(n);
    cout << "Enter numbers for the array to sort(only 0, 1, 2): ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sortZeroOneTwo(arr);
    
    cout << "Sorted Array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

}
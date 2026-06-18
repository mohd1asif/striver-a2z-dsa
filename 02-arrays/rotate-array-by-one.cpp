/*
 * Problem: Left Rotate Array by One
 * Approach: Store the first element in a temporary variable (the "stand up" step). 
 * Then, loop through the rest of the array starting from index 1, shifting every 
 * element one position to the left. Finally, place the temporary variable into 
 * the very last spot in the array.
 * Time Complexity: O(N) 
 * Space Complexity: O(1)
 */

#include<iostream>
#include<vector>
using namespace std;

void rotateArrayByOne(vector<int> &arr){
    int n = arr.size();

    int temp=arr[0];
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
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

    rotateArrayByOne(arr);

    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }

}
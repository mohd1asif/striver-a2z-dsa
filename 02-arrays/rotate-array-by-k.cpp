/*
 * Problem: Left Rotate Array by K Places (Optimal)
 * Approach: Reversal Algorithm. 
 * Step 1: Reverse the first K elements.
 * Step 2: Reverse the remaining N-K elements.
 * Step 3: Reverse the entire array.
 * Time Complexity: O(N) (Each element is reversed twice, which is O(2N), removing the constant gives O(N)).
 * Space Complexity: O(1).
 */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateArray(vector<int> &arr, int k){
    int n=arr.size();
    k=k%n;
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end());
}

int main(){
    int n, i, k;
    cout << "Enter size of the array: ";
    cin >> n;

    if(n==0) return 0;

    vector<int> arr(n);

    cout << "Enter the numbers for the array: ";
    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter the position k: ";
    cin >> k;

    rotateArray(arr, k);

    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }

}
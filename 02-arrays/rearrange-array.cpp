/*
 * Problem: Rearrange Array Elements by Sign

 * Approach: Two Pointers with Extra Space
 * Create a result array. Use two pointers starting at index 0 (for positives) and index 1 (for negatives). 
 * Iterate through the original array, placing each element at its respective index and jumping the pointer by 2.
 
 * Time Complexity: O(N)
 * Space Complexity: O(N)
 */

#include<iostream>
#include<vector>
using namespace std;

vector <int> rearrangeArray(vector<int> &arr){
    int n=arr.size();
    vector<int> res(n, 0);
    int posIndex=0, negIndex=1;

    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            res[posIndex]=arr[i];
            posIndex+=2;
        }
        else{
            res[negIndex]=arr[i];
            negIndex+=2;
        }
    }
    return res;
    
}

int main(){
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the numbers for the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<int> nums = rearrangeArray(arr);
    cout << "Rearranged Array:";
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
  
}
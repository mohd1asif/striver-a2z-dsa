/*
 * Problem: Maximum Subarray Sum (Kadane's Algorithm)
 * Approach: We keep a running total as we iterate. If this total drops 
 * below zero, we reset it to zero, since a negative sum will only drag 
 * down future numbers. We continuously update a max variable to track 
 * the highest sum.
 * Time Complexity: O(N) 
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int maxSubArray(vector<int> &arr){
    int n = arr.size();
    int sum=0;
    int maxI=INT_MIN;

    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum>maxI){
            maxI=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    
    return maxI;
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

    int num = maxSubArray(arr);
    cout << num;

}
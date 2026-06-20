/*
 * Problem: Missing Number
 * Approach: Mathematical Sum (The Receipt Method).
 * We calculate what the sum of the array should be using the formula n * (n + 1) / 2.
 * Then, we add up the actual numbers that are currently in the array.
 * The missing number is simply the difference of Expected Sum(sum1) and Actual Sum(sum2).
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector <int> &arr){
    int n = arr.size();
    
    int sum1 = (n * (n + 1)) / 2;
    int sum2 = 0;
    for(int i=0; i<n; i++){
        sum2 += arr[i];
    } 
    return sum1-sum2;
}

int main(){
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    if(n==0) return 0;

    vector<int> arr(n);

    cout << "Enter the numbers for the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int num = missingNumber(arr);
    cout << num;
}
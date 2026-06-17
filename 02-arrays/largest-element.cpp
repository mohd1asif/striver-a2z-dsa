//  Problem: Find the Largest Element in an Array
//  Approach: Single Pass/Linear scan. Initialize first element as the largest. Iterate through the array once, updating the largest, whenever a greater element is found.
//  Time Complexity: O(N)
//  Space Complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;

int largestElement(vector<int> &arr){
    int n=arr.size();
    int largest = arr[0];
    
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
    
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

    int num = largestElement(arr);

    cout << num; 
  
}
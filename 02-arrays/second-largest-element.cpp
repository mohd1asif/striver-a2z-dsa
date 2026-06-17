// Problem: Find the Second Largest Element
// Approach: Single pass. Keep track of "largest" and "secondLargest". 
// If a number beats the largest, demote the old largest to second place. 
// Else if it beats the second largest (and isn't a duplicate of the largest), it takes second place.
// Time Complexity: O(N)
// Space Complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;

int secondLargestElement(vector<int> &arr){
    int n = arr.size();
    int largest = arr[0];
    int secondLargest = -1;
    
    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }

    return secondLargest;
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

    int num = secondLargestElement(arr);

    cout << num; 
  
}
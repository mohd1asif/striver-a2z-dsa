// Problem: Check if Array is Sorted
// Approach: Single Pass. We walk through the array starting from the second element. 
// We compare each element to the one right behind it. If we ever find an element that 
// is smaller than the previous one, the array is out of order, and return false.
// If we finish the entire loop without finding any unordered pairs, the array is sorted!
// Time Complexity: O(N)
// Space Complexity: O(1)
 
#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector <int> &arr){
    int n = arr.size();

    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
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

    bool num = isSorted(arr);

    cout << num; 
  
}
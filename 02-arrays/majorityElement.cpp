/*
 * Problem: Majority Element
 * Approach: Boyer-Moore Voting Algorithm
 * Finds the majority element (appears > N/2 times) by maintaining an element 
 * and a counter. The counter increments for matches and decrements for mismatches. 
 * A second pass verifies the final element.
 * Time Complexity: O(N)  
 * Space Complexity: O(1) 
 */

#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> &arr){
    int n = arr.size();
    int el=-1;
    int cnt=0;
    for(int i=0; i<n; i++){
        if(cnt == 0){
            el=arr[i];
            cnt=1;
        }
        else if(arr[i] == el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == el){
            cnt1++;
        }
    }
        
    if(cnt1 > n/2) return el;
    return -1;
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

    int num = majorityElement(arr);
    
    cout << "The number in majority is " << num << endl;
    
}
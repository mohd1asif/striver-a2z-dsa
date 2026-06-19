/*
 * Problem: Union of Two Sorted Arrays
 * Approach: Two Pointers. Since the arrays are already sorted, we traverse
 * both simultaneously. We compare the elements at pointer 'i' and 'j', 
 * add the smaller element to our unionArr array, and move that pointer forward.
 * *Important Step*: Before adding to the result, we check if the element is 
 * already the last element added to avoid duplicates.
 * Time Complexity: O(n1 + n2)
 * Space Complexity: O(n1 + n2) 
 */

#include<iostream>
#include<vector>
using namespace std;

vector<int> unionArray(vector<int> &arr1, vector<int> &arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0;
    int j = 0;

    vector<int> unionArr;

    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(unionArr.size()==0 || unionArr.back()!=arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i<n1){
        if(unionArr.size()==0 || unionArr.back()!=arr1[i]){
            unionArr.push_back(arr1[i]);
        }
        i++;
    }

    while(j<n2){
        if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
            unionArr.push_back(arr2[j]);
        }
        j++;
    }
    
    return unionArr;
}

int main(){
    int n1, n2, target;
    cout << "Enter size of the array1: ";
    cin >> n1;

    vector<int> arr1(n1);
    cout << "Enter the numbers for the array1: ";
    for(int i=0; i<n1; i++){
        cin >> arr1[i];
    }

    cout << "Enter size of the array2: ";
    cin >> n2;

    vector<int> arr2(n2);
    cout << "Enter the numbers for the array1: ";
    for(int i=0; i<n2; i++){
        cin >> arr2[i];
    }

    vector<int> num = unionArray(arr1, arr2);
    for(int i = 0; i < num.size(); i++){
        cout << num[i] << " ";
    }

}
#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr, int n){
    int i, j, minimum;
    for(i=0; i<n-1; i++){
        minimum = i;
        for(j=i; j<n; j++){
            if(arr[j] < arr[minimum]){
                minimum = j;
            }
        }
        int temp = arr[minimum];
        arr[minimum] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n, i;
    cout << "Enter a number: ";
    cin >> n;

    vector <int> arr(n);

    cout << "Enter numbers for the array: ";
    
    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    selectionSort(arr, n);
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
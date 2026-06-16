#include<bits/stdc++.h>
using namespace std;

void recBubbleSort(vector <int> &arr, int n){
    int i;
    if (n==1) return;
    for(i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
        swap(arr[i], arr[i+1]);
        }
    }
    
    recBubbleSort(arr, n-1);

}

int main(){
    int i, n;
    cout << "Enter a number: ";
    cin >> n;

    vector <int> arr(n);

    cout << "Enter numbers for the array: ";

    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    recBubbleSort(arr, n);

    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    } 

}
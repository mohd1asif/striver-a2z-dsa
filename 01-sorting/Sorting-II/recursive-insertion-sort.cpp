#include<bits/stdc++.h>
using namespace std;

void recInsertionSort(vector <int> &arr, int i, int n){
    if(i==n) return;
    int j=i;
        while(j>0 && arr[j] < arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    
    recInsertionSort(arr, i+1, n);
}

int main(){
    int i, n;
    cout << "Enter a number: ";
    cin >> n;

    if(n<=0) return 0;

    vector <int> arr(n);

    cout << "Enter numbers for the array: ";

    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    recInsertionSort(arr, 1, n);

    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    } 

}
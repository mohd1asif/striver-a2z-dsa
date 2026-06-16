#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n) {
    for(int i=0; i<n-1; i++){
        int didswap = 0;
        for(int j=i; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didswap = 1;
            }
        }
        
        if(didswap == 0){
            break;
        }
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

    bubbleSort(arr, n);
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
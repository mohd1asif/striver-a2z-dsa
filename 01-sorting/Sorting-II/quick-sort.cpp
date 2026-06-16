#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low, j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) i++;
        while (arr[j] > pivot && j >= low + 1) j--;
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void quickSort(vector<int> &arr, int low, int high){
    if(low>=high) return;
    int pivot = partition(arr, low, high);
    quickSort(arr, low, pivot-1);
    quickSort(arr, pivot+1, high);
}

int main(){
    int n, i;
    cout << "Enter a number: ";
    cin >> n;

    int low=0, high=n-1;

    vector <int> arr(n);

    cout << "Enter numbers for the array: ";
    
    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    quickSort(arr, low, high);

    for (i=0; i<n; i++){
        cout << arr[i] << " ";
    }

}
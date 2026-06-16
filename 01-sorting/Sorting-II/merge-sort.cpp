#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low, right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid) temp.push_back(arr[left++]);
    while (right <= high) temp.push_back(arr[right++]);

    for (int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}
void mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main(){
    int n, i;
    cout << "Enter a number: ";
    cin >> n;

    int low = 0, high = n-1;

    vector <int> arr(n);

    cout << "Enter numbers for the array: ";
    
    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    mergeSort(arr, low, high);
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
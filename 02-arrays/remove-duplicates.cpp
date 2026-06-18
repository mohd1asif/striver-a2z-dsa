#include<iostream>
#include<vector>
#include<set>
using namespace std;

int removeDuplicates(vector <int> &arr){
    int n = arr.size();
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;  
        }
    }
    return i+1;
    
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

    int num = removeDuplicates(arr);

    for( i=0; i<num; i++){
        cout << arr[i] << " ";
    }
  
}
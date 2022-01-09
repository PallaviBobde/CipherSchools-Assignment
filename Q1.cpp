#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter no of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // finding missing element
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]!=i){
            cout<<"Missing element is "<<i;
            break;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,target,ans;
    cout<<"Enter no of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter target: ";
    cin>>target;

    // finding closest sum
    sort(arr,arr+n);
    int closestsum = arr[0]+arr[1]+arr[2], tempsum;
    for(int i=1;i<n-2;i++){
        tempsum = arr[i]+arr[i+1]+arr[i+2];
        if( abs(abs(closestsum)-abs(target)) > abs(abs(tempsum)-abs(target)) ){
            closestsum = tempsum;
        }
    }
    cout<<"Closest sum is: "<<closestsum;
    return 0;
}
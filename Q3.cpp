#include <bits/stdc++.h>
using namespace std;

int main(){
     int n,ans;
    cout<<"Enter no of houses: ";
    cin>>n;
    int arr[n];
    cout<<"Enter money in each house: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // finding maximum money
    int ans1=0, ans2=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            ans1 += arr[i];
        }else{
            ans2 += arr[i];
        }
    }

    ans = max(ans1,ans2);
    cout<< "Maximum money we can get is: "<< ans;
    return 0;
}
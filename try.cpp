#include<iostream>
using namspace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            count++;
        }
    }
    cout<<count;

    return 0;
}
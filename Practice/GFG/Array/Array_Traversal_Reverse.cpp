#include<bits/stdc++.h>
using namespace std;

void arrayreverse(int arr[],int n){
    for(int i=(n-1); i>=0; i--){
        cout<<arr[i]<<" ";
    }

}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    
    arrayreverse(arr,n);
    }

    
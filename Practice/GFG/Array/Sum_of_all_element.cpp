#include<bits/stdc++.h>
using namespace std;

int arraySum(int arr[],int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        
    }
    cout<<sum<<endl;
    return sum;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    arraySum(arr,n);


}
#include<bits/stdc++.h>
using namespace std;

void count(int arr[],int n)
{
    int countEven=0 , countOdd=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            countEven++;
        }
        else{
        countOdd++;
    }
    }
    
    cout<<countEven<<" "<<countOdd<<endl;
}

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    count(arr,n);

}
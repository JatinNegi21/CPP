#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int mx=-1999999;
    int mi=99999999;
    for(int i=0; i<n; i++){
        mx=max(mx,arr[i]);
        mi=min(mi,arr[i]); 
      
    }
    cout<<mx<<endl<<mi;    

    return 0;

}
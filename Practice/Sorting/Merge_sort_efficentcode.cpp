#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int b[],int m, int n)
{
    int i=0,j=0;
     
     while(i<m  && j<n)
     {
         if(a[i]<=b[j]){
             cout<<a[i]<<" ";
             i++;
         }
         else{
             cout<<b[j]<<" ";
             j++;
         }
     }
     while(i<m){
         cout<<a[i]<<" ";
         i++;
     }
     while(j<n){
         cout<<b[j]<<" ";
         j++;
     }
}

int main()
{
    int m;
    cin>>m;

    int a[m];

    for(int s=0; s<m; s++){
        cin>>a[s];
    }
    sort(a,a+m);
    int n;

    cin>>n;

    int b[n];

    for(int s=0; s<n; s++){
        cin>>b[s];
    }
    sort(b,b+n);

    merge(a,b,m,n);
}

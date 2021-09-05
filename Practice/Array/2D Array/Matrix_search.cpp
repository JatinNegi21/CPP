#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; 
    cin >>n >> m;
    int target;
    cin >> target;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    
    bool found=false;
    int r=0, c=n-1;

    while(r<m && c>=0){
        if(arr[r][c]==target){
            found=true;
        }
         if(arr[r][c]>target){
            c--;
        }
        else
        r++;
    }
    if(found){
        cout<<"element found";
    }
    else
    cout<<"element not found";
    
    return 0;
}
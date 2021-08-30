#include<iostream>
using namespace std;

int sum(int n){
    int ans;
    for(int i=1; i<=n; i++){
       ans=(n*(n+1))/2;
    }

    return ans;
}

int main(){

    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}
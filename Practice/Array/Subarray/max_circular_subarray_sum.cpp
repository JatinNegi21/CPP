#include<bits/stdc++.h>
using namespace std;

int kredane(int arr[], int n){
     int currentsum=0;
    int maxSum=INT_MIN; 

    for(int i=0; i<n; i++){
        currentsum+=arr[i];
        if(currentsum<0){
            currentsum=0;
            
        }
        maxSum=max(currentsum, maxSum);
       
    }
   return maxSum;

}

int main()
{

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum=kredane(arr,n);
    int totalsum=0;
    for(int i=0; i<n; i++){
      
       totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapsum = totalsum+kredane(arr,n);

    cout<<max(wrapsum, nonwrapsum)<<endl;

    return 0;
}
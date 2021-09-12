#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h,int p)
{
    int temp[h-l+1],index=0;
    for(int i=l; i<=h; i++){
        if(arr[i]<arr[p]){
            temp[index]=arr[i];
            index++;
        }
    }
    for(int i=l; i<=h; i++){
        if(arr[i]=arr[p]){
            temp[index]=arr[i];
            index++;
        }
    }
    int res = l+index-1;
    for(int i=l; i<=h; i++){
        if(arr[i]>arr[p]){
            temp[index]=arr[i];
            index++;
        }
    }
    for(int i=l;i<=h;i++){
        arr[i]=temp[i-l];
    }
    return res;

     

}


int main()
{
    
    
   int arr[]={10,80,30,90,40,50,70};
	int p;
	int n=sizeof(arr)/sizeof(arr[0]);
   partition(arr,0,n-1,p);

   for(int x: arr)
	    cout<<x<<" ";


    
}

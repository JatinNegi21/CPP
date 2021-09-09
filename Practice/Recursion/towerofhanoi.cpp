#include<bits/stdc++.h>
using namespace std;

void toh(int n, char src, char dest, char help)
{
    if(n==0){
        return;
    }
        toh(n-1,src,help,dest);
            cout<<"Move from"<<" "<<src<<" "<<"to dest"<<" "<<dest<<endl;
        
        toh(n-1,src,dest,help);
        
}
int main()
{
    toh(3,'A','B','C');

    return 0;
}
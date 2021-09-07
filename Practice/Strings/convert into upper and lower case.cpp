#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "njvfsjnnvjsndfvnsfjdv";

    // Upper case

    // for(int i=0; i<str.size(); i++){
    //     if( str[i]>='a' && str[i]<='z')
    //       str[i]-=32;
    // }
    // cout<< str;

    // // lower Case
    // for(int i=0; i<str.size(); i++){
    //     if( str[i]>='a' && str[i]<='z')
    //       str[i]+=32;
    // }
    // cout<< str;

    // return 0;

    transform(s.begin(),s.end(),s.begin(),::toupper);

    cout<<s<<endl;

    transform(s.begin(),s.end(),s.begin(),::tolower);

}
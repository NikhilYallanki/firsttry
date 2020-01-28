#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int x,y,a,b,t;
    cin>>x>>y>>a>>b>>t;
    int curr=0;
    char c='f';
    int cnt=0;
    while(curr>=(-b) || curr >= a){
    if( c=='f'){
        curr+=x;
        c='b';
        cnt++;
    }
     if (  c=='b')
    {
        curr-=y;
        cnt++;
        c='f';
    }
}
     
    int res;
    res=(cnt+1)*5;
    cout<<res;
    return 0;
}
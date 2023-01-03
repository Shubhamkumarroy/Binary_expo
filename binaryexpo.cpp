#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define mia -1e18
#define maa 1e18
#define pii pair<int,int>
using namespace std;
int pow(int x,int y){
    if(y==0){return 1;}
    int ans=pow(x,y/2);
    ans*=ans;
    return y%2==0?ans:ans*x;
}
signed main(){
    int tt;
    cin>>tt;
    while(tt--)
    {
               int x,y;
               cin>>x>>y;
               cout<<pow(x,y);
                
    }
}
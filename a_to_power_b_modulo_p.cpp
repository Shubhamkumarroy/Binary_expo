// gcd(a,p)=1; means p is prime w.rt a
#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define mia -1e18
#define maa 1e18
#define pii pair<int,int>
using namespace std;
int power(int a,int b,int p){
    if(b==0)return 1;
    int ans=power(a,b/2,p);
    ans=(ans*ans)%p;
    return (b%2==0)?ans:(ans*a)%p;

}
signed main(){
    int tt;
    cin>>tt;
    while(tt--)
    {
                int a,b,p;
                cin>>a>>b>>p;
                cout<<power(a,b,p);

                
    }
}
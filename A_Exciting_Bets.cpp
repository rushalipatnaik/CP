#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi (3.141592653589)
#define MAX 2147483648
#define MIN -2147483647
#define mod 1000000007
#define ff first
#define ss second
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define max3(a,b,c) max(c, max(a,b))
#define max4(a,b,c,d) max(d, max(c, max(a,b)))
#define fo(i,s,n) for(ll i=s;i<n;i++)
#define rfo(i, n) for(ll i=n;i>=0;i--)
#define arr(a,n) long long int *a = new long long int[n]
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


ll gcd(ll x, ll y){if(y>x){return gcd(y,x);}if(y==0){return x;}return gcd(y,x%y);}
bool prime(ll x){for(ll i=2;i<=sqrt(x);i++){if(x%i==0){return 0;}}return 1;}
ll fact(ll n){if(n==0){return 1;}return n*fact(n-1);}
bool powerOf2(ll n){if(n==0){return 0;} return (ceil(log2(n))== floor(log2(n)));}


void solve(){
    ll a,b,d1,d2; cin>>a>>b;
    if(a==b) cout<<0<<" "<<0;
    else if(a==1 || b==1 || abs(a-b)==1)
    cout<<1<<" "<<0;
    else{
        ll y=min(a,b);
        ll x=max(a,b);
        ll  m=x-y;
        d1=y;
        fo(i,1,y+1){
            if((x+i)%m==0)
             d2=i;
        }
        if(d1<=d2) cout<<m<<" "<<d1;
        else cout<<m<<" "<<d2;
    }cout<<endl;
}


int32_t main(){
fast
ll t=1;
cin>>t;
while(t--)
solve();
return 0;
}
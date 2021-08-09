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


void solve(){
ll a1,a2,a3; cin>>a1>>a2>>a3;
ll b1,b2,b3; cin>>b1>>b2>>b3;
ll a=a1+a2+a3;
ll b=b1+b2+b3;
ll n; cin>>n;
ll x,y;
if(a%5==0) x=a/5;
else x=(a/5)+1;
if(b%10==0) y=b/10;
else y=(b/10)+1;
if((x+y)<=n)
   cout<<"YES";
else cout<<"NO";
}


int32_t main(){
fast
ll t=1;
//cin>>t;
while(t--)
solve();
return 0;
}
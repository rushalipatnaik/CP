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
 ll n,s,ma=MIN,mi=MAX,x,y; cin>>n;
 arr(a,n);
 fo(i,0,n){
     cin>>a[i];
    if(a[i]>ma) ma=i;
    if(a[i]<mi) mi=i;
 }
 ll maxi=max(ma,mi);
 ll mini=min(ma,mi);
 x=mini+1;
 y=n-maxi;
 if(x<=y){
     ll k=maxi-x+1;
     s=x+(min(k,y));
 }
 else{
     ll k=maxi-mini;
     s=y+(min(k,x));
 }
 cout<<s<<endl;
}


int32_t main(){
fast
ll t=1;
cin>>t;
while(t--)
solve();
return 0;
}
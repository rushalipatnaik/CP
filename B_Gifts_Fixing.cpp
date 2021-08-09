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
 ll n,ma=MAX,mb=MAX,m=0;
 cin>>n;
 arr(a,n); arr(b,n);
 fo(i,0,n) {
    cin>>a[i];
    if(a[i]<ma)
     ma=a[i]; }
 fo(i,0,n){
    cin>>b[i];
    if(b[i]<mb)
     mb=b[i]; }
     
    ll sum=0;
   fo(i,0,n){
           ll x=0,y=0;
           if(a[i]-ma>0)
           x=a[i]-ma;
           if(b[i]-mb>0)
           y=b[i]-mb;
           ll s = min(x,y);
           ll l = max(x,y);
           sum=sum+(s + (l-s));
           a[i]=ma,b[i]=mb;  }
       cout<<sum<<endl;
}
 


int32_t main(){
fast
ll t=1;
cin>>t;
while(t--)
solve();
return 0;
}
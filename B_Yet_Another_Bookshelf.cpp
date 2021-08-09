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
 ll n; cin>>n;
 arr(a,n);
 ll t=0,s=0,c=0;
 fo(i,0,n) cin>>a[i];
 fo(i,0,n){
     if(a[i]==1){
     c++;
     if(c==1){
      t=i; 
     } 
     else{
         s=s+(i-t)-1;
         t=i;
     }
 }
 }cout<<s<<endl;
}


int32_t main(){
fast
ll t=1;
cin>>t;
while(t--)
solve();
return 0;
}
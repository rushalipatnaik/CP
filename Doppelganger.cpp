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
 ll n,c=0;
 arr(a,n);
 fo(i,0,n) cin>>a[i];

   fo(i,0,n){
    if(a[i]==a[i+1]){
    for(ll j=i;j<n-2;j++){
     a[j+1]=-1;
     a[j]=a[j+2];
     a[j+2]=-1;
     i=-1;}
    }}
    cout<<n;
}


  fo(i,0,n) c++;
  cout<<c;
}

int32_t main(){
fast
ll t=1;
//cin>>t;
while(t--)
solve();
return 0;
}
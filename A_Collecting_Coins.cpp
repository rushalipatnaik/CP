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
  ll a,b,c,n;
  cin>>a>>b>>c>>n;
  ll m=max3(a,b,c);
  ll s=(m-a)+(m-b)+(m-c);
  if(s==0){
    if(n%3==0) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;}
  else if(n<s) cout<<"NO"<<endl;
  else{
      if((n-s)%3==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;}
}


int32_t main(){
fast
ll t=1;
cin>>t;
while(t--)
solve();
return 0;
}
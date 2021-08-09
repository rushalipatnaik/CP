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


int solve(){
 ll m,c;
 cin>>m>>c;
 if(m>c)
  return 1;
else if(m==c)
  return 0;
return -1;

}


int32_t main(){
fast
ll t,m=0,c=0;
cin>>t;
while(t--){
ll x=solve();
if(x==1)
   m++;
else if(x==-1)
   c++;}
   if(m>c)
    cout<<"Mishka";
   else if(m<c)
    cout<<"Chris";
   else
    cout<<"Friendship is magic!^^";
return 0;
}
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
ll s=0,x=(n+1)/2;
ll a[n+1][n+1];
fo(i,1,n+1){
    fo(j,1,n+1)
        cin>>a[i][j];
}
     fo(i,1,n+1){
         fo(j,1,n+1){
           if(i==j)
         s=s+a[i][j];
         }
       }
fo(i,1,n+1)
    s=s+a[i][x];

    fo(i,1,n+1)
        s=s+a[x][i];
    
for(ll i=1,j=n;i<n+1;i++,j--)
    s=s+a[i][j];

 s=s-(3*a[x][x]);
cout<<s;
}


int32_t main(){
fast
ll t=1;
//cin>>t;
while(t--)
solve();
return 0;
}
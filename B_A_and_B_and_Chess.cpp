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
    ll s=0,t=0;
    fo(i,0,64){
        char c; cin>>c;
         if(c=='q') s+=9;
            else if(c=='r') s+=5;
            else if(c=='b') s+=3;
            else if(c=='n') s+=3;
            else if(c=='p') s+=1;
            else if(c=='Q') t+=9;
            else if(c=='R') t+=5;
            else if(c=='B') t+=3;
            else if(c=='N') t+=3;
            else if(c=='P') t+=1;
 }
 if(s>t) cout<<"Black";
  else if(s==t) cout<<"Draw";
  else cout<<"White";
}


int32_t main(){
fast
ll t=1;
//cin>>t;
while(t--)
solve();
return 0;
}
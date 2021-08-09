#include<iostream>
using namespace std;
 
int main(){
    long long int n;cin>>n;
    long long int arr[101]={0};
    long long int p;cin>>p;
    while(p--){
        long long int x;cin>>x;
        arr[x]++;
 
    }
    long long int q;cin>>q;
    while(q--){
        long long int y;cin>>y;
        arr[y]++;
    }
 
    for(long long int i=1;i<=n;i++){
        if(arr[i]<=0){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;
 
}
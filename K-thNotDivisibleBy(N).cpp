#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ln '\n'
#define pb push_back

void solve(int n,int k){
if(n>k){
   cout<<k<<ln;
}
else{
int num=n-1;
int digit=0;
int x=0;
int ans=0;
if(k%num==0){
int digit=(k/num);
    x=digit*n;
    ans=x-(((x-digit)-k)+1);
}
else{
    int digit=(k/num)+1;
    x=digit*n;
    ans=x-(((x-digit)-k)+1);
     

}
cout<<ans<<ln;
}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n>>k;
        solve(n,k);
    }
}
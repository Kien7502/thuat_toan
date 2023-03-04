#include<bits/stdc++.h>
using namespace std;
int n, M;
vector<int> X;
vector<int> A;
int t=0;
int g=0;
int sol=0;
void solution(){
    sol++;
}
bool check(){
    return (t==M);
}
void Try(int k){
    for(int i=1;i<=M;i++){
        X[k] = i;
        t += X[k]*A[k];
        if(k==n){
            if(check()) solution();
        }
        else{
            if(t+n-k<=M)
                Try(k+1);
        }
        t -= X[k]*A[k];
    }
}
int main(){
    cin>>n>>M;
    X.resize(n+1, 0);
    A.resize(n+1, 0);
    for(int i=1;i<=n;i++) cin>>A[i];
    Try(1);
    cout<<sol;
}
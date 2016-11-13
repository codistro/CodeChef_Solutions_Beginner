#include<bits/stdc++.h>
using namespace std;
#define MAX 200
int mult(int *a,int n,int res){
    int carry = 0;
    for(int i = 0;i < res;i++){
        int prod = a[i]*n + carry;
        a[i] = prod%10;
        carry = prod/10;
    }
    while(carry){
        a[res] = carry%10;
        carry = carry/10;
        res++;
    }
    return res;
}
void fact(int n){
    int a[MAX];
    int res = 1;
    a[0] = 1;
    for(int i = 2;i<=n;i++){
        res = mult(a,i,res);
    }
    for(int i = res - 1; i>=0 ; i--)
        cout<<a[i];
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        fact(a);
    }
}
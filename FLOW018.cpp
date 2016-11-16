#include<bits/stdc++.h>
using namespace std;
#define MAX 200
int multiply(int *a,int n,int siz){
    int carry = 0;
    for(int i = 0;i<siz;i++){
        int prod = a[i] * n + carry;
        a[i] = prod % 10;
        carry = prod/10;
    }
    while(carry){
        a[siz] = carry%10;
        carry = carry/10;
        siz++;
    }
    return siz;
}
void fact(int n){
    int a[MAX];
    a[0] = 1;
    int size = 1;
    for(int i = 2;i<=n;i++)
        size = multiply(a,i,size);
    for(int i = size - 1;i>=0;i--)
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
    return 0;
}

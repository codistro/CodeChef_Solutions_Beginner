#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a == 0) return b;
    if(b == 0) return a;
    if(a > b) gcd(b,a%b);
    if(b > a) gcd(b%a,a);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<gcd(a,b)<<" "<<(a*b)/gcd(a,b)<<endl;
    }
    return 0;
} 
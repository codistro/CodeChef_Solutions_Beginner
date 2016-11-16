#include<bits/stdc++.h>
using namespace std;
int main(){
    int t = 1;
    cin>>t;
    while(t--){
       int a,sum = 0,temp;
       cin>>a;
       sum = a%10;
       while(a>0){
            temp = a%10;
            a = a/10;
       }
       sum = sum + temp;
       cout<<sum<<endl;
    }
    return 0;
}

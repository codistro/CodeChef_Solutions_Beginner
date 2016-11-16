#include<bits/stdc++.h>
using namespace std;
int main(){
    int t = 1;
    cin>>t;
    while(t--){
       int a,temp,total = 0,rev = 0;
       cin>>a;
       temp = a;
       while(temp > 0){
            ++total;
            temp = temp/10;
       }
       --total;
       while(a>0){
            rev = rev + a%10 * pow(10,total--);
            a = a/10;
       }
       cout<<rev<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int one[t],two[t],maxi = 0,win,a=0,b =0 ;
    for(int i = 0;i<t;++i){
        cin>>one[i];
        cin>>two[i];
        a += one[i];
        b += two[i];
        if(a>b){
            if(maxi<(a-b)){
                maxi = a-b;
                win = 1;
            }
        }
        else{
            if(maxi<(b-a)){
                maxi = abs(b-a);
                win = 2;
            }
        }

    }
    cout<<a<<" "<<b<<endl;
    cout<<win<<" "<<maxi;
    return 0;
}

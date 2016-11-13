#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,c,total = 0;
        cin>>n>>m>>c;
        for(int i = 1;i<=n;i++){
                if(c%i == 0 && (c/i)<=m)
                    ++total;
            }
        cout<<total<<endl;
    }
}
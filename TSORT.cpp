#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
int main(){
    int t,x;
    cin>>t;
    int a[MAX] = {0};
    for(int i = 0;i<t;i++){
        cin>>x;
        ++a[x];
    }
    for(int i = 0;i<MAX;i++){
        if(a[i]>0){
            for(int j = 0;j<a[i];j++)
                cout<<i<<endl;
        }
    }
    return 0;
}

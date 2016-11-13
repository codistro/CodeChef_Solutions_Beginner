#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
struct post{
    int id;
    int special;
    int popularity;
    string feed;
}fb[1000],spl[1000],nspl[1000];
void BubbleSort(post *a,int size){
    long i,j = 0,swap =1 ;
    post temp;
    for(i = 0;i<size && swap;i++){
        swap = 0;
        for(j = 0 ;j< size - i - 1;j++){
            if(a[j].popularity<a[j+1].popularity){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swap = 1;
            }
        }
    }
}
int main(){
    int n,m,id[1000],k = -1,l =-1;
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        cin>>id[i];
    }
    for(int i = 0;i<m;i++){
        cin>>fb[i].id>>fb[i].popularity>>fb[i].feed;
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            if(id[j] == fb[i].id){
                spl[++k] = fb[i];
                fb[i].special = 1;
              }
        }
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            if(id[j] != fb[i].id && fb[i].special == 0 ){
                nspl[++l] = fb[i];
                fb[i].special = 1;
              }
        }
    }
    BubbleSort(spl,k + 1);
    BubbleSort(nspl,l + 1);
    for(int i = 0;i<=k;i++)
        cout<<spl[i].feed<<endl;
    for(int i = 0;i<=l;i++)
        cout<<nspl[i].feed<<endl;
}

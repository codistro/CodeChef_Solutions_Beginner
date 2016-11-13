#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[1000],x,i;
	for(i = 0;i<1000;i++){
		cin>>x;
		if(x == 42) break;
		a[i] = x;
	}
	for(int j = 0;j<i;j++)
		cout<<a[j]<<endl;
	return 0;
} 
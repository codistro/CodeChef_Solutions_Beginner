#include <iostream>
#include <stack>
#include<string.h>
#include<ctype.h>
using namespace std;
int prec(char ch){
    switch(ch){
        case '^' : return 3;
                    break;
        case '*':
        case '/': return 2;
                break;
        case '+':
        case '-': return 1;
                break;
        default: return -1;
    }
}
void pti(char a[]){
    stack<int> post;
    int k = -1;
    for(int i = 0;i<strlen(a);i++){
        if(isalnum(a[i]))
            a[++k] = a[i];
        else if(a[i] == '(')
            post.push(a[i]);
        else if(a[i] == ')'){
            while(!post.empty() && post.top()!= '('){
                a[++k] = post.top();
                post.pop();
            }
            post.pop();
        }
        else {
            while(!post.empty() && prec(a[i]) <= prec(post.top())){
                a[++k] = post.top();
                post.pop();
            }
            post.push(a[i]);
        }
    }
    while(!post.empty()){
        a[++k] = post.top();
        post.pop();
    }
    a[++k] = '\0';
    cout<<a<<endl;
}
int main()
{
   int t;
   cin>>t;
   for(int i = 0;i<t;i++){
        char a[400];
        cin>>a;
        pti(a);
   }
}

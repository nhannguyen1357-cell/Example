#include<bits/stdc++.h>
using namespace std;

bool check(int a){
    if(a<2) return false;
    for(int i=2;i<a;i++){
        if(a%i==0) return false;
    }
    return true;
}
int main(){
    int a;
    cin>>a;
    cout<<check(a);
}
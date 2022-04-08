#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void checkcountrycode(string str){
    string code ="";
    int count=0;
    for(auto x: str){
        code=code+x;
        count++;
        if(count==3){
            break;
        }
    }
    if(code=="+91"){
        cout<<"INDIA";
    }
}
int main(){
    string A[100];
    string str= "+918676019465";
    //Enter the input of number
    //int a;
    //cin>>a;
    //for (int i=0; i<a; i++){
       // cin>>A[i];
    //}
    checkcountrycode(str);
    return 0;
}
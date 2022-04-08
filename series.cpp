#include<bits/stdc++.h>
using namespace std;
int main(){
    int input1;
    int t=0;
    int input2[input1];
    for(int i=0; i<input1; i++){
        cin>>input2[i];
    }

     if (input2[1]-input2[0]==input2[2]-input2[1])
     {
      int t = (input2[0]+(input1*(input2[2]-input2[1])));
      cout<<t;
     }
     else if((input2[1]/input2[0])==(input2[2]/input2[1])){
         int t = (input2[0]*(pow((input2[2]/input2[1]),input1)));
         cout<<t;
     }
     else{
         int t = (input2[input1 - 1]+input2[input1-2]);
        cout<<t;
    }
    return 0;
}
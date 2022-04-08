#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    int A[5][5];
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            cin>>A[i][j];
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            cout<<A[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
}
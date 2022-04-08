#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,j,k;
    cout<<"Enter the number:"<<"\n";
    cin>>n;
    int A[n];
    cout<<"Enter the element number"<<"\n";
    for(i=0; i<n; i++){
        cin>>A[i];
    }
    cout<<"Desire element to add"<<"\n";
    cin>>j>>k;
    cout<<"Enter the number"<<"\n";
	int sum = A[j]+A[k];
    cout<<sum;
    return 0;
}
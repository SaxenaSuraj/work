#include<iostream>
using namespace std;
int main(){
    int x=10, y=15;
    int a,b,c,d,e,f;
    int *p1=&x;
    int *p2 = &y;
    int **p3 = &p1;
    //a=(*p1)++;
    //b=--(*p2);
    //c=*p1+(*p2)--;
    //d=++(*p2)-*p1;
    //e=++(**p3);
    f=((**p3)++)%2? x:y;
    cout<<f;
    return 0;
}
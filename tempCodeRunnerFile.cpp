#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int * fun ( int n){
    int *p;
    p = new int[n];
    p[0]=10;
    p[1]=12;
    cout<<p[0]<<endl;
    return p;
}

int main (){
    int * a;
    a = fun(5);
    cout<<a[3];
}
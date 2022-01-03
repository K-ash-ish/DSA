#include<iostream>
using namespace std;

int sqrt(int a){
    int mid , ans , start=0 , end=a/2, sqr;

    if(a== 0 || a == 1){
        return 1;
    }

    

    while(start<=end){
        mid = start + (end - start )/2;
         sqr = mid * mid;

        if(sqr == a){
            return sqr;
        }
        else if( sqr <= a){
            start = mid+1;
            sqr = mid;
        }
        else{
            end = mid - 1;
        }

    }
    return sqr;
    
    
}

int main (){
    int a = 11;
    cout<<sqrt(a);
    
}
#include<iostream>
using namespace std;

int guessNumber(int n){
    int pick ;
    cin>> pick;
    int start =0, end = n, mid;
    int ans , check;
    while(start < end){
        mid = start + (end - start )/2;
         if (mid < pick){
            start = mid + 1;
        }
        else if( mid > pick){
            end = mid -1;
        }
        else{
            return mid;
        }
    }
    if (pick > mid){
        return 1;
    }
    else return -1;

}

int main (){
    cout<<guessNumber(10);
}

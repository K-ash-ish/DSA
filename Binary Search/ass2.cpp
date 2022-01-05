#include<iostream>
using namespace std;

int guessNumber(int n){
   int target;
   cin>> target;
   int start = 1, end = n, mid;
   int ans ;
   while( start <= end){
       mid = start + (end - start)/2;
       if (mid == target){
           return mid;
       }
       else if( mid < target){
           start = mid +1;
       }
       else{
           end = mid - 1;
       }
       
   }
   return 0;
}

int main (){
    cout<<guessNumber(10);
}

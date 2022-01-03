#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

//optimised solution
int numberOfDigits2(int num){
    if(num<0){
         num = num*-1;
     }
    return (log10(num) + 1);
 }
// int numberOfDigits(int num){
//     if(num<0){
//         num = num*-1;
//     }
//     int count =0;
//     while(num>0){
//         count++;
//         num = num/10;
//     }
//     return count;
// }
int even(int x){
    int num = numberOfDigits2(x);
    return num%2 == 0;
}


int findNumbers(vector<int>& nums){
    // int count = 0;
    //  for(int x : nums){
    //      if(even(x)){
    //          count++;
    //      }
    // }
    // cout<<count;
    // return count;
    cout<<nums.size();
}

int main(){
    vector<int> nums {45,2,6,7896};
    findNumbers(nums);
}
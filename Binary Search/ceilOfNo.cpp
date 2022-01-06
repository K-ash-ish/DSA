#include<iostream>
using namespace std;

//Number just greater than or equal to target

template<size_t N>
int ceil(int (&a)[N], int target){
    if(target > a[N-1]){
        return -1;
    }
    int start = 0, end = N-1; 
    int mid;
    while(start <= end){
        mid = start + (end - start)/2;
        if( a[mid] > target){
            end = mid -1;
        }
        else if ( a[mid] < target){
            start = mid+1;
        }
        else{
            return mid;
        }
    }
    return start;
}

int main(){
    int a[5] = {2, 4, 6, 8, 10};
    cout<<ceil(a, 3);
}
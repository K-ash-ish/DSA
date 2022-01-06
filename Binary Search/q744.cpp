#include<iostream>
using namespace std;

//Number just greater than or equal to target

template<size_t N>
char ceil(char (&letters)[N], char target){
    int start = 0, end = N-1; 
    int mid;
    while(start <= end){
        mid = start + (end - start)/2;
        if( letters[mid] > target){
            end = mid -1;
        }
        else{
            start = mid+1;
        }
    }
    return letters[start % N] ;
}

int main(){
    char letters[3] = {'c', 'f', 'j'};
    cout<<ceil(letters, 'j');
}
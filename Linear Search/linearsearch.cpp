#include <iostream>
using namespace std;

int searchArray(int arr[], int l, int target);

int main (){
    int arr[6] = {3,4,5,67,2,1};
    int l = sizeof(arr)/sizeof(arr[0]);
    cout<<searchArray(arr, l, 6);
    return 0;

}

int searchArray(int arr[], int l, int target){
    for(int i=0; i < l ; i++){
       if(arr[i] == target){
           return 1;
       }
    }
    
    return -1;
}
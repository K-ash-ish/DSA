#include <iostream>
using namespace std;

int cyclicSort(int arr[], int size){
    int i=0;
    while(i< size){
        int correct = arr[i] - 1;
        if(arr[i] != arr[correct]){
            int temp;
            temp = arr[i];
           arr[i] = arr[correct];
           arr[correct]= temp;
            // cout<<"ok";
        }
        else {
            i++;
            // cout<<"not";
        }
        
    }
}

int main(){
    int arr[5] = {3,1,4,5,2};
    cyclicSort(arr, 5);
    for(int x : arr){
        cout<<x<<" ";
    }
}


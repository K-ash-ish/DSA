#include <iostream>
using namespace std;
int findMax(int arr[], int start, int end){
    int max = start;
    for(int i = 0 ; i <= end; i++){
        if(arr[max]< arr[i]){
            max = i;
        }
    }
    return max;
}
int swap (int arr[], int maxIndex, int lastIndex){
    int temp;
    temp = arr[maxIndex];
    arr[maxIndex] = arr[lastIndex];
    arr[lastIndex] = temp;
}
int selection(int arr[], int size){
    for(int i = 0; i < size ; i++){
        int last = size - i - 1;
        int maxIndex = findMax(arr, 0, last);
        swap(arr, maxIndex, last);
    }
}

int main(){
    int arr[5] = {10, 4, 6, 2,1};
    selection(arr, 5);
    for(int i = 0 ;i < 5; i++){
        cout<<arr[i]<<" ";
    }
}
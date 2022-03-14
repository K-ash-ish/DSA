#include <iostream>
using namespace std;

int bubble(int arr[], int size){
    bool swap = false;
    for(int i= 0; i< size ;i++ ){
        for (int j = 0; j < size - i; j++)
        {
            if(arr[j+1] < arr[j]){
                int temp;
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swap = true;
            }
        }
        if(!swap){
            // cout<<"break time ";
            break;
        }
        // cout<<"no break ";
        
    }
    for(int i = 0; i< size ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
     int arr[5] = {1, 2, 3, 4, 5};
     bubble(arr, 5);
     
}

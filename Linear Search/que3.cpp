#include<iostream>
using namespace std;

int search(int arr[2][5], int target);
int main (){
    int arr[2][5]={
        {1,2,3,5},
        {33,31,4,12,2}
    };
   search(arr, 12);
    
}

int search(int arr[][5], int target){
    for(int i = 0 ; i < 2; i++){
        for(int j = 0 ; j < 5; j++){
            if(arr[i][j] == target){

                cout<<"["<<i<<" ,"<<j<<"]";
                return 0;
            }
        }
    }
    cout<<-1;
}
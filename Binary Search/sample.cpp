#include<iostream>
using namespace std;
void print(int arr[]){
    cout<<sizeof(arr);
}
int main (){
    int arr = [1,2,34,4];
    cout<<"Insde main size "<<sizeof(arr)<<endl;
    print(arr);
}
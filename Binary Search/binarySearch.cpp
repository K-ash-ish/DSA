#include<iostream>
#include<vector>
using namespace std;

template <size_t N>
int binarySearch(int (&a)[N], int target){
    int start = 0;
    int end = N-1;
    while(start <= end){
        // int mid = (start + end)/2; exceed int range
        int mid = start + (end - start)/2;
        if(target < a[mid]){
            end = mid-1;
        }        
        else if (target > a[mid]){
            start = mid+1;
        }
        else{
            return mid;
        }
     }
     return -1;
    
}

int main(){
    int a[5] = {3,5,7,8,9};
    cout<<binarySearch(a, 7);
}




// vector way
// int binarySearch(vector<int>& a, int target){
//     for(int x : a){
//         cout<<x<<" ";
//     }
// }

// int main(){
//     vector<int> a {3,5,7,8,9};
//     binarySearch(a, 9);
// }
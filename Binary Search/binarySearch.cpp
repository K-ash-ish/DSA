#include<iostream>
#include<vector>
using namespace std;

template <size_t N>


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
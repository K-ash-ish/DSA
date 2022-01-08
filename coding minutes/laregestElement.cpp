#include<iostream>
#include<vector>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
    // your code  goes here
    int start = 0, end = a.size() -1;
    while(k--){
       a.insert(a.begin(), a[end]);
       a.pop_back();
    }
    for(int x : a){
        cout<<x<<" ";
    }
}
int main(){
    vector<int> arr = {-3,4,1,2,3};
    kRotate(arr,2);
}



    
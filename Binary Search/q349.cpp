#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> i {1,4,3,5,6,2};
    sort(i.begin(), i.end());
    for(int x : i){
        cout<<x<<" ";
    }
}
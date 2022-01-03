#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
    vector<vector<int>> accounts = {{1,2,9},{4,2,1}};
    int temp =0;
    int sum=0;
    for(vector<int> vect1d : accounts){
        for (int x : vect1d){
            temp+=x;
            if(temp>=sum){
                sum =temp;
            }
        }
        temp = 0;
        
    }
    cout<<sum;

}
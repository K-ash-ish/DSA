// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
#include<vector>
#include<iostream>
using namespace std;

vector<int> checkSum( vector<int>& numbers, start, end){
    return numbers[start]+numbers[end];
}

vector<int> twoSum(vector<int>& numbers, int target) {
    int mid, start = 0, end = numbers.size();
    int arr[2] ;
    while(start <= end){
        mid = start + (end - start)/2;
        if( checkSum(numbers, mid, mid+1) > target){
            end = mid - 1;
        }
        else if (checkSum(arr, mid, mid - 1) < target){
            start = mid+1;
        }
        else{
            ans[0]= mid+1;
            ans[1] = mid+2;
        }
    }
    return ans;
}

int main(){
    vector<int> numbers = {2,7,11,15};
    int target = 9;
    twoSum(numbers, target);
}
#include<iostream>
#include<vector>
using namespace std;

template<size_t N>
int searchRange(int (&a)[N], int target) {
    int start = 0, end = nums.size()-1;
    int mid ;
    vector<int> ans;
    while(start <= end){
        mid = start + (end - start )/2;
        if(nums[mid] > target){
            end = mid -1;
        }
        else if ( nums[mid] < target){
            start = mid + 1;
        }
        else {
            ans.push_back(end);
            ans.push_back(start);
            return ans;
        }
    }
    ans.push_back(-1);
    ans.push_back(-1);
    return ans;
}

int main(){
    int nums[6] = {5,7,7,8,8,10};
    vector<int> ans = searchRange(nums, 8);
    cout<<ans;
}
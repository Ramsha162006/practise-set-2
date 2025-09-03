// majority element greater than n/2 times
#include<iostream>
#include<vector>
using namespace std;

int MajorityElement(vector<int>& nums){
    for(int i = 0;i<nums.size();i++){
        int count = 0;
        for(int j = 0;j<nums.size();j++){
            if(nums[j] == nums[i]){
                count++;
            }
        }
        if (count>nums.size()/2){
            return nums[i];
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {1,2,3,2,2,2};
    int result = MajorityElement(nums);
    cout<<result<<endl;
}
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& nums,int target){
    unordered_map<int,int>hashMap;
    for(int i = 0;i<nums.size();i++){
        int complement = target - nums[i];
        if(hashMap.find(complement)!=hashMap.end()){ // if complement not found then index and num would stored in hashMap
            return {hashMap[complement],i};
        }
        hashMap[nums[i]] = i;
    }
    return {};
}

int main(){
   vector<int> nums = {1,2,3,4,5};  // no square braces used with arr
   
    int target = 6;
   vector<int> result = twoSum(nums,target);
   if(!result.empty()){
    cout<<"Indices : "<<result[0]<<"and"<<result[1]<<endl;
   }
   else{
    cout<<"no solution found!"<<endl;
   }
  
}
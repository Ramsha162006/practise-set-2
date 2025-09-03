#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums,int target){
    vector<pair<int,int>>valIndex;
    for(int i = 0;i<nums.size();i++){
        valIndex.push_back({nums[i],i});
    }
    sort(valIndex.begin(),valIndex.end());
    int left = 0 , right = nums.size()-1;
    while(left<right){
        int sum = valIndex[left].first + valIndex[right].first;
        if(sum == target){
            return {valIndex[left].second,valIndex[right].second};
        }
        else if(sum<target){
            left++;
        }
        else{
            right++;
        }
    }
    return {};
}

int main(){
   vector<int> arr = {1,2,3,4,5};  // no square braces used with arr
   
    int target = 6;
   vector<int> result = twoSum(arr,target);
   if(!result.empty()){
    cout<<"Indices : "<<result[0]<<"and"<<result[1]<<endl;
   }
   else{
    cout<<"no solution found!"<<endl;
   }
  
}
#include<iostream>
#include<vector>
using namespace  std;

int MajorityElement(vector<int>nums){
    int count = 0;
    int candidate = 0;
    for(int num:nums){
        if(count == 0){
            candidate = num;
        }
        count+= (num == candidate)?1:-1;
    }
    count = 0;
    for(int num:nums){
        if(num == candidate){
            count++;
        }
    }
    if(count>nums.size()/2){
        return candidate;
    }
    return -1;
}

int main(){
    vector<int> nums = {1,2,3,2,2,2};
    int result = MajorityElement(nums);
    if(result != -1){
        cout<<"majority element:"<<result<<endl;
    }
    else{
        cout<<"no majority element "<<endl;
    }
}
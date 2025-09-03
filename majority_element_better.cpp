#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int MajorityElement(vector<int>& nums){
    unordered_map<int,int>freq;
    int n = nums.size();
    for(int num:nums){
        freq[num]++;
        if(freq[num]>n/2){
            return num;
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {1,2,3,2,2,2};
    int result = MajorityElement(nums);
    cout<<result<<endl;
}
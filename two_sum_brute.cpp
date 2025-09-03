#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& arr,int target){
    int n = arr.size();
    for(int i = 0;i<n;i++){
        for(int j = i+1 ; j<n;j++){
            if(arr[i]+arr[j]==target){
                return {i,j};
            }
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
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxProfit(vector<int>& prices){
    int minPrice = INT_MAX;
    int maxProfit = 0;
    for(int i = 0; i< prices.size();i++){
        if(prices[i]<minPrice)
        minPrice = prices[i];
    else{
        maxProfit = max(maxProfit,prices[i]-minPrice);
    }
    }
    return maxProfit;
}

int main(){
    vector<int> prices = {7,2,9,1,5};
    int result = maxProfit(prices);
    cout<<result<<endl;
}
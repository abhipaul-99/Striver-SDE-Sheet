#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int minPrice= INT_MAX, profit=0;
    for (int i =0;i<prices.size();i++){
        minPrice = min(minPrice,prices[i]);
        profit = max(profit,prices[i]-minPrice);
    }
    return profit;
}

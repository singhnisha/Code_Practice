/*
Time complexity -  O(n)
Space complexity - O(1)
*/

#include<iostream>
#include<vector>

//using namespace std;

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int buyPrice = prices[0];
        int profit = 0;

        for(int i=1; i<prices.size(); i++){
            if(buyPrice > prices[i])
                buyPrice = prices[i];

            profit = std::max(profit, prices[i]-buyPrice); 
        }
        return profit;
    }
};

int main(){
    Solution sol;
    std::vector<int> stock_prices = {7,1,5,3,6,4};
    int ret = sol.maxProfit(stock_prices);
    std::cout << "Profit is " << ret << std::endl;
}
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {

            if (prices[i] < minimum) {
                minimum = prices[i];
            }
            else {
                int profit = prices[i] - minimum;

                if (profit > maxProfit) {
                    maxProfit = profit;
                }
            }
        }

        return maxProfit;
    }
};

int main(void) {
    vector<int> prices = {7,1,5,3,6,4};
    Solution sol;
    int result=sol.maxProfit(prices);
    cout<<result;

    return 0;

}
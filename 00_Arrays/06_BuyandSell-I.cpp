/*

                //Brute Force Approach
                TC - N^2
                SC - 1

    The simple solution is to check every possible pair and find the pair which gives maximum profit

    int maxProfit(vector<int> &prices) {
        int n = prices.size();
        int profit = 0;

        for(int i=0 ; i<n ; i++){
            for(int j=i+1 ; j<n ; j++) {
                profit = max(profit , prices[j]-prices[j]);
            }
        }
        return profit;
    }

*/



/*

            //Optimised Approach 
            TC - N
            SC - 1

    Trverse the given arrays and while traversing keep updating the minimum price.
    Also, keep updating the maximum difference between the current selling price and minimum price during the traversal to get maximum profit.

    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int minPrice = INT_MAX;
        int profit = 0;
        
        for(int i=0 ; i<n ; i++){
            minPrice = min(minPrice , prices[i]);
            profit = max(profit , prices[i]- minPrice);
        }
        return profit;
    }

*/
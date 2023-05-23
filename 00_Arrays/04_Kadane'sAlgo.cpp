/*

            //Brute Force Approach
            TC - N^3
            SC - 1

    Run three loops, get all possible subarrays in two loops and their sum in another loop, the return the maximum of them.

*/

/*

            //Better Approach
            TC - N^2
            SC - 1
    
    If we optimise the above Approach, we can get sum of all possible subarrays in two loops only, the return the maximum so far.

    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int max_sum = INT_MIN;

        for(int i=0 ; i<n ; i++){
            int curr_sum = 0;
            for(int j=i+1 ; j<n ; j++){
                curr_sum += nums[j];
                
                max_sum = max(max_sum , curr_sum);
            }
        }
        return max_sum;
    }

*/

/*

            // Optimised Approach  - Kadane's Algorithm
            TC - N
            SC - 1

    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int maxi = INT_MIN;
        int sum = 0;

        for(int i=0 ; i<n ; i++)
        {
            sum += nums[i];
            if(sum > maxi){
                maxi = sum;
            }
            if(sum < 0)
            {
                sum = 0;
            }
        }
        return maxi;
    }



*/
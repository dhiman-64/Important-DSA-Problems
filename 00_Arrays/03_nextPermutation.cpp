/*

            // Brute Force Approach
            TC - (N! * N) Because there are N! orders and N is the length of every array

    find all the possible permutations and then sort them, the find the position of given permutation in all permutation and return the next permutation from that position AND if the given permutation is the alst permutataion then return the very first permutation from our sorted permutataions.

*/

/*

            // Optimised Approach 
            TC - N
            SC - 1

    Using the STl in c++ language, i.e, 
    next_permutation(nums.begin() , nums.end());


*/

/*

            // Most Optimised Approach 
            TC - N
            SC - 1

    Implementation of above STL 

    vector<int> nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int index = -1;

        for(int i=n-2 ; i>=0 ; i--){        // Find the Break point
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }

        if(index == -1)                    // if no breakpoint(arr sorted in desc)
        {
            reverse(nums.begin() , nums.end());
            return;
        }

        for(int i=n-1 ; i>=index ; i--){            //swap the breakpoint
            if(nums[i] > nums[index]){
                swap(nums[i] , nums[index]);
                break;
            }
        }

        reverse(nums.begin() + index+1 , nums.end());       //reverse elements after breakpoint
        return;
        
    }


*/
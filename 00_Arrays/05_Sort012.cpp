/*

            //Brute Force Approach
            TC - NlogN
            SC - 1

    sort the given Array

*/ 

/*

            //Better Approach 
            TC - 2N(N+N)
            SC - 1
    
    linearly traverse the array and count the no of zeros, ones and twos and then run a loop over the array and set these values accordingly(N)

    void sort012(vector<int> &arr, int n)
    {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        for(int i=0 ; i<n ; i++)
        {
            if(arr[i] == 0) count0++;
            else if (arr[i] == 1) count1++;
            else if(arr[i] == 2) count2++;

        }
        for(int i=0 ; i<count0 ; i++){
            arr[i] = 0;
        }
        int total = count0 + count1;
        for(int i=count0 ; i<total ; i++){
            arr[i] = 1;
        }
        for(int i=total ; i<n ; i++){
            arr[i] = 2;
        }
    }

*/

/*

            // Dutch National FLag Algorithm
            TC - N
            SC - 1

    take three pointers low,mid,high
    place low and mid at 0 index and high at last index intitially
    now run a while loop mid<=high and check conditions

    void sort012(vector<int> &nums)
    {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n-1;
        while(mid <= high)
        {
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else if(nums[mid] == 2){
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }


*/
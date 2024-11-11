#include <iostream>
#include <vector>

class Solution{
    public:
        /* // This solution might not work if all array elements are negative because of 16th line
            Time complexity: O(n)
            Space Complexity: O(1)
        */
        int maxSumSubarray(std::vector<int>& nums){
            int curr_sum = 0, max_sum = 0;
            for(auto i:nums){
                curr_sum += i;
                max_sum = std::max(curr_sum,max_sum);

                if(curr_sum < 0)
                    curr_sum = 0;
            }
            return max_sum;
        }

        int maxSumSubarrayForAllElements(std::vector<int>& nums){
            int curr_sum = nums[0], max_sum = nums[0];
            for(int i=1; i<nums.size(); i++){
                curr_sum = std::max(nums[i],curr_sum + nums[i]);
                if(curr_sum > max_sum)
                    max_sum = curr_sum;
            }
            return max_sum;
        }
};

int main(){
    Solution sol;
    //std::vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    std::vector<int> arr = {5,4,-1,7,8};
    int ret = sol.maxSumSubarray(arr);
    std::cout << ret << std::endl;

    std::vector<int> arr2 = {5,4,-1,7,8};
    int ret2 = sol.maxSumSubarrayForAllElements(arr2);
    std::cout << ret2 << std::endl;
    return 0;
}
// https://www.youtube.com/watch?v=Y6B-7ZctiW8 -> youtube link
#include <iostream>
#include <vector>

class Solution{
    public:
        /*
            Time complexity: O(n)
            Space complexity: O(1)
        */
        int maxProductSubarrayProduct(std::vector<int>& nums){
            // Because of negative number in array, we might get -ve result from right and better(max/+ve)
            // result from left subarray so using L and R side counting of subarray product
            int leftproduct = 1, rightproduct = 1, max_product = nums[0], n = nums.size();

            for(int i=0; i<n; i++){
                // if we got 0 as element/product, start fresh subarray count by updating resultant
                // current subarray product to 1 and start counting from that point for new subarray
                leftproduct = leftproduct == 0 ? 1 : leftproduct;
                rightproduct = rightproduct == 0 ? 1 : rightproduct;

                leftproduct *= nums[i];
                rightproduct *= nums[n-1-i];

                max_product = std::max(max_product,std::max(leftproduct,rightproduct));
            }

            return max_product;
        }
};

int main(){
    Solution sol;
    // when we have odd count of negative no. in the array
    std::vector<int> arr = {2,3,-2,4};
    int ret = sol.maxProductSubarrayProduct(arr);
    std::cout << ret << std::endl;

    // When we have zero inbetween
    std::vector<int> arr2 = {-2,0,-1};
    ret = sol.maxProductSubarrayProduct(arr2);
    std::cout << ret << std::endl;
    return 0;
}
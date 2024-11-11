#include <iostream>
#include <vector>

class Solution{
    public:
        /*
        Time complexity: O(n)
        Space compexity: O(1)
        */
        std::vector<int> productExceptSelf(std::vector<int>& nums){
            int n = nums.size();
            std::vector<int> res(n,1);

            int prefix = 1;
            for(int i=1; i<n; i++){
                res[i] *= prefix;
                prefix *= nums[i];
            }

            int postfix = 1;
            for(int i=n-1; i>=0; i--){
                res[i] *= postfix;
                postfix *= nums[i];
            }

            return res;
        }
};

int main(){
    Solution sol;
    std::vector<int> arr = {1,2,3,4};
    std::vector<int> ret = sol.productExceptSelf(arr);
    for(auto i:ret)
        std::cout << i << " ";
    std::cout << std::endl;
    arr = {1,2,3,-1,1,0,-3,3};
    ret = sol.productExceptSelf(arr);
    for(auto i:ret)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
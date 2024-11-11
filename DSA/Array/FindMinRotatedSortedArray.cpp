#include <iostream>
#include <vector>

class Solution{
    public:
        int findMinRotatedSortedArray(std::vector<int> &nums){
            int left = 0;
            int right = nums.size()-1;

            // Handle edge cases
            if (nums.size() == 0) {
                throw std::invalid_argument("The array is empty.");
            }
            if (nums.size() == 1) {
                return nums[0];
            }

            // If already a sorted array
            if(nums[left] < nums[right])
                return nums[left];

            while(left < right){
                int mid = left+(right-left)/2;

                if(nums[mid] > nums[right]){
                    left = mid + 1;
                } else {
                    right = mid;
                }
            }
            return nums[left];
        }
};

int main(){
    Solution sol;
    std::vector<int> arr = {4,5,6,7,0,1,2};
    int ret = sol.findMinRotatedSortedArray(arr);
    std::cout << ret << std::endl;
    return 0;
}
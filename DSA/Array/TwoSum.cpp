#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int const target) {
        unordered_map<int,int> numMap;
        int n=nums.size();

        for(int i=0; i<n; i++){
            int complement = target - nums[i];
            if(numMap.count(complement)){
                return {numMap[complement],i};
            }
            numMap[nums[i]] = i;
        }
        // No solution found
        return {};
    }
};

int main(){
    Solution obj;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> ret = obj.twoSum(nums, target);
    if(!ret.empty())
        cout << "Indicied " << ret[0] << " " << ret[1] << endl;
    else
        cout << "Not found" << endl;
    return 0;
}
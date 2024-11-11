// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

class Solution {
public:
    /*  // Using hash set (unordered_set)
        Time complexity -  O(n)
        Space complexity - O(n) //using unordered_set
    */
    bool containsDuplicate1(std::vector<int>& nums) {
        std::unordered_set<int> data;
        for(auto i:nums){
            if(data.count(i))
                return true;
            data.insert(i);
        }
        return false;
    }

    /*  // Using sort() first then checking adjacent elements
        Time complexity -  O(n log n) //using sort() function
        Space complexity - O(log n) // sort() function
    */
    bool containsDuplicate2(std::vector<int>& nums) {
        std::sort(nums.begin(),nums.end());

        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1])
                return true;
        }
        return false;
    }

    /*  // putting into set(remove duplicates) and comparing original vs set length
        Time complexity -  O(n)
        Space complexity - O(n)
    */
    bool containsDuplicate3(std::vector<int>& nums) {
        std::unordered_set<int> data(nums.begin(),nums.end());

        return data.size() < nums.size();
    }    
};


int main() {
    Solution sol;
    std::vector<int> arr = {1,1,1,3,3,4,3,2,4,2};
    /*std::vector<int> arr;
    int a;
    char ans = 'y';
    std::cout << "Enter vector list\n";
    do{
        std::cin >> a;
        arr.push_back(a);
        std::cout << "Once done press 'n'\n";
        std::cin >> ans;
    }while(ans!='n');*/
    std::cout << "Vector elements are : \n";
    for(auto i:arr)
        std::cout << i << " ";
    std::cout << std::endl;
    if(sol.containsDuplicate1(arr))
        std::cout << "Duplicates are present\n";
    else
        std::cout << "No duplicates found\n";
    
    if(sol.containsDuplicate2(arr))
        std::cout << "Duplicates are present\n";
    else
        std::cout << "No duplicates found\n";
    
    if(sol.containsDuplicate3(arr))
        std::cout << "Duplicates are present\n";
    else
        std::cout << "No duplicates found\n";
    return 0;
}
#include "root.hpp"


namespace brute_force {
    //brute force
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); ++i){
            for(int j = i + 1; j < nums.size(); ++j){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};
    }
}




namespace two_pass_hash_table {
    //two pass hash table
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> hash_table;
        for(int i = 0; i < nums.size(); ++i){
            hash_table[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); ++i){
            int complement = target - nums[i];
            if(hash_table.find(complement) != hash_table.end() && hash_table[complement] != i){
                return {i, hash_table[complement]};
            }
        }
        return {};
    }
}



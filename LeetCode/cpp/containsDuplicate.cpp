#include "root.hpp"


//hash table

bool containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> hash_table;
    for(int i = 0; i < nums.size(); ++i){
        if(hash_table.find(nums[i]) != hash_table.end()){
            return true;
        }
        hash_table.insert(nums[i]);
    }
    return false;
}


//hash set

bool containsDuplicate_hashSet(std::vector<int>& nums) {
    std::unordered_set<int> hash_set;
    for(int i = 0; i < nums.size(); ++i){
        if(hash_set.find(nums[i]) != hash_set.end()){
            return true;
        }
        hash_set.insert(nums[i]);
    }
    return false;
}


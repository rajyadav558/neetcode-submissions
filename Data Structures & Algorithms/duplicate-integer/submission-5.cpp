#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
   bool hasDuplicate(vector<int>& nums) {
       unordered_set <int> us = {};
       for(auto x:nums)
        us.insert(x);
       
       if(nums.size() != us.size()){
          return true;
       }
       return false;
        
    }
};
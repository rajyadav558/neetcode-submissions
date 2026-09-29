class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       map<int ,int> um;
       
       vector<int> vec;

 struct CompareBySecond {
    bool operator()(pair<int, int>& a, pair<int, int>& b) const {
        return a.second < b.second; 
    }
};
       
       priority_queue<pair<int ,int> ,vector<pair<int,int>>, CompareBySecond> v;

       for(auto x:nums){
        um[x]++;
       }
       for(auto y:um){
        v.push({y.first ,y.second});
       }
       while(k>0){
         vec.push_back(v.top().first);
         v.pop();
         k--;
       }
       return vec;
    }
};

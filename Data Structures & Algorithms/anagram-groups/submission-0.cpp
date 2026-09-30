class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ans;
        vector<vector<string>> sol;

        for(auto x : strs){
          string temp = x;
          sort(x.begin(), x.end());
          ans[x].push_back(temp);
        }

        for(auto y: ans){
            sol.push_back(y.second); 
        }

        return sol;

    }
};

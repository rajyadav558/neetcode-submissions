class Solution {
public:
    bool isAnagram(string s, string t) {
       
        unordered_map<char ,int> sc;
        unordered_map<char, int> tc;
        unordered_set<int> charcount;
        
        if(s.length() != t.length()){
         return false;
        }

        
           for(int i= 0; i<s.length(); i++){
            sc[s[i]]++;
            tc[t[i]]++;
           }
           return sc == tc;
        
        
    }
};

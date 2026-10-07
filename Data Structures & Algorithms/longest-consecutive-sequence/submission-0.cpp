class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int c=0; int prev = 0;
        int maxc=0;
        sort(nums.begin(), nums.end());
        for(int i =0; i<nums.size(); i++){
            if(i == 0){
                c++;
                prev = nums[i];
            }
            else if(prev == nums[i]){
                continue;
            }
            else if(i>0){
                if(nums[i-1]+1== nums[i]){
                    c++;
                    prev = nums[i];
                }
                else{
                    maxc = max(maxc, c);
                    c= 1;
                    prev = nums[i];
                }
            }
        }
        maxc = max(maxc, c);
        return maxc;
    }
};

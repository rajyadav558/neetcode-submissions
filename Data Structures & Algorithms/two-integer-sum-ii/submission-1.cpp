class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int j=numbers.size()-1;
        for(int i=0;i<j;){
            if(numbers[i]+numbers[j]<target){
                i++;
            }
            else if(numbers[i]+numbers[j]>target){
                j--;
            }
            else if(numbers[i]==numbers[j]){
                continue;
            }
             else if(numbers[i]+numbers[j]==target){
                return {i+1, j+1};
            }
        }
    }
};

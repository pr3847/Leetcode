class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s=nums.size();
        vector<int> result;
        for(int i=0;i<s;i++){
            for(int j=i+1;j<s;j++){
               int t=nums[i]+nums[j];
                if(t==target){
                    for (int index_match : {
                            i, j
                        })
                    result.push_back(index_match);
                }
            }
        }
        return result;
    }
};
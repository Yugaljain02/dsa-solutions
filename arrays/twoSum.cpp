class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int j=0;
        while(j<nums.size()){
            int x = target-nums[j];
            if(m.find(x)!=m.end()){
                return {m[x],j};
            }
            m[nums[j]]=j;
            j++;
        }
        return {-1,-1};
        
    }
};

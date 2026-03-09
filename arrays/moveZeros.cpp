class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int n = nums.size();
         if(n==1) return;
          int s=-1;
          
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                s=i;
                break;
            }

    }
    if(s==-1) return;
    int j=-1;
    for(int i=s+1;i<n;i++){
            if(nums[i]!=0){
                j=i;
                break;
            }
            }
        if(j==-1) return;
     
        while(s<n){
          //  if(j<n && nums[s]==0){
            if(nums[s]==0 && j<n){
                swap(nums[s],nums[j]);
                while(j<n && nums[j]==0){
                    j++;
                }
            }
            s++;
             
        }
        
    }
};

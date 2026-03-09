class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxsum =0;
        int minval=prices[0];
        int j=1;
        while(j<prices.size()){
              minval = min(minval,prices[j]);
            if(prices[j]>prices[j-1]){
                
                maxsum = max(maxsum,prices[j]-minval);
            
               
            }
             j++;
        }
            return maxsum;
        }
        
    
};

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m =text1.size();
        int n =text2.size();
        vector<int>curr(n+1,0), prev(n+1,0);
        for(int i=0;i<=n;i++){
            prev[i] = 0;
        }
        for(int idx=1;idx<=m;idx++){
            for(int j=1;j<=n;j++){
               
                if(text1[idx-1]==text2[j-1]) curr[j] = 1+ prev[j-1];
                else  curr[j] = max(prev[j],curr[j-1]);

            }
            prev = curr;
        }
        return prev[n];
    }
};

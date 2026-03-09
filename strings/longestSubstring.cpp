class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="") return 0;
        unordered_set<char>m;
        int maxlen = INT_MIN;
        int len=0;
        int left=0;
        for(int right=0;right<s.length();right++){
            while(m.find(s[right])!=m.end()){
               m.erase(s[left]);
               left++;
               len--;
               
               
            }
        
                m.insert(s[right]);
                  len++;
            maxlen = max(maxlen,len);
             
              
              
         
        }
         return maxlen; 
    }
};

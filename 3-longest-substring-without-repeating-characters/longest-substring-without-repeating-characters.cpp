class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        unordered_map<char,int>mp;
        int maxlen=0;
        int n=s.size();
        while(r<n){
            if(mp.find(s[r])!=mp.end()){
                if(mp[s[r]]>=l){
                    l=mp[s[r]]+1;
                }
            } 
            mp[s[r]]=r;
            int len=(r-l+1);
            maxlen=max(maxlen,len);
            r++;
        }
        return maxlen;
        }};
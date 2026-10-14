class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int start=0;
        int maxlen=0;
        for(int i=0;i<n;i++){
            int right =i,left=i;
            while(left>=0 && right <n && s[left]==s[right]){
                if(right-left +1 >maxlen){
                    start=left;
                    maxlen=right-left+1;
                }
                left--;
                right++;
            }
            right=i+1;
            left=i;
            while(left>=0 && right <n && s[left]==s[right]){
                if(right-left +1 >maxlen){
                    start=left;
                    maxlen=right-left+1;
                }
                left--;
                right++;
            }
        }
        return s.substr(start,maxlen);
    }
};
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>=s.size()){
            return s;
        }
        vector<string> row(numRows);
        int currow=0;
        int dir=1;
        for(char c: s){
            row[currow]+=c;
            if(currow==0){
                dir=1;
            }
            else if(currow==numRows - 1){
                dir=-1;
            }
            currow+=dir;
        }
        string result="";
        for(string rows:row){
            result+=rows;
        }
        return result;
    }
};
class Solution {
public:
    static bool cmp(string &a, string &b){return (a.size()<b.size());}
    //Time O(m*n) | Space O(1)
    string longestCommonPrefix(vector<string>& strs) {  
    if(strs.size() <= 1){
        return strs[0];
    }
    sort(strs.begin(),strs.end(),cmp);
    int strsIdx = 0;
    int charIdx = 0;
    char currentChar = strs[0][0];
    bool hasPrefix = true;
    string prefix = "";
    while(hasPrefix){
        if(currentChar != strs[strsIdx][charIdx]){
            hasPrefix = false;
        } else {
            if(strsIdx < strs.size()-1){
                strsIdx++;
            } else {
                if(currentChar != NULL){
                    prefix += currentChar;
                }
                strsIdx = 0;
                charIdx++;
                if(charIdx < strs[0].size()){
                    currentChar = strs[strsIdx][charIdx];           
                } else {
                    hasPrefix = false;
                }
            }
        }
    }
    return prefix;
    }
};
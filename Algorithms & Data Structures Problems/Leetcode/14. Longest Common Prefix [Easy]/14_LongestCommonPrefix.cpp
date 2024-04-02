/*
14. Longest Common Prefix
Easy
String Trie

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters.
*/
class Solution {
public:
    //Time O(S) | O(1)
    //S sum of all characters in strings
    string longestCommonPrefix(vector<string>& strs) {  
    if(strs.size() <= 1){
        return strs[0];
    }
    int strsIdx = 0;
    int charIdx = 0;
    char currentChar = strs[0][0];
    string prefix = "";
    while(true){
        if(currentChar != strs[strsIdx][charIdx]){
            return prefix;
        }
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
                return prefix;
            }
        }
    }
    }
};
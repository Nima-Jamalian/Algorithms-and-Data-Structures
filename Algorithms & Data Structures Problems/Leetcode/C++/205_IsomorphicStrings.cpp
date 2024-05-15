/*
205. Isomorphic Strings
Easy
Hashtable String

Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

Example 1:

Input: s = "egg", t = "add"
Output: true
Example 2:

Input: s = "foo", t = "bar"
Output: false
Example 3:

Input: s = "paper", t = "title"
Output: true
 

Constraints:

1 <= s.length <= 5 * 10^4
t.length == s.length
s and t consist of any valid ascii character.
*/
class Solution {
public:
    // Time O(n) | Space O(1) (map only consist of alphabet characters)
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char,char> m1,m2;
        for(int i=0 ; i< s.size(); i++){
            if(!m1[s[i]] && !m2[t[i]]){
                m1[s[i]] = t[i];
                m2[t[i]] = s[i];
            } else if(m1[s[i]]!=t[i] || m2[t[i]]!=s[i]){
                return false;
            }
        }
        return true;
    }
};

//Another Approach
class Solution {
public:
    // Time O(n) | Space O(1)
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        map<char,char> m1, m2;
        for(int i=0 ; i< s.size(); i++){
            if(m1[s[i]] != m2[t[i]]){
                return false;
            } else {
                m1[s[i]] = t[i];
                m2[t[i]] = t[i];
            }
        }
        return true;
    }
};
/*
344. Reverse String
Easy
Tow Pointers, String

Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
 

Constraints:

1 <= s.length <= 10^5
s[i] is a printable ascii character.
*/
class Solution {
public:
    //Time O(n) |  Time O(1)
    void reverseString(vector<char>& s) {
        int lastIdx = s.size()-1;
        for(int i=0; i<s.size()/2; i++){
            int temp = s[i];
            s[i] = s[lastIdx];
            s[lastIdx] = temp;
            lastIdx--;
        }
    }
};
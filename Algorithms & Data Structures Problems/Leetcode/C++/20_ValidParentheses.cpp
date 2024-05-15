/*
20. Valid Parentheses
Easy
String, Stack

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
 

Constraints:

1 <= s.length <= 10^4
s consists of parentheses only '()[]{}'.
*/
class Solution {
public:
    //Time O(n) | Space O(n)
    bool isValid(string s) {
    if(s.length() % 2 != 0){
        return false;
    } else {
        vector<char> vector;
        for(int i=0; i<s.length(); i++){
            char value = s.at(i);
            switch (value) {
                case '{':
                    vector.push_back('}');
                    break;
                case '[':
                    vector.push_back(']');
                    break;
                case '(':
                    vector.push_back(')');
                    break;
                default:
                    if(vector.empty() || vector.back() != value){
                        return false;
                    }
                    vector.pop_back();
                    break;
            }
        }
        return vector.empty();
    }
    }
};
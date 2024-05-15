/*
58. Length of Last Word
Easy

Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal 
substring
 consisting of non-space characters only.

 

Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
Example 2:

Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
Example 3:

Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.
 

Constraints:

1 <= s.length <= 10^4
s consists of only English letters and spaces ' '.
There will be at least one word in s.

Topics
String
*/
class Solution {
public:
    //O(n) | O(n)
    int lengthOfLastWord(string s) {
        int length = 0;
        bool counting = false;

        for(int i=s.size()-1; i>=0; i--){
            if(s[i] != ' '){
                counting = true;
                length++;
            } else if(counting){
                break;
            }
        }
        return length;
    }
};

    // //O(n) | O(n)
    // int lengthOfLastWord(string s) {
    //     string lastWord = "";
    //     bool reset = false;
    //     for(int i=0; i<s.size(); i++){
    //         if(s[i]== ' '){
    //             reset = true;
    //         }
    //         if(s[i]!= ' '){
    //             if(reset == true){
    //                 lastWord = "";
    //                 reset = false;
    //             }
    //             lastWord += s[i];
    //         }
    //     }
    //     cout << lastWord;
    //     return lastWord.size();
    // }
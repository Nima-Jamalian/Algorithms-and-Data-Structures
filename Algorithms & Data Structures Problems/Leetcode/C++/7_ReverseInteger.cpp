/*
7. Reverse Integer
Medium
Math

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-2^31 <= x <= 2^31 - 1
*/
class Solution {
public:
    //Time O(n) | Space O(1)
    int reverse(int x) {
        int digit = 0;
        long int rev = 0;
        while(x != 0){
            digit = x % 10;
            rev = (rev * 10) + digit;
            x = x / 10;
        }
        if(rev>INT_MAX || rev < INT_MIN){return 0;};
        return rev;
    }
};
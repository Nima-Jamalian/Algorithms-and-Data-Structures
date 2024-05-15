/*
35. Search Insert Position
Easy
Array, Binary Search

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 

Constraints:

1 <= nums.length <= 10^4
-10^4 <= nums[i] <= 10^4
nums contains distinct values sorted in ascending order.
-10^4 <= target <= 10^4
*/
class Solution {
public:
    //Time O(log(n)) | Space O(1)
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int mid = 0;
        while(start <= end){
            mid = (start+end)/2;
            if(nums[mid] == target){
                return mid;
            } else if(nums[mid]<target){
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        //Element not found
        return end+1;
    }
};

    // //Time O(n) | Space O(1)
    // int searchInsert(vector<int>& nums, int target) {
    //     for(int i=0; i<nums.size(); i++){
    //         if(nums[0]>target){
    //             return 0;
    //         }
    //         if(nums[i] == target){
    //             return i;
    //         }
    //         if(nums[i]>target){
    //             return i;
    //         }
    //     }
    //     return nums.size();
    // }
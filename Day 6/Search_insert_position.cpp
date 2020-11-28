/*Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

 

Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2

Example 2:
Input: nums = [1,3,5,6], target = 2
Output: 1

Example 3:
Input: nums = [1,3,5,6], target = 7
Output: 4

Example 4:
Input: nums = [1,3,5,6], target = 0
Output: 0

Example 5:
Input: nums = [1], target = 0
Output: 0 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int a;
        if (nums.size()==1)
        {
            if (target == nums[0])
            {
                a = 0;
            }
            else if ( target > nums[0])
            {
                a = 1;
            }
            else 
            {
                a = 0;
            }
        }
        else
        {
            for (int i=0; i<nums.size(); i++)
            {
            if (nums[i] == target)
            {
                a = i;
                break;
            }
            else if(nums[i]<target && target<nums[i+1])
            {
                a = i+1;
                break;
            }
            else if(target<nums[i])
            {
                a = 0;
                break;
            }
            else if (nums[nums.size()-1]<target)
            {
                a = nums.size();
                break;
            }
           
        
        }
        }
        
        return a;
        
    }
};

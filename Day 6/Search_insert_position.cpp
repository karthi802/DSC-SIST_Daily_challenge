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
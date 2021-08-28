#include<iostream>
#include<vector>
using namespace std;

class 0002
{

public:
    removeDuplicates_solu1(vector<int>& nums)
    {
        int index =2;
        for(int i = 2; i < nums.size(); i++)
        {
            if(nums[i] != nums[index-2])
            {
                nums[index++] = nums[i];
            }
        }
        return index;
    }

    removeDuplicates_solu2(vector<int>& nums)
    {
        const int n = nums.size();
        int index = 0;
        for (int i = 0; i < n; i++)
        {
            if(i > 0 && i < n-1 && nums[i-1] == nums[i] && nums[i] == nums[i+1])
            {
                continue;
            }
            nums[index++] = nums[i]; 
            
        }
        return index;
        
    }

   
};



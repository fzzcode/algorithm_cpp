#include<iostream>
#include<vector>
using namespace std;

class 0001{
    pubilc:
        int removeDuplicates(vector<int>& nums){
            if(nums.empty()) return 0;

            int index = 1;
            for(int i = 1; i<nums.size(); i++){
                if(num[i] != nums[index -1]){
                    nums[index++] = nums[i];
                }
            }
            return index;
        }
};

/*
注意给定的数组是升序数组；
index 代表新数组的下一个值的index，i代表原始数组中当前需要判断的index；
num[i]应该新数组的最后一个值比较，其下标为index-1；
只有新值加入后，index才会更新;
*/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class solution{
    public:
        vector<int> twoSum(vector<int> &nums, int target){
            unordered_map<int, int> my_map;
            vector<int> result;
            for(int i = 0; i < nums.size(); i++){
                my_map[nums[i]] = i;
            }
            for(int i = 0; i < nums.size(); i++){
                auto iter = my_map.find(target - nums[i]);
                if(iter != my_map.end() && iter->second > i){
                    result.push_back(i + 1);
                    result.push_back(iter->second + 1);
                    break;
                }
            }

            
        };

};

// Two Sum
// 方法2：hash。用一个哈希表，存储每个数对应的下标
// Time Complexity: O(n)，Space Complexity: O(n)
// 利用了hash的查找O(1)的优势，空间换时间的策略。
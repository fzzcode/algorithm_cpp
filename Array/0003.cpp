#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

class solution
{
    public:
        int longestConsecutive(const vector<int> &nums)
        {
            unordered_set<int> my_set;
            for(auto i : nums) my_set.insert(i);

            int longest = 0;
            for(auto i : nums)
            {
                int length = 1;
                for(int j = i - 1; my_set.find(j) != my_set.end(); --j)
                {
                    my_set.erase(j);
                    ++length;

                }
                for(int j = i + 1; my_set.find(j) != my_set.end(); ++j)
                {
                    my_set.erase(j);
                    ++length;
                }
                longest = max(longest, length);
                
            }
            return longest;
        }
};

/*
如果允许O(n \log n)O(nlogn)的复杂度，那么可以先排序，可是本题要求O(n)。

由于序列里的元素是无序的，又要求O(n)，首先要想到用哈希表。

用一个哈希表存储所有出现过的元素，对每个元素，以该元素为中心，往左右扩张，直到不连续为止，记录下最长的长度。
*/
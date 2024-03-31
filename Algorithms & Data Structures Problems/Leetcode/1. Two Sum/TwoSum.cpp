#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
// Time O(n) | Space O(n)
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        if (map.contains(nums[i]))
        {
            return vector<int>{map[nums[i]], i};
        }
        else
        {
            int diff = target - nums[i];
            map[diff] = i;
        }
    }
    return {};
}

int main(int argc, char const *argv[])
{
    vector<int> test = {2,7,11,15};
    int target = 9;
    vector<int> result = twoSum(test,target);
    for(auto i:result){
        cout << i << "\n";
    }
    return 0;
}



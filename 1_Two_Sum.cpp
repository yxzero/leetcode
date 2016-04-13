#include <algorithm>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v1(nums);
        sort(v1.begin(), v1.end());
        vector<int> revect;
        int a=0,b=v1.size()-1;
        int temp=0;
        while(a != b)
        {
            temp = v1[a] + v1[b];
            if(temp == target)
            {
                a = v1[a];
                b = v1[b];
                break;
            }
            else if(temp > target)
                b--;
            else
                a++;
        }
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] == a || nums[i] == b)
                revect.push_back(i);
            if(revect.size()==2)
                return revect;
        }
    }
};

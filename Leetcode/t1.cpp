class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> a;
    //时间复杂度为n*(n-1)->O（n*n）
    for(int i=0;i<nums.size();i++)  {
        for(int j=i+1;j<nums.size();j++) {
            if(nums[i]+nums[j]==target) {
                a.push_back(i);
                a.push_back(j);
                break;
            }
        }
     }
     return a;
    }
};
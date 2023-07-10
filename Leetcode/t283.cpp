class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int p=0;
    for(int i=0;i<nums.size();i++) {
        if(nums[i]==0) {
            p++;
        }
        else {
            if(p>0) {
                nums[i-p]=nums[i];
                nums[i]=0;
            }
        }
     }
    }
};
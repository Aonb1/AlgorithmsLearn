class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    int p=0,cnt=0;
    for(int i=0;i<nums.size();i++) {
        if(nums[i]==val) {
            p++;
        }
        else {
            if(p>0) {
                nums[i-p]=nums[i];
                nums[i]=val;
            }
        }
    }
        for(int i=0;i<nums.size();i++){
           if(nums[i]==val) {
             cnt++;
            nums[i]=0;
          }
        }
    return nums.size()-cnt;
    }
};
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int p1=0,p2=0,val=200,cnt=0;
    //0 1 100 100 100 2 100 3 100
    for(int i=0;i<nums.size();i++) {
        p1=nums[i];
        if(nums[i]!=val)
        for(int j=i+1;j<nums.size();j++) {
            p2=nums[j];
            if(p1==p2) {
            nums[j]=val; 
            cnt++;      
            }
        }
     }
    int p=0;
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
    for(int i=0;i<nums.size();i++) {
        if(nums[i]==val) nums[i]=0;
    }
return nums.size()-cnt;
    }
};
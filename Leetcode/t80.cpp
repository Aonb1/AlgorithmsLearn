class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int low=1,index=101,len=0;
    for(int i=0;i<nums.size();i++) {
        int num=nums[i],cnt=0;
        for(int j=i+1;j<nums.size();j++) {
        if(nums[j]==num&&nums[j]!=index) {
                cnt++;
                if(cnt>low) {
                nums[j]=index;
                len++;       
                }
        }
      }
    }//00iii
    int p=0;
    for(int i=0;i<nums.size();i++) {
        if(nums[i]==index) {
            p++;
        }
        else {
            if(p>0) {
                nums[i-p]=nums[i];
                nums[i]=index;
            }
        }
     }
     
for(int i=0;i<nums.size();i++)
    if(nums[i]==index) 
                      nums[i]=0;
       
return nums.size()-len;
    }
    
};


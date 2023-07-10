class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_l=0;
    for(int i=0;i<s.length();i++) 
    {
        int tl=1;
        vector<int> t;
        t.push_back(s[i]);
        for(int j=i+1;j<s.length();j++)
         {
            int index=0;
            for(int p=0;p<t.size();p++) 
            {
              if(s[j]==t[p]) 
              {
                    index=1;
                    break;
              }
              if(s[j]!=t[p])  index=0; 
            }
             if(!index)
             {
                 t.push_back(s[j]);
                 tl++;
             }
             if(index)   break; 
        }
        if(tl>max_l) max_l=tl;
        t.clear();
     }
     return max_l;
    }
};
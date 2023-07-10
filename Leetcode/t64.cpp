class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
    vector<vector<int>> mapval(grid.size(),vector<int> (grid[0].size()));//存值
    for(int i=0;i<grid.size();i++) {
        for(int j=0;j<grid[0].size();j++) {
            if(i==0)
            {
                if(j==0)  mapval[i][j]=grid[i][j];
                else      mapval[i][j]=mapval[i][j-1]+grid[i][j];
            }
            else if(j==0)
            {
               mapval[i][j]=mapval[i-1][j]+grid[i][j];
            }
            else
            mapval[i][j]=min(mapval[i-1][j],mapval[i][j-1])+grid[i][j];
        }
    }
    return mapval[grid.size()-1][grid[0].size()-1];
    }
};
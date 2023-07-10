class Solution{
    public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid){
        vector<vector<int>> map(obstacleGrid.size(), vector<int>(obstacleGrid[0].size(), 0));
        for (int i = 0; i < obstacleGrid.size(); i++){
            for (int j = 0; j < obstacleGrid[0].size(); j++){
                if (obstacleGrid[i][j] == 0){
                    if (i == 0){
                        if (j > 0)
                            map[i][j] = map[i][j - 1];
                        else
                            map[i][j] = 1;
                    }
                    if (j == 0){
                        if (i > 0)
                            map[i][j] = map[i - 1][j];
                        else
                            map[i][j] = 1;
                    }
                    if (i != 0 && j != 0)// 既可以向右也可以向下
                        map[i][j] = map[i - 1][j] + map[i][j - 1];
                }
                if (obstacleGrid[i][j] == 1)
                    map[i][j] = 0; // 有路障此处不通
            }
        }
        return map[obstacleGrid.size() - 1][obstacleGrid[0].size() - 1];
    }
};
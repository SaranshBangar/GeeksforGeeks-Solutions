class Solution {
  public:
    vector<string> res;
    
    void findPaths(vector<vector<int>> maze, int n,
        string path,vector<vector<bool>> visited,int row,int col, 
        char c)
        {
            if(row<0 || col<0 || row==n || col==n 
                || visited[row][col])
            {
                return;
            }
            visited[row][col] = 1;
            
            if(maze[row][col] == 1)
            {
                path = path+c;
                if(row==n-1 && col==n-1)
                {
                    res.push_back(path);
                    return;
                }
                findPaths(maze, n, path, visited, row+1, col , 'D');
                findPaths(maze, n, path, visited, row, col-1 , 'L');
                findPaths(maze, n, path, visited, row, col+1 , 'R');
                findPaths(maze, n, path, visited, row-1, col , 'U');
            }
        };
        
        
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        
        int n = maze.size();
        if(maze[0][0] == 0 || maze[n-1][n-1] == 0)
        {
            return res;
        }
        
        vector<vector<bool>> visited(n, vector<bool>(n,0));
        visited[0][0] = 1;
        string path = "";
        findPaths(maze, n, path, visited, 1, 0 , 'D');
        findPaths(maze, n, path, visited, 0, 1 , 'R');

        return res;
    }
};
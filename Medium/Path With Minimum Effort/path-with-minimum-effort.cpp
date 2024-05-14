//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends

class Solution {
  public:
    int MinimumEffort(int rows, int columns, vector<vector<int>> &heights)
    {
        priority_queue <vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        pq.push({0, 0, 0});
        int mini = INT_MAX;
        vector<int> dr = {0, 1, 0, -1};
        vector<int> dc = {1, 0, -1, 0};
        vector<vector<int>> visited(rows, vector<int>(columns, 0));

        while(!pq.empty())
        {
            auto temp = pq.top();
            pq.pop();
            int maxi = temp[0];
            int r = temp[1];
            int c = temp[2];
            if(r == rows-1 and c== columns-1)
                return maxi;
            if(visited[r][c])
                continue;
            visited[r][c] = 1;
            for(int i=0; i<4; i++)
            {
                int nr = r+dr[i];
                int nc = c+dc[i];
                if(nr >= 0 and nr < rows and nc >= 0 and nc < columns  && !visited[nr][nc])
                {
                    int t = abs(heights[r][c] - heights[nr][nc]);
                    t = max(t,maxi);
                    pq.push({t,nr,nc});
                }
            }
        }
        return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int rows;
        scanf("%d", &rows);

        int columns;
        scanf("%d", &columns);

        vector<vector<int>> heights(rows, vector<int>(columns));
        Matrix::input(heights, rows, columns);

        Solution obj;
        int res = obj.MinimumEffort(rows, columns, heights);

        cout << res << endl;
    }
}

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find a solved Sudoku.
    bool solve(int i, int j, vector<vector<int>>& board, vector<vector<bool>> &row, vector<vector<bool>> &col, vector<vector<bool>> &sub_box)
    {
        if(i==9)
            return true;
        if(j==9)
            return solve(i+1, 0, board, row, col, sub_box);
        if(board[i][j]!=0)
            return solve(i, j+1, board, row, col, sub_box);
        for(int num=1; num<=9; num++)
        {
            int box_no = (i/3)*3+(j/3);
            if(row[i][num]==0 && col[j][num]==0 && sub_box[box_no][num]==0)
            {
                row[i][num] = 1;
                col[j][num] = 1;
                sub_box[box_no][num] = 1;
                board[i][j] = num;
                if(solve(i, j+1, board, row, col, sub_box))
                    return true;
                row[i][num] = 0;
                col[j][num] = 0;
                sub_box[box_no][num] = 0;
                board[i][j] = 0;
            }
        }
        return false;
    }
    
    bool solveSudoku(vector<vector<int>>& board)
    {
        vector<vector<bool>> sub_box(9, vector<bool> (9+1, false));
        vector<vector<bool>> col(9, vector<bool> (9+1, false));
        vector<vector<bool>> row(9, vector<bool> (9+1, false));
        for(int i=0; i<9; i++)
            for(int j=0; j<9; j++)
                if(board[i][j]!=0)
                {
                    int num = board[i][j];
                    int box_no = (i/3)*3 + j/3;
                    row[i][num] = 1;
                    col[j][num] = 1;
                    sub_box[box_no][num] = 1;
                }
        if(solve(0, 0, board, row, col, sub_box))
            return true;
        return false;
    }
};


//{ Driver Code Starts.

vector<int> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    int num;
    vector<int> res;
    while (ss >> num) {
        res.push_back(num);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<vector<int>> grid;
        for (int i = 0; i < 9; i++) {
            vector<int> v = inputLine();
            grid.push_back(v);
        }

        Solution ob;

        ob.solveSudoku(grid);

        for (auto v : grid) {
            for (auto elem : v) {
                cout << elem << " ";
            }
            cout << endl;
        }

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    bool dfs(vector<vector<char>>& mat, int i, int j, string& word, int index)
    {
        if (index==word.size())
            return true;
        if (i<0 || i>=mat.size() || j<0 || j>=mat[0].size() || mat[i][j]!=word[index])
            return false;
        char temp=mat[i][j];
        mat[i][j]='#';
        bool found=dfs(mat, i+1, j, word, index+1) || dfs(mat, i-1, j, word, index+1) || dfs(mat, i, j+1, word, index+1) || dfs(mat, i, j-1, word, index+1);
        mat[i][j]=temp;
        return found;
    }

    bool isWordExist(vector<vector<char>>& mat, string& word)
    {
        for (int i=0;i<mat.size();++i)
        {
            for (int j=0;j<mat[0].size();++j)
            {
                if (mat[i][j]==word[0])
                {
                    if (dfs(mat, i, j, word, 0))
                        return true;
                }
            }
        }
        return false;
    }
};



//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m, '*'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        string word;
        cin >> word;
        Solution obj;
        bool ans = obj.isWordExist(mat, word);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
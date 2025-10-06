#define vi vector<int>
#define vvi vector<vi>
#define pi pair<int,int>
#define umap unordered_map<pi,int>

class Solution {
  public:
vvi matrix;
    int N;
    
    vvi dirs={
        {-2,-1},
        {-1,-2},
        {1,-2},
        {2,-1},
        {2,1},
        {1,2},
        {-1,2},
        {-2,1}
    };
    
    bool isValid(int x,int y){
        return (x>=0 && y>=0 && x<N && y<N);
    }
    
    bool dfs(int i,int j,int cnt){
        if(cnt==N*N){
            return true;
        }
        
        if(!isValid(i,j)){
            return false;
        }
        
        if(matrix[i][j]!=-1) return false;
        
        
        matrix[i][j]=cnt;
        
        for(int dir=0;dir<8;dir++){
            int nr=i+dirs[dir][0],nc=j+dirs[dir][1];
            
            if(dfs(nr,nc,cnt+1)){
                return true;
            }
        }
        
        matrix[i][j]=-1;
        
        return false;
        
    }
  
    vector<vector<int>> knightTour(int n) {
        // code here
        N=n;
        matrix.resize(n,vi(n,-1));
        
        bool res=dfs(0,0,0);
        if(!res) return {};
        
        return matrix;
        
    }
};
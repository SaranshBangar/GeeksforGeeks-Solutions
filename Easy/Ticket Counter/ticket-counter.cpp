//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K)
    {
        deque<int>help;
        int ans=0;
        for (int i=1;i<=N;i++)
        {
            help.push_back(i);
        }
        int count=0;
        while (count<=100)
        {
            if (count%2==0)
            {
                for (int i=0;i<K;i++)
                {
                    if (help.size()==1)
                    {
                        ans=help[0];
                        break;
                    }
                    else help.pop_front();
                }
            }
            else
            {
                for (int i=0;i<K;i++)
                {
                    if (help.size()==1)
                    {
                        ans=help[0];
                        break;
                    }
                    else help.pop_back();
                }
            }
            count++;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
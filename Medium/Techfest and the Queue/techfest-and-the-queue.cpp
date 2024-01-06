//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int func(int num, int pf)
    {
        int power=0;
        while (num%pf==0)
        {
            num/=pf;
            power++;
        }
        return power;
    }
    int sumOfPowers(int a, int b)
    {
        int ans=0;
        for (int i=a;i<=b;i++)
        {
            int num=i;
            for (int pf=2;pf*pf<=num;pf++)
            {
                if (num%pf==0)
                {
                    ans+=func(num, pf);
                    while (num%pf==0)
                        num/=pf;
                }
            }
            if (num>1)
                ans+=func(num, num);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
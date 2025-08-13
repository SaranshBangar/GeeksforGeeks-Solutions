class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k)
    {
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%k ==0)pq.push(0);
            else{
                int value=arr[i]%k;
                pq.push(k-value);
            }
        }

        int size = (arr.size() + 1) / 2;  
        int sum = 0;
        while(!pq.empty() && size--){
            int value = pq.top();
            pq.pop();
            sum += value;
        }
        return sum;
    }
};
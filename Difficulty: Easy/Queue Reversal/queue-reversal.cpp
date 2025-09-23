class Solution {
  public:
    void reverseQueue(queue<int> &q)
    {
        stack<int> demo;
        while (!q.empty())
        {
            demo.push(q.front());
            q.pop();
        }
        while (!demo.empty())
        {
            q.push(demo.top());
            demo.pop();
        }
    }
};
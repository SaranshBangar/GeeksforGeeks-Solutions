// User function Template for C++

// User function Template for C++

queue<int> _push(vector<int> &arr)
{
    // return a queue with all elements of arr inserted in it
    queue<int>q;
    for (int i=0;i<arr.size();i++)
        q.push(arr[i]);
    return q;
}

void _pop(queue<int> &q)
{
    // print front and dequeue for each element until it becomes empty
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}
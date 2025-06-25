// User function Template for C++

/*
arr: insert the given array elements to vector
n: size of array
*/
vector<int> fillVector(int arr[], int n)
{
    vector<int>vec(n, 0);
    for (int i=0;i<n;i++)
        vec[i]=arr[i];
    return vec;
}

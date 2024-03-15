//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

#include <vector>
#include <stack>
#include <algorithm>

class Solution
{
    public:
    Node *compute(Node *head)
    {
        vector<int>vec;
        stack<int>s;
        Node* temp=head;
        while (temp)
        {
            vec.push_back(temp->data);
            temp=temp->next;
        }
        temp=head;
        reverse(vec.begin(), vec.end());
        s.push(vec[0]);
        for (int i=1;i<vec.size();i++)
        {
            if (vec[i]>=s.top())
                s.push(vec[i]);
        }
        vec.clear();
        while (s.size()!=0)
        {
            vec.push_back(s.top());
            s.pop();
        }
        for (int i=0;i<vec.size()-1;i++)
        {
            temp->data=vec[i];
            temp=temp->next;
        }
        temp->data=vec[vec.size()-1];
        temp->next=nullptr;
        return head;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
class Solution{
    public:
    struct Node* modifyTheList(struct Node *head)
    {
        vector<int>org, rev;
        Node* temp=head;
        while (temp)
        {
            org.push_back(temp->data);
            rev.push_back(temp->data);
            temp=temp->next;
        }
        reverse(rev.begin(), rev.end());
        temp=head;
        for (int i=0;i<org.size()/2;i++)
        {
            rev[i]-=org[i];
            temp->data=rev[i];
            temp=temp->next;
        }
        reverse(org.begin(), org.end());
        for (int i=org.size()/2;i<org.size();i++)
        {
            temp->data=org[i];
            temp=temp->next;
        }
        return head;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends
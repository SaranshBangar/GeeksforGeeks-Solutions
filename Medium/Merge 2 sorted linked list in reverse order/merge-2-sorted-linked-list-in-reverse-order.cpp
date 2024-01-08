//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    vector<int>ans;
    void func(Node* root)
    {
        while (root!=nullptr)
        {
            ans.push_back(root->data);
            root=root->next;
        }
    }
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        ans.clear();
        if (!node1 && !node2)
            return nullptr;
        func(node1);
        func(node2);
        sort(ans.begin(), ans.end(), greater<int>());
        Node* newHead = new Node;
        newHead->data = ans[0];
        newHead->next = nullptr;
        Node* current=newHead;
        for (int i=1;i<ans.size();i++)
        {
            Node* newNode=new Node;
            newNode->data=ans[i];
            newNode->next=nullptr;
            current->next=newNode;
            current=newNode;
        }
        return newHead;
    }  
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends
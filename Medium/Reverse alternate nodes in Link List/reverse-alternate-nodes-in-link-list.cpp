//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/

#include <vector>
#include <algorithm>

class Solution
{
    public:
    void rearrange(struct Node *odd)
    {
        vector<int>org, rev;
        Node* temp=odd;
        while (temp)
        {
            org.push_back(temp->data);
            if (temp->next)
            {
                temp=temp->next;
                rev.push_back(temp->data);
                temp=temp->next;
            }
            else break;
        }
        reverse(rev.begin(), rev.end());
        temp=odd;
        int i=0;
        while (i<org.size())
        {
            temp->data=org[i];
            i++;
            temp=temp->next;
        }
        i=0;
        while (i<rev.size())
        {
            temp->data=rev[i];
            i++;
            temp=temp->next;
        }
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends
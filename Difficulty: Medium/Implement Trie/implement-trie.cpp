//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

struct Node{
    Node * links[26] ; 
    bool isEnd = false; 
    
    bool containsKey(char ch){
        return links[ch - 'a'] != nullptr ; 
    }
    
    void put(char ch , Node * node){
        links[ch - 'a'] = node ;
    }
    
    Node * get(char ch){
        return links[ch - 'a'] ; 
    }
    
    void setEnd(){
        isEnd = true ;   
    }
    
    bool getEnd(){
        return isEnd ;
    }
    
} ; 

class Trie {
    Node * root ; 
  public:

    Trie() {
        root = new Node() ;
    }

    void insert(string &word) {
        int n = word.length() ;
        Node * node = root ; 
        for(int i = 0 ; i < n ; i++){
            char ch = word[i] ; 
            if(!node->containsKey(ch)){
                node->put(ch , new Node()); 
            }
            node = node->get(ch) ; 
        }
        node->setEnd() ;
    }

    bool search(string &word) {
        int n = word.length() ; 
        Node * node = root ; 
        for(int i = 0 ; i < n ;i++){
            char ch = word[i] ; 
            if(!node->containsKey(ch)){
                return false; 
            }
            node = node->get(ch) ;
        }
        return node->getEnd() ;
    }

    bool isPrefix(string &word) {
        int n = word.length() ;
        Node * node = root ;
        for(int i = 0 ;i < n ; i++){
            char ch = word[i] ; 
            if(!node->containsKey(ch)) return false; 
            node = node->get(ch) ;
        }
        return true ; 
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int q;
        cin >> q;
        cin.ignore();
        vector<bool> ans;
        Trie ob;
        for (int i = 0; i < q; i++) {
            int x;
            cin >> x;
            string s;
            cin >> s;
            cin.ignore();
            if (x == 1) {
                ob.insert(s);
            } else if (x == 2) {
                ans.push_back(ob.search(s));
            } else if (x == 3) {
                ans.push_back(ob.isPrefix(s));
            }
        }
        cout << boolalpha;
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends
class Solution {
  public:
    int minParentheses(string& s)
    {
        int count = 0;
        stack <char> st;
        for(char ch : s){
            if (ch == '(') st.push(ch);
            else
                if (st.empty()) count ++;
                else st.pop();
        }
        return count + st.size();
    }
};
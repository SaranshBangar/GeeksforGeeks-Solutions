class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        stack<long long> st;

        for (string &s : arr) {
            if (isOperator(s)) {
                long long b = st.top(); st.pop();
                long long a = st.top(); st.pop();
                long long res = applyOp(a, b, s);
                st.push(res);
            } else {
                st.push(stoll(s)); // convert string to integer
            }
        }
        return (int)st.top();
    }

  private:
    bool isOperator(const string &s) {
        return (s == "+" || s == "-" || s == "*" || s == "/" || s == "^");
    }

    long long applyOp(long long a, long long b, const string &op) {
        if (op == "+") return a + b;
        if (op == "-") return a - b;
        if (op == "*") return a * b;
        if (op == "/") {
            // floor division handling (important for negatives)
            long long res = a / b;
            if ((a ^ b) < 0 && a % b != 0) res--;
            return res;
        }
        if (op == "^") return pow(a, b);
        return 0;
    }
};
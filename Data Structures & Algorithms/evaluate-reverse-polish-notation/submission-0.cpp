class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int output = stoi(tokens[0]);
        for (string& s : tokens) {
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                int val2 = st.top(); st.pop();
                int val1 = st.top(); st.pop();

                if (s == "+") {
                    output = val1 + val2;
                    st.push(output);
                } else if (s == "-") {
                    output = val1 - val2;
                    st.push(output);
                } else if (s == "*") {
                    output = val1 * val2;
                    st.push(output);
                } else if (s == "/") {
                    output = val1 / val2;
                    st.push(output);
                }
            } else {
                st.push(stoi(s));
            }
        }
        return output;
        
    }
};

class Solution {
public:
   char transfer(char c) {
        char top;
        switch (c) {
            case ')':
                top = '(';
                break;
            case ']':
                top = '[';
                break;
            case '}':
                top = '{';
                break;
        }
        return top;
    }
    
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s.at(i) == '(' || s.at(i) == '[' || s.at(i) == '{')
                st.push(s[i]);
            if (s.at(i) == ')' || s.at(i) == ']' || s.at(i) == '}') {
                if (st.empty())
                    return false;
                if (st.top() == transfer(s[i]))
                    st.pop();
                else
                    return false;
            }
        }
        if (!st.empty()) return false;
        else return true;
    }
};
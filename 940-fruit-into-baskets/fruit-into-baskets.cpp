class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int num1 = fruits[0], num2 = -1, fruitsLen = fruits.size();
        for(int i=1 ; i<fruitsLen; i++) {
            if(fruits[i] != num1) {num2 = fruits[i]; break;}
        }
        if(num2 == -1) return max(1, fruitsLen);
        stack<int>st;
        int res = 0;
        for(int i=0 ; i<fruits.size() ; i++) {
            if(fruits[i] != num1 && fruits[i] != num2) {
                if(!st.empty()) {
                    int tp = st.top();
                    num1 = tp;
                    vector<int>temp;
                    int len = st.size();
                    res = max(res, len);
                    while(st.top() == tp) {
                        temp.push_back(tp);
                        st.pop();
                    }
                    while(!st.empty()) {
                        st.pop();
                    }
                    for(int i=0 ; i<temp.size() ; i++) st.push(temp[i]);
                }
                num2 = fruits[i];
            }
            st.push(fruits[i]);
        }
        int len = st.size();
        res = max(res, len);
        return res;
    }
};
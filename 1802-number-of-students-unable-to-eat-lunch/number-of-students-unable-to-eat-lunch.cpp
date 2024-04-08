class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        queue<int>q;
        stack<int>st;

        for(auto num : students)
            q.push(num);
        for(auto it = sandwiches.rbegin(); it!=sandwiches.rend(); it++)
            st.push(*it);
        
        int cnt = 0;
        while(!st.empty() && cnt<n) {
            if(q.front()==st.top()) {
                q.pop();
                st.pop();
                cnt=0;
            }
            else {
                int num = q.front();
                q.pop();
                q.push(num);
                cnt++;
            }
        }
        return st.size();
    }
};
class Solution {
public:
    int leastInterval(vector<char>& tasks, int k) {
        int n = tasks.size();
        unordered_map<char, int> mpp;
        for (char ch : tasks)
            mpp[ch]++;
        
        priority_queue<int> pq;
        for (auto it : mpp)
            pq.push(it.second);
        
        int cycles = 0;
        while (!pq.empty()) {
            vector<int> temp;
            for (int i = 0; i <= k; i++) {
                if (!pq.empty()) {
                    temp.push_back(pq.top());
                    pq.pop();
                }
            }
            for (int cnt : temp) {
                if (--cnt > 0)
                    pq.push(cnt);
            }
            cycles += pq.empty() ? temp.size() : k + 1;
        }
        
        return cycles;
    }
};

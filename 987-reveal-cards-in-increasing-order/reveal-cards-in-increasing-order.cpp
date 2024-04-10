class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        deque<int>dq;
        sort(deck.begin(),deck.end());
        int n = deck.size();
        for(int i=n-1 ; i>=0 ; i--) {
            if(!dq.empty()) {
                int num = dq.back();
                dq.pop_back();
                dq.push_front(num);
            }
            dq.push_front(deck[i]);
        }
        vector<int>res;
        while(!dq.empty()) {
            res.push_back(dq.front());
            dq.pop_front();
        }
        return res;
    }
};
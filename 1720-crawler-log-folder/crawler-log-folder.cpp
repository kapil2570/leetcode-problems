class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans = 0;
        for(int i=0 ; i<logs.size() ; i++) {
            if(logs[i][0]!='.') {
                ans++;
            }
            else if(logs[i][0]=='.' && (logs[i].size()>1 && logs[i][1]=='.')) {
                if(ans>0)
                    ans--;
            }
        }
        return max(ans,0);
    }
};
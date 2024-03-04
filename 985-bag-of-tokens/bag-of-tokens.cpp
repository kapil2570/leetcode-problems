class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        sort(tokens.begin(),tokens.end());
        int low=0, high=n-1;
        int score = 0;
        while(low<=high) {
            if(power>=tokens[low]) {
                power -= tokens[low];
                low++;
                score++;
            }
            else if(score>0 && low<high){
                power += tokens[high];
                high--;
                score--;
            }
            else
                break;
        }
        return score;
    }
};
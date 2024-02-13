class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto word : words) {
            int low=0, high=word.size()-1;
            while(low<=high) {
                if(word[low]==word[high]) {
                    low++;
                    high--;
                }
                else
                    break;
            }
            if(low>high)
                return word;
        }
        return "";
    }
};
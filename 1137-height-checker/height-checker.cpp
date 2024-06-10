class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        // for(int i=0 ; i<heights.size()-1 ; i++) {
        //     if(heights[i]>heights[i+1]) {
        //         count++;
        //         swap(heights[i],heights[i+1]);
        //     }
        // }
        vector<int>temp = heights;
        sort(heights.begin(),heights.end());
        for(int i=0 ; i<heights.size() ; i++) {
            if(temp[i]!=heights[i]) count++;
        }
        return count;
    }
};
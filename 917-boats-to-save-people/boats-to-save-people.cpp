class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        vector<int>store;
        int n = people.size();
        int low=0, high=n-1;
        sort(people.begin(),people.end());
        int ans = 0;
        while(low<high) {
            if(people[low]+people[high] <= limit) {
                ans++;
                low++;
                high--;
            }
            else {
                ans++;
                high--;
            }
        }
        if(low==high)
            ans++;
        return ans;
    }
};
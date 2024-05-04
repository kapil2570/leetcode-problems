class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        vector<int>store;
        int n = people.size();
        int low=0, high=n-1;
        sort(people.begin(),people.end());
        while(low<high) {
            if(people[low]+people[high] <= limit) {
                store.push_back(people[low]+people[high]);
                low++;
                high--;
            }
            else {
                store.push_back(people[high]);
                high--;
            }
        }
        if(low==high)
            store.push_back(people[low]);
        return store.size();
    }
};
class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i=0 ; i<nums.size() ; i++)
            freq[nums[i]]++;
        int res=0;
        for(auto it:freq)
        {
            if(it.second%3==0)
                res+=it.second/3;
            else if(it.second>3)
            {
                if((it.second%3)%2)
                {
                    res+=(it.second/3-1);
                    res+=(it.second-(it.second/3-1)*3)/2;
                }
                else
                {
                    res+=it.second/3;
                    res+=(it.second-(it.second/3)*3)/2;
                }
            }
            else if(it.second==2)
                res+=1;
            else
                return -1;
        }
        return res;
    }
};
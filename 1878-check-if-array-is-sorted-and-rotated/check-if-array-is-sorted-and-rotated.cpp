class Solution {
public:
    bool check(vector<int>& arr) {
        int cnt = 0;
        int len = arr.size();
        for(int i=0 ; i<len-1 ; i++)
        {
            if(arr[i]>arr[i+1])
                cnt++;
        }
        if(arr[len-1]>arr[0])
            cnt+=1;

        return (cnt ==0 || cnt==1);
    }
};
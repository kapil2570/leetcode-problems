class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int len = arr.size();
        int thresh = len/4;
        int freq = 1, i = 0;
        for(i=0 ; i<len-1 ; i++)
        {
            if(arr[i]==arr[i+1])
                freq++;
            else if(freq>thresh)
                break;
            else 
                freq = 1;
        }
        return arr[i];
    }
};
class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int len = arr.size();
        if(len==1 || k==0)
            return;
        k = k%len;
        int count = 0;
        for(int start=0 ; count<len ; start++)
        {
            int current = start;
            int prev = arr[start];
            
            do {
                int next = (current+k)%len;
                swap(arr[next],prev);
                current = next;
                count++;
            } while(start != current);
        }
    }
};
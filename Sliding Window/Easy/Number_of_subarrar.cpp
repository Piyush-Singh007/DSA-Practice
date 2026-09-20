// T.C=O(N)
// S.C=O(1)


class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        if(n<k){
            return -1;
        }
        int wSum=0;
        int count=0;
        
        for(int i=0; i<k; i++){
            wSum += arr[i];
        }

        if(wSum/k >= threshold)
        count++;

        for(int i=k; i<n; i++){
            wSum = wSum-arr[i-k]+arr[i];
            if(wSum/k >= threshold){
                count++;
            }
        }
        return count;
    }
};
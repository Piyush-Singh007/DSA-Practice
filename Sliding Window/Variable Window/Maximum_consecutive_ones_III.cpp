//Brute force
//TC=O(n^2) AND SC=O(1)

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int maxlen=0;
        for(int i=0; i<n; i++){
            int zerocnt=0;
            for(int j=i; j<n; j++){
                if(nums[j]==0){
                    zerocnt++;
                }
                if(zerocnt>k){
                    break;
                }
                maxlen=max(maxlen,j-i+1);
            }
        }
        return maxlen;
    }
};

int main(){
    vector<int> nums={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;

    Solution solution;

    cout<<solution.longestOnes(nums,k)<<endl;

    return 0;
}

// Better Approach
// TC=O(2N)
// SC=O(N)

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,maxlen=0,zerocount=0;
        
        for(int right=0; right<nums.size(); right++){
            if(nums[right]==0){
                zerocount++;
            }
            while(zerocount>k){
                if(nums[left]==0){
                    zerocount--;
                }
                left++;
            }
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};
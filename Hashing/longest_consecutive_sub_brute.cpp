// Brute force it gives TLE.
// TC=O(N^2)


class Solution {
public:
        bool ls(vector<int>& nums,int x){
            for(int i=0; i<nums.size(); i++){
                if(nums[i]==x){
                    return true;
                }
            }
            return false;
        }

public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int len=1;

        if(n==0){
            return 0;
        }

        for(int i=0; i<n; i++){
            int cnt=1;
            int x=nums[i];
            while(ls(nums,x+1)==true){
                cnt++;
                x=x+1;
            }
            len=max(len,cnt);
        }
        return len;
    }
};

// BETTER APPROACH
// TC=O(NlogN)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ls=INT_MIN;
        int cnt=0;
        int longest=1;

        if(n==0){
            return 0;
        }
        
        for(int i=0; i<n; i++){
            if(nums[i]-1==ls){
                cnt++;
                ls=nums[i];
            }else if(nums[i] != ls){
                cnt=1;
                ls=nums[i];
            }
            longest=max(longest,cnt);
        }
        return longest;
    }
};
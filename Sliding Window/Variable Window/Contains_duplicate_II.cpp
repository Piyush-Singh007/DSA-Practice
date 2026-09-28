// Bruteforce(gives TLE)
// TC=O(N^2)
// SC=O(1)


#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k){
        int n=nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]==nums[j] && abs(i-j)<=k){
                    return true;
                }
            }
        }
        return false;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        nums.push_back(nums[i]);
    }
    int k;
    cin>>k;

    Solution solution;

    cout<<solution.containsNearbyDuplicate(nums,k)<<endl;

    return 0;
}

// Optimised
// TC=O(N)
// SC=O(k)

class Solution{
    public:
        bool containsNearbyDuplicate(vector<int>& nums, int k){
            unordered_set<int> window;
            int left=0;
            for(int right=0; right<nums.size(); right++){
                if(right-left>k){
                    window.erase(nums[left]);
                    left++;
                }
                if(window.count(nums[right])){
                    return true;
                }
                window.insert(nums[right]);
            }
            return false;
        }
};
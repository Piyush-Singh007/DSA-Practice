#include<bits/stdc++.h>
using namespace std;

class Solution{
private:
    int countMax(vector<int>& nums, int goal){
        if(goal<0) return 0;

        int n=nums.size();
        int l=0,sum=0,cnt=0;

        for(int r=0; r<n; r++){
            sum += nums[r];

            while(sum > goal){
                sum -= nums[l];
                l++;
            }
            cnt += r-l+1;
        }
        return cnt;
    }

public:
    int numSubarraysWithSum(vector<int>& nums, int goal){
        return countMax(nums,goal)-countMax(nums,goal-1);
    }

};

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int goal;
    cin>>goal;

    Solution solution;

    cout<<solution.numSubarraysWithSum(nums,goal)<<endl;
    return 0;
}
class Solution {
public:
    int maximum69Number (int num) {
        int maxNum=0;
        vector<int> nums;
        while(num>0){
            int digit=num%10;
            nums.push_back(digit);
            num/=10;
        }
        reverse(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==6){
                nums[i]=9;
                break;
            }
        }
        for(int digit:nums){
            maxNum=maxNum*10+digit;
        }
        return maxNum;
    }
};
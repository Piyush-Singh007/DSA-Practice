class Solution {
public:
    int kDistinctChar(string& s, int k) {
        //your code goes here
        unordered_map<char,int> mp;
        int n=s.length();
        int l=0,ml=0;

        for(int r=0, r<n; r++){
            mp[s[r]]++;
            
            while(mp.size()>k){
                mp[s[l]]--;
                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                l++;
            }
            ml=max(ml,r-l+1);
        }
        return ml;
    }
};
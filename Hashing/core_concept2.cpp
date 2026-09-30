#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    //pre-computation
    //just write 256 and remove all conditions it can work more smothly by occupy more space.
    int hash[26]={0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a']++;
    }

    //fetching
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<< endl;
    }
    return 0;
}
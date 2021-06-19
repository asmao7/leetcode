class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int>mp;
        for(int i=0; i<s.size(); i++){
            if(mp.find(s[i]) == mp.end()){
                mp[s[i]] = i;
            }else{
                mp[s[i]] = -1;
            }
        }
        
        int min = 1000000;
        unordered_map<char, int>::iterator itr;
        for(itr=mp.begin(); itr!=mp.end(); itr++){
            if(itr->second > -1 && itr->second < min){
                min = itr->second;
            }
        }
        
        if(min != 1000000){
            return min;
        }else{
            return -1;
        }
    }
};
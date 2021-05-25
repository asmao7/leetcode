class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.find(needle) != string::npos){
            return haystack.find(needle);
        }else if(haystack.find(needle) == string::npos){
            return -1;
        }else{
            return 0;
        }
    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        if(s[0] == '-'){
            return false;
        }
        
        int i=0;
        int j = s.size()-1;
        while(i<s.size() && j>-1){
            if(s[i] != s[j]){
                cout << "i is: " << i << " and j is: " << j << endl;
                return false;
            }  
            i++;
            j--;
        }

        return true;
    }
};
class Solution {
public:
    bool isPalindrome(string s) {
        
        string pk="";

        for(char ch:s){
            if(isalpha(ch) or isdigit(ch)){
                pk.push_back(tolower(ch));
            }
        }

        int i=0;
        int j=pk.size()-1;

        cout<<pk<<endl;

        while(i<j){
            if(pk[i]!=pk[j])return false;
            i++;
            j--;
        }

        return true;
    }
};

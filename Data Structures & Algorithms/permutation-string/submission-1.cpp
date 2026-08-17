class Solution {
public:

bool isSame(vector<int>&freq,vector<int>&fr){

    for(int i=0;i<26;i++){
        if(freq[i]!=fr[i])return false;
    }

    return true;
}

    bool checkInclusion(string s1, string s2) {

        if(s1.size()>s2.size())return false;
        
        vector<int>freq(26,0);

        for(char ch:s1)freq[ch-'a']++;

        int n=s1.size();

        vector<int>fr(26,0);
        int left=0;

        for(int i=0;i<n;i++){
            fr[s2[i]-'a']++;
        }

        if(isSame(freq,fr))return true;

        for(int i=n;i<s2.size();i++){
            
            fr[s2[i]-'a']++;
            fr[s2[left]-'a']--;
            left++;

            if(isSame(freq,fr))return true;
        }

        return false;
    }
};

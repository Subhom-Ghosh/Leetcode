class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>StoT;
        unordered_map<char,char>TtoS;
        for(int i=0;i<s.length();++i){
            char c1=s[i];
            char c2=t[i];
            if(StoT.count(c1)&& StoT[c1]!=c2) return false;
            if(TtoS.count(c2)&& TtoS[c2]!=c1) return false;
            StoT[c1] = c2;
            TtoS[c2] = c1;
        }
        return true;
    }
};

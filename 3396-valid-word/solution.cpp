class Solution {
public:
    bool isValid(string word) {
        int n=word.length();
        if(n<3) return false;
         bool isvowel = false;
        bool iscons = false;
        for(char c:word){
            if(!isalnum(c)) 
              return false;
       
        char lower = tolower(c);
        if(isalpha(c)){
            if(lower =='a'||lower =='e'||lower =='i'||lower =='o'||lower =='u')
               isvowel=true;
            else iscons = true;
        }
    }
        return isvowel && iscons;
    }
};

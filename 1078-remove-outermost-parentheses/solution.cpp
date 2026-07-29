class Solution {
public:
    string removeOuterParentheses(string s) {
        string res ="";
        int count = 0;

        for(char ch:s){
            if(ch=='(') {
                count+=1;
                if(count>1){
                    res+=ch;
                }
            }
            else if(ch==')'){
                count-=1;
                if(count>0){
                    res+=ch;
                }
            }

            
        }
        return res;
    }
};

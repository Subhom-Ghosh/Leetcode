class Solution {
public:
    string to_base(int num,int base){
        const string digit = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        if(num==0) return "0";
        string result="";
        while(num>0){
            result=digit[num%base]+result;
            num/=base;
        }
        return result;
    }
    string concatHex36(int n) {
        int n2=n*n;
        int n3=n*n*n;
        string base16 = to_base(n2,16);
        string base36 = to_base(n3,36);
        return base16+base36;
    }
};

class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int a=1;a<n;a++){
            for(int b=1;b<n;b++){
                int square = (a*a)+(b*b);
                int c = sqrt(square);

                if (c*c == square && c<=n) count++;
            }
        }
        return count;
    }
};

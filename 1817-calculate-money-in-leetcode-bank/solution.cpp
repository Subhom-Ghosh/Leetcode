class Solution {
public:
    int totalMoney(int n) {
        int weeks = n / 7;
        int days = n % 7;

        int total = 28 * weeks                              // total from all full weeks (each week starts higher)
                  + 7 * (weeks * (weeks - 1)) / 2           // weekly base increment
                  + (weeks + 1) * days                      // starting amount for remaining days
                  + (days * (days - 1)) / 2;                // +1, +2, ... for remaining days

        return total;
    }
};


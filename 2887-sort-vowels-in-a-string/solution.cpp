class Solution {
public:
    string sortVowels(string s) {
        string vowels = "aeiouAEIOU";
        auto isVowel = [&](char c) {
            return vowels.find(c) != string::npos;
        };

        // Step 1: Collect vowels
        vector<char> v;
        for (char c : s) {
            if (isVowel(c)) v.push_back(c);
        }

        // Step 2: Sort vowels by ASCII
        sort(v.begin(), v.end());

        // Step 3: Rebuild string
        int idx = 0;
        for (char &c : s) {
            if (isVowel(c)) {
                c = v[idx++];
            }
        }

        return s;
    }
};


class Solution {
public:
    // Helper function to get next character in alphabet (wrap 'z' to 'a')
    char nextChar(char c) {
        return (c == 'z') ? 'a' : c + 1;
    }

    char kthCharacter(int k) {
        string word = "a";

        while (word.length() < k) {
            string nextPart = "";
            for (char c : word) {
                nextPart += nextChar(c);
            }
            word += nextPart;
        }

        return word[k - 1]; // 0-based indexing
    }
};


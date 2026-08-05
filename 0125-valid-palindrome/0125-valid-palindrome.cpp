class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if ((c >= 'a' && c <= 'z') ||
                (c >= 'A' && c <= 'Z') ||
                (c >= '0' && c <= '9')) {
                if (c >= 'A' && c <= 'Z') {
                    c = c + ('a' - 'A');
                }
                clean += c;
            }
        }
        int i = 0;
        int j = clean.length() - 1;

        while (i < j) {
            if (clean[i] != clean[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};
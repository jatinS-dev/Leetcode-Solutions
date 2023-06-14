class Solution {
private:
    bool isVowel(char c) {
        if(c == 'A' ||c == 'E' ||c == 'I' ||c == 'O' ||c == 'U' ||
           c == 'a' ||c == 'e' ||c == 'i' ||c == 'o' ||c == 'u' ) {
            return true;
        } else {
            return false;
        }
    }
public:
    string reverseVowels(string s) {
        int n = s.size();
        int start = 0, end = n-1;
        while(start < end) {
            if(!isVowel(s[start])) {
                start++;
                continue;
            }
            if(!isVowel(s[end])) {
                end--;
                continue;
            }
            swap(s[start], s[end]);
            start++;
            end--;
        }
        return s;
    }
};
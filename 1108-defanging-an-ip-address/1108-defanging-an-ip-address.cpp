class Solution {
public:
    string defangIPaddr(string str) {
        string IPv4 = "";
        for(int i = 0; i < str.size(); ++i) {
            if(str[i] == '.') {
                IPv4+="[.]";
            } else {
                IPv4+=str[i];
            }
        }
        return IPv4;
    }
};
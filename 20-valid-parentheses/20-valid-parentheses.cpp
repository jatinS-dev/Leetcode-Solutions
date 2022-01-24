class Solution {
public:
    bool matching(char a,char b){
        return (a=='(' && b==')' || a=='{' && b=='}' || a=='[' && b==']' ) ;
    }
    bool isValid(string s) {
        string st="";
        for(int i = 0; i < s.length(); i++){
            if(s[i]=='['||s[i]=='('||s[i]=='{'){
                st.push_back(s[i]);
            }
            else{
                if(matching(st.back(),s[i])==false){
                    return false;
                }
                else
                    st.pop_back();
            }
        }
        return st.empty()==true;
    }
};
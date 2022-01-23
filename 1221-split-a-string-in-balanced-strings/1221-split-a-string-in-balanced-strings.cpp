class Solution {
public:
    int balancedStringSplit(string s) {
        int r=0,l=0,res=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        
        if(s[i]=='R'){
            r++;
        }
        else
            l++;
        if(l==r){
            res++;
        }
    }
    return res;
    }
};
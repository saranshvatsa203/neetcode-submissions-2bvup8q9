class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> m,n;
        for(int i=0;i<s.size();i++){
            if(m[s[i]]){
                m[s[i]]++;
            }
            else{
                m[s[i]]=1;
            }
            if(n[t[i]]){
                n[t[i]]++;
            }
            else{
                n[t[i]]=1;
            }
        }    
        
        if(m==n){
            return true;
        }
        return false;
    }
};

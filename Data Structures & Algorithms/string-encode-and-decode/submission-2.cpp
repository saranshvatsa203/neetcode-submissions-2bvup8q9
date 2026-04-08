class Solution {
public:
    vector<int> v;
    string encode(vector<string>& strs) {
        string s;
        for(int i=0;i<strs.size();i++){
            int l=strs[i].size();
            s=s+strs[i];
            v.push_back(l);
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> strs2;
        int j=0;
        for(int i=0;i<v.size();i++){
        string s2=s.substr(j,v[i]);
        j=j+v[i];
        strs2.push_back(s2);
    }
        return strs2;
    }
};

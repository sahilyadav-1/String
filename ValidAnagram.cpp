class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>m;

        for(int i=0; i<s.length(); i++){
            m[s[i]]++;
        }

        for(int i=0; i<t.length(); i++){
            if(m.count(t[i])){
                m[t[i]]--;
            }
            else{
                return false;
            } 
        }

        for(auto i:m){
            if(i.second != 0) return false;
        }
        return true;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;

        vector<int> v(26);
        for(auto it :s)
        {
            int asci = int(it)-97;
            v[asci]++;
        }

        for(auto it:t)
        {
            int asci = int(it)-97;
            v[asci]--;
        }

        for(auto it:v){
            cout<<it<<" ";
            if(it !=0)
            {
                return false;
            }
        }
        return true;
    }

};

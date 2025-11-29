class Solution {
public:
    string removeStars(string s) {
        
        string sta;
        sta.reserve(s.size());

        for (char c : s) {
            if (c == '*')
                sta.pop_back();     
            else
                sta.push_back(c);   
        }

        return sta;
    }
};

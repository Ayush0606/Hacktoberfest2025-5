class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        string sum = s+s;
        int ind = sum.find(goal);
        if(ind == -1)return false;
        return true;
        
    }
};

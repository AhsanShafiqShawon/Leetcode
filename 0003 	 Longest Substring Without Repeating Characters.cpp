class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>ust;
        int j=0, i=0, ans=0;
        int n=s.size();
        while(j<n && i<n)
        {
            if(ust.find(s[j])==ust.end())
            {
                ust.insert(s[j++]);
                ans=max(ans, j-i);
            }
            else
                ust.erase(s[i++]);
        }
        return ans;
    }
};

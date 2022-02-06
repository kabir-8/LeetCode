class Solution {
public:
    bool isLongPressedName(string s1, string s2) {
        if(s1[0]!=s2[0])
            return false;
       int i=0,j=0;
        while(i<s1.size()||j<s2.size())
        {
        	if(s1[i]==s2[j])
            {
                j++;
                i++;
            }
            else if(s1[i-1]==s2[j])
            {
                j++;
            }
            else
                return false;
        }
    return true;
        
    }
};
public class pair{
    int first;
    int second;
}
class Solution {
    int MAX = 1000000000;
public:
    int firstUniqChar(string s) {
        // first - count, second - index;
        unordered_map<char,pair<int,int> > ma;
        for(int i=0;i<s.length();i++) {
            pair<int,int> p = ma[s[i]];
            int count = p.first;
            ma[s[i]] = make_pair(count + 1, i);
        }
        unordered_map<char,pair<int,int> >::iterator it;
        int idx = MAX;
        for(it = ma.begin(); it != ma.end(); it++) {
            if(it->second.first == 1 and idx > it->second.second) {
                idx = it->second.second;
            }
        }
        
        if(idx == MAX)
            return -1;
        else
            return idx;
        
    }
};

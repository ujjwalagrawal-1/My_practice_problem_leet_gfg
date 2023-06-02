class Solution {
public:
    string removeOccurrences(string s, string part) {
        int f = s.find(part);
        while(f != std::string::npos){
            s.erase(f,part.size());
            f = s.find(part);
        }
        return s;
    }
};
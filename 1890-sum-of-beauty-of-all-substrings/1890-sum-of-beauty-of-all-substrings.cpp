class Solution {
public:
    int beautifull_or_Not(const string& sub) {
        map<char, int> hash;
        for (char c : sub) {
            hash[c]++;
        }
        int uniqueChars = hash.size();
        
        if (uniqueChars == 1) {
            return 0;
        }
        
        int maxFrequency = 0;
        int minFrequency = INT_MAX;
        for (auto pair : hash) {
            maxFrequency = max(maxFrequency, pair.second);
            minFrequency = min(minFrequency, pair.second);
        }
        if (maxFrequency - minFrequency >= 1) {
            return maxFrequency - minFrequency;
        }
        
        return 0;
    }
    
    int beautySum(const string& s) {
        int count = 0;
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            map<char, int> frequencies;
            for (int j = i; j < n; j++) {
                frequencies[s[j]]++;
                if (frequencies.size() > 1) {
                    int maxFrequency = 0;
                    int minFrequency = INT_MAX;
                    for (auto pair : frequencies) {
                        maxFrequency = max(maxFrequency, pair.second);
                        minFrequency = min(minFrequency, pair.second);
                    }
                    count += maxFrequency - minFrequency;
                }
            }
        }

        return count;
    }
};

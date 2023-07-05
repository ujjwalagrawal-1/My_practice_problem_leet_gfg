class Solution {
public:
    // string frequencySort(string s) {
        
    //     map<char,int>hash;
    //     for(int i = 0;i<s.size();i++){
    //         hash[s[i]]++;
    //     }
    //     int x = s.size();
    //     s = "";
    //     int i = 0;
    //     // good approch but cna give anser according sorted string 
    //                             // for(auto& itr:hash){
    //                             //     if(itr.second>1){
    //                             //         while(itr.second > 0){
    //                             //             s+=itr.first;
    //                             //             itr.second--;
    //                             //         }
    //                             //     }
    //                             // }
    //                             // for(auto& itr:hash){
    //                             //     if(itr.second == 1){
    //                             //         s+=itr.first;
    //                             //         itr.second--;
    //                             //     }
    //                             // }
    //     return s;
    // }
    string frequencySort(string& s) {
    vector<pair<int, char>> v;
    map<char, int> hash;

    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }

    for (auto itr = hash.begin(); itr != hash.end(); itr++) {
        v.push_back({ itr->second, itr->first });
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    hash.clear();
    s = "";

    for (int i = 0; i < v.size(); i++) {
        int x = v[i].first;
        while (x--) {
            s += v[i].second;
        }
    }

    return s;
}
};
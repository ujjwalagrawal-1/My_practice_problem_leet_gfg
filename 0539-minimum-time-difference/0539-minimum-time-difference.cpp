class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        
        for(int i = 0;i<timePoints.size();i++){
        string curr = timePoints[i];
        int min = stoi(curr.substr(3,2));
        int hour = stoi(curr.substr(0,2));
        int total = min + (hour)*60;
        minutes.push_back(total);
        }
        sort(minutes.begin(),minutes.end());
        int mini = INT16_MAX;
        for(int j = 0;j<minutes.size() - 1;j++){
            int diff = minutes[j+1] - minutes[j];
            mini = min(mini,diff);
        }
        // here the game lies beacause most of others cna think below process
            int lastDiff1 = (minutes[0] + 1440) - minutes[minutes.size()-1];
            int lastDiff2 = (minutes[minutes.size() - 1] - minutes[0]);
            int lastdiff = min(lastDiff1,lastDiff2);
            mini = min(mini, lastdiff);

            return mini;   
    }
//     #include "iostream"
// #include "algorithm"
// #include "vector"
// using namespace std;

// int findMinDifference(vector<string>& timePoints) {
//         vector<int>m;
//         for(int i = 0;i<timePoints.size();i++){
//             int ab = stoi(timePoints[i].substr(0,2))*60;
//             ab = ab + stoi(timePoints[i].substr(3,2));
//             m.push_back(ab);
//         }
//         // for(auto a:min){
//         //     cout<<a<<" ";
//         // }
//         sort(m.begin(),m.end());
//         int mini = INT16_MAX;
//         for(int j=0;j<m.size()-1;j++){
//             int sub = m[j+1] - m[j];
//             mini = min(mini,sub);
//         }
//         int lastDiff1 = (m[0] + 1440) - m[m.size()-1];
//         int lastDiff2 = (m[m.size() - 1] - m[0]);
//         int lastdiff = min(lastDiff1,lastDiff2);
//         mini = min(mini, lastdiff);

//         return mini;
//     }

// int main(){ 
//     vector<string>time{"23:59","00:00"};
//     cout<<findMinDifference(time)<<endl;

// }
};

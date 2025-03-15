#include<iostream>
#include<vector>
#include<unordered_set>
#include<cmath>
using namespace std;
struct hash_pair {
    size_t operator()(const pair<int, int>& p) const {
        return hash<long long>()(((long long)p.first << 32) ^ p.second);
    }
};
int main(){
    int n;
    cin >> n;
    for(int i = 0; i<n ;i ++){
        int noOfCircles, radsum;
        cin >> noOfCircles >> radsum;
        vector<int> centres;
        for(int i = 0; i<noOfCircles; i++){
            int k;
            cin >> k;
            centres.push_back(k);
        }
        vector<int> radii;
        for(int i = 0; i<noOfCircles; i++){
            int k;
            cin >> k;
            radii.push_back(k);
        }
        unordered_set<pair<int, int>, hash_pair> points;
        for(int i = 0; i < noOfCircles; i++){
            
            for(int x = centres[i]; x <= centres[i] + radii[i]; x++){
                int maxy = sqrt(radii[i]*radii[i] - (x - centres[i])*(x - centres[i]));
                for(int y = 0; y <= maxy; y++){
                    points.insert(make_pair(x,y));
                    points.insert(make_pair(x,-y));
                    points.insert(make_pair(x - 2*(x - centres[i]),y));
                    points.insert(make_pair(x - 2*(x - centres[i]),-y));
                }
            }
            
        }
        cout << points.size()<<endl;
        points.clear();
    }
}
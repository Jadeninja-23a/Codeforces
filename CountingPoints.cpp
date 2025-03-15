#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
#include<map>

int main(){
    long long n;
    cin >> n;
    
    for(long long j = 0; j <n; j++){
        long long sum = 0;
        map<long long, long long> pointsperX;
        long long noOfCircles, radsum;
        cin >> noOfCircles >> radsum;
        vector<long long> centres;
        for(long long i = 0; i<noOfCircles; i++){
            long long k;
            cin >> k;
            centres.push_back(k);
        }
        vector<long long> radii;
        for(long long i = 0; i<noOfCircles; i++){
            long long k;
            cin >> k;
            radii.push_back(k);
        }
        for(long long i = 0; i < noOfCircles; i++){
            
            for(long long x = centres[i]; x <= centres[i] + radii[i]; x++){
                long long noOfY = 2*(long long)(sqrt(radii[i]*radii[i] - (x-centres[i])*(x-centres[i]))) + 1;
                if(pointsperX[x] < noOfY){
                    sum += noOfY - pointsperX[x];
                    pointsperX[x] = noOfY;
                }
                if(pointsperX[2*centres[i] - x] < noOfY){
                    sum += noOfY - pointsperX[2*centres[i] - x];
                    pointsperX[2*centres[i] - x] = noOfY;
                }
            }
            
        }
        cout << sum<<endl;
    }
}
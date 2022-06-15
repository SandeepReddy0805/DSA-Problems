#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long findMinDiff(vector<long long> a,long long n,long long m){
        sort(a.begin(),a.end());
        long long minDiff = INT_MAX;
        for(int i = 0,j=m-1;j<n;i++,j++){
            if((a[j]-a[i])<minDiff)
                minDiff = a[j]- a[i];
        }
        return minDiff;
    }
};
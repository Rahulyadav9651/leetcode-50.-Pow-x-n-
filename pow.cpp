class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        for(int i=0; i<n; i++){
            ans= ans*x;
        }
        return ans;
        
        
        
    }
};
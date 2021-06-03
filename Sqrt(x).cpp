class Solution {
public:
    int mySqrt(int x) {
        long long start = 0;
        long long end = x;
        long long mid;
        
        while(start+1 < end){
            mid = start + (end-start)/2;
            if(abs((mid * mid) - x) < 1){
                return (int)mid;
            }else if(mid*mid < x){
                start = mid;
            }else if(mid*mid > x){
                end = mid;
            }
        }
        if(end*end == x){
            return end;
        }
        return (int)start;
    }
};
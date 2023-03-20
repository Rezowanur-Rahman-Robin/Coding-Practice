
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long l = 1;
        long long r = n;
        while(l<=r){
            long long mid = (l+r)/2;
            if(isBadVersion(mid) && !isBadVersion(mid-1)){
                return mid;
            }
            if(isBadVersion(mid) && isBadVersion(mid-1)){
                r = mid - 1;
            }else{
                l = mid + 1;
            }

        }
        return -1;

    }
};

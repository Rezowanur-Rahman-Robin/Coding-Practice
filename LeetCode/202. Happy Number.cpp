class Solution {
public:
    int getNext(int n){
        int tempSum = 0;
        while(n!=0){
            int lastDigit = n%10;
            tempSum += (lastDigit * lastDigit);
            n /= 10;
        }
        return tempSum;
    }

    bool isHappy(int n) {
        unordered_set<int> st;
        while(n!=1 && st.count(n)==0){
            st.insert(n);
            n = getNext(n);
        }
        return n==1;
    }
};

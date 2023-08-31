class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;

        long long diffBits = start ^ goal;
        while(diffBits != 0){
            if(diffBits & 1) count++;
            diffBits >>= 1;
        }

        return count;
    }
};
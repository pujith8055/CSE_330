class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines = 1, width = 0;
        for(char c : s) {
            int w = widths[c-'a'];
            width += w;
            if(width > 100) {
                ++lines;
                width = w;
            }
        }
        return {lines, width};
    }
};
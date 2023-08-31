class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<string> temp;
        istringstream ss(text);
        string word;
        while( ss >> word ) temp.push_back(word);
        bool freq[26] = {false};
        for( auto c : brokenLetters ) freq[c-'a'] = true;
        int totalword = temp.size();
        for( int i = 0 ; i < temp.size() ; i++ )
        {
            for( auto c : temp[i] )
                if( freq[c-'a'] )
                {
                    totalword--;
                    break;
                }
        }
        return totalword;
    }
};
#include <string>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s)
     {
    
        while (!s.empty() && s.back() == ' ') 
        {
            s.pop_back();
        }
        int last_space_index = -1; 

        for (int i = 0; i < s.length(); i++) 
        {
            if (s[i] == ' ') {
                last_space_index = i; 
            }
        }
        int start_pos = last_space_index + 1;
        string last_word = s.substr(start_pos);
        return last_word.length();
    }
};

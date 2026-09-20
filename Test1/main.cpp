
#include <string>
using namespace std;

class Solution {
public:
    int reverseDegree(string s) 
    {
        long long total = 0;
        for (int i = 0; i < s.length(); i++) 
        {
            int rev_pos = 26 - (s[i] - 'a');
            total +=rev_pos * (i + 1);
        }
        return total;
    }
};

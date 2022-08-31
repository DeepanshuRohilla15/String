// In this function you get in index of sub string if substring if in string.
// here,string is main string and sub string is which string we want to find from main string.

class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};
class Solution {
public:
    void reverseString(vector<char>& s) {
        int Left=0;
        int Right = s.size() - 1;
        while(Left<Right){
            swap(s[Left],s[Right]);
            Left++;
            Right--;
        }
    }
};
/*
    author @rajujnvgupta
    29/oct/2019

*/
#include <bits/stdc++.h>
using namespace std;

string s;

string longestPalindrome(string s){
    
    if(s.size()<=1){
        return s;
    }
    int left = 0;
    int right = 0;
    bool dp[s.size()][s.size()];
    memset(dp, false, sizeof dp);
    for(int j = 1; j < s.size(); j++){
        for(int i = 0; i < j; i++){
            bool isInnerWordPalindrome = (dp[i+1][j-1]) || (j-i<=2);  ///aaabaaaa
            if(s[i]==s[j] && isInnerWordPalindrome){
                dp[i][j] = true;
                if(j-i > right-left){
                    right = j;
                    left = i;
                }
            }
        }
    }
    return s.substr(left, right-left+1);
}

int main() {
    
    cin>>s;
    string str = longestPalindrome(s);
    cout<<str<<endl;
    return 0;
}


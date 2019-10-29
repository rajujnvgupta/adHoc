/*
    author @rajujnvgupta
    29/oct/2019
    
    string str = "aacdefcaa" 
    in above string "aac" or "caa" is consider as largest substring custom defined substring

*/

#include <bits/stdc++.h>
using namespace std;
    string s;
    ///global length for largest palindromic string
    int LEFT = 0, RIGHT = 0;

    ///flag used make sure current diagonal is continue of breaken
    int flag = 0;
    void calLargestLen(vector<vector<bool>>&dp, int n){
        int l = 0, r = 0;
        int len = 1;
        int mx = 0;
        int down = 0;
        for(int row = 0; row < n; row++){

            int itr = row;

            for(int col = down; col <= itr-down+row; col++){
                
                if(dp[row][col] == true){
                    
                    if(flag == 0){
                        l = col;
                        flag = 1;
                    }
                    r = col;
                    ///when all are true meaning all string are same 
                    len = r-l+1;
                    if(len > mx){
                        mx = len;
                        LEFT = l;
                        RIGHT = r;
                    }
                }
                else{

                    flag = 0;
                }
                row--;
            }
            ///breaking the current iteration
            flag = 0;
            ///
            row = itr;  
            if(row == n-1 && down <= n-1){
                row--;
                down++;
            }
        }
    }
    
     void solve(string s){
       /// bool dp[s.size()][s.size()];
       vector<vector<bool>>dp(s.size(), vector<bool>(s.size(), false));
        ///fill the dp states
        int n = s.size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(s[i]==s[j]){
                    dp[i][j] = true;
                }
                else{
                    dp[i][j] = false;
                }
            }
        }
        calLargestLen(dp, n);
    }
    
    string longestPalindrome(string s){
        
        solve(s);
       /// cout<<LEFT<<' '<<RIGHT<<endl;
        return s.substr(LEFT , RIGHT-LEFT+1);
    }

int main() {
    ///
    cin>>s;
    string str = longestPalindrome(s);
    cout<<str<<endl;
    return 0;
}


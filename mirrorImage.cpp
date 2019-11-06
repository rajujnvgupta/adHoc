/*
    @rajujnvgupta
    06/nov/2019

    printing mirror image of diagonal above of 2d vector in diagonally below of 2d vector having diagonal element of zero
*/


#include <bits/stdc++.h>
using namespace std;
void solve(int L, int R){
    
    int arr[R][R];
    memset(arr, 0, sizeof arr);
    int n = R;
    int  i = 1;
    for(int L = n-1; L>=0; L--){
        for(int R = L+1; R < n; R++){
            arr[L][R] = i++;
        }
    }

    i = i - 1;;

     for(int L = n-1; L > 0; L--){
        for(int R = 0; R < L; R++){ 
            arr[L][R] = i--;
        }
    }
    for(int i = 0; i < n;i++){
        for(int j =0; j < n;j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
}

int main() {

    solve(0, 15);
}

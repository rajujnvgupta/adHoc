/*
	author @rajujnvgupta
	28/oct/2019

*/

#include <iostream>
using namespace std;
int main(){
        ///iterating through diagonal from botton up in 2d matrix
        int n  = 2;
        int down = 0;
        for(int row = 0; row < n; row++){

            int itr = row;
            for(int col = down; col <= itr-down+row; col++){
                cout<<row<<' '<<col<<endl;
                row--;
            }
            row = itr; 
            if(row == n-1 && down <= n-1){
                row--;
                down++;
            }
        }
    return 0;
}


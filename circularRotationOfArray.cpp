/*
    @rajujnvgupta
    06/nov/2019

    //circular rotation of element of array upto n-1 rotation//
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<< ((i+j) % n)<<' ';   ///
        }
        cout<<endl;
    }
    return 0;
}

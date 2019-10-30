/*
    @rajujnvgupta
    30/oct/2019
*/

#include <iostream>
#define int long long int
using namespace std;

int itrRange(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return itrRange(n/2)*2+1;
}

int solve(int n, int s, int e, int Left, int Right){

    ///no overlaping case 
    if( s > Right || e < Left || s > e){
        return 0;
    }

    int mid = (s+e)/2;
    int ans = 0;
    if(mid >= Left && mid <= Right && n%2 == 1){
        ans++;
    }
    ans+= solve(n/2, s, mid-1, Left, Right);
    ans+= solve(n/2, mid+1, e, Left, Right);
    return ans;
}

int32_t main() {
    
    int n, Left, Right;
    cin>>n>>Left>>Right;
    cout<<solve(n , 1, itrRange(n), Left, Right)<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
const int mod = 1e9+7;
const int inf = 1e9+5;


int main(){

	int x = 2, y = 2, z = 2;
	// vector<vector<int>>test(2, vector<int>(2, 2));
	vector<vector<vector<int>>>mat(x, vector<vector<int>>(y, vector<int>(z, 3)));
	vector<vector<vector<int>>>pref(x+1, vector<vector<int>>(y+1, vector<int>(z+1)));
	
	for(int i = 0; i < x; i++){
		for(int j=0; j < y;j++){
			for(int k = 0; k< z; k++){
				cout<<mat[i][j][k]<<' ';
			}
			cout<<endl;
		}
		cout<<endl;
		cout<<endl;
	}
	
	
	for(int i = 1; i <= x; i++){
		for(int j = 1; j<=y; j++){
			for(int k = 1; k <= z; k++){
				pref[i][j][k] = mat[i-1][j-1][k-1]+pref[i-1][j][k]+pref[i][j-1][k]+pref[i][j][k-1]+pref[i-1][j-1][k-1]-pref[i-1][j-1][k]-pref[i][j-1][k-1]-pref[i-1][j][k-1];
			}
		}
	}
	for(int i = 0; i <= x; i++){
		for(int j=0; j <= y;j++){
			for(int k = 0; k<= z; k++){
				cout<<pref[i][j][k]<<' ';
			}
			cout<<endl;
		}
		cout<<endl;
		cout<<endl;
	}

	return 0;
}

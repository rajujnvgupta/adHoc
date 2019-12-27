#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int N = 1e5+5;
const int mod = 1e9+5;
int arr[N];
int n;

int solve(){
	int ans = 0;
	unordered_set<int>s;
	int j = 0;
	unordered_map<int, int>mp;
	for(int i = 0; i < n; i++){
		while(s.find(arr[i]) != s.end() && j <= mp[arr[i]]){
			s.erase(s.find(arr[j]));
			j++;
		}
		mp[arr[i]] = i; 
		s.insert(arr[i]);
		int len = s.size();
		ans += (len * (len+1))/2;
		ans %= mod;
	}
	return ans;
}
int32_t main(){
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	int ans = solve();
	cout<<ans<<'\n';
	return 0;
}

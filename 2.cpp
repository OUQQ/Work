#include <bits/stdc++.h>
using namespace std;

string s1,s2;
int s3;
int T=0;

map< int,string >name;
map< string,int >mp;
vector< pair< string,int > > s[500];

void shuchu(){
	for(int i = 1;i <= T;i++){
		cout<< name[i] << endl;
		for(int j =0;j < s[i].size();j++){
			cout << s[i][j].first << " " << s[i][j].second << endl;
		}
		cout << endl;
	}
}

int main(){
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	for(int i = 1;i <= 500;i++) s[i].clear();
	while(cin >> s1){
		cin >> s2 >> s3;
		if(!mp[s1]){
			T++;
			mp[s1] = T;
			name[T] = s1;
		}
		s[mp[s1]].push_back(make_pair(s2,s3));
	}
	shuchu();
	return 0;
}


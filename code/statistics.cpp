#include <iostream>
#include <string>
#include <limits.h>
using namespace std;
int cnt[200],maxx=-1e9;
string str;
int main(){
	while(str!="end"){
		getline(cin,str);
		for(int i=0;i<str.length();i++){
			if(str[i]>='A'&&str[i]<='Z'){
				cnt[int(str[i]-'A'+1)]++;
			}
		}
	}
	for(int i=1;i<=26;i++){
		maxx=max(cnt[i],maxx);
	}
	for(int i=maxx;i>=1;i--){
		for(int j=1;j<=26;j++){
			if(cnt[j]>=i&&j!=26){
				cout<<"* ";
			}
			else if(cnt[j]>=i){
				cout<<"*";
			}
			else if(j!=26){
				cout<<" ";
			}
		}
		cout<<endl;
	}
	for(int i=1;i<=26;i++){
		cout<<char('A'+i-1);
		if(i!=26){
			cout<<" ";
		}
	}
	return 0;
}

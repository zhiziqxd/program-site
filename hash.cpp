#include <iostream>
using namespace std;
string str;
int n;
int hash(int n,string str){
	long long int ans;
	for(int i=0;i<str.length();i++){
		ans+=str[i]*n;//n建议使用31,131
	}
	return ans;//溢出=自动取模
}
int main(){
	cin>>n>>str;
	cout<<hash(n,str)<<endl;
	return 0;
}

#include <iostream>
using namespace std;
string str;
int n;
int hash(int n,string str){
	long long int ans;
	for(int i=0;i<str.length();i++){
		ans+=str[i]*n;//n½¨ÒéÊ¹ÓÃ31,131
	}
	return ans;//Òç³ö=×Ô¶¯È¡Ä£
}
int main(){
	cin>>n>>str;
	cout<<hash(n,str)<<endl;
	return 0;
}

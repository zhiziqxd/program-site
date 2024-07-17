#include <iostream>
#include <string>
using namespace std;
int n;
string str;//¿ÉÒÔÊ¹ÓÃµÄ×Ö·û
void f(int n,string t){
	if(n==0){
		cout<<t<<endl;
		return;
	}
	else{
		for(int i=0;i<str.length();i++){
			f(n-1,t+str[i]);
		}
	}
	return;
}
int main(){
	str="abcdefghijklmnopqrstuvwxyz1234567890ABEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()_+-=";
	cin>>n;
  freopen("password.in","w",stdout);
	for(int i=1;i<=n+1;i++){
		f(i,"");
  }
	return 0;
}

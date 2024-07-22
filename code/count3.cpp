#include <iostream>
#include <string>
using namespace std;
string str;
char x='+';
int sum,cnt;
int pow(int a,int b){
	int ans=1;
	for(int i=1;i<=b;i++){
		ans*=a;
	}
	return ans;
}
int number(string num){
	int ans;
	for(int i=num.length()-1;i>=0;i--){
		ans+=int(num[i]-'0')*pow(10,i);
	}
	return ans;
}
int main(){
	cin>>str;
	for(int i=0;i<str.length();i++){
		string num="";
		while(i<str.length()&&str[i]>='0'&&str[i]<='9'){
			num+=str[i];
			i++;
		}
		sum=number(num);
		if(x=='+'){
			cnt+=sum;
		}
		else if(x=='-'){
			cnt-=sum;
		}
		else if(x=='*'){
			cnt*=sum;
		}
		else{
			cnt/=sum;
		}
		if(i<str.length()){
			x=str[i];
		}
		sum=0;
	}
	cout<<cnt;
	return 0;
}

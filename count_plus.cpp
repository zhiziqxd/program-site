#include <iostream>
#include <ctime>
#include <cstlib>
using namespace std;
int a,b;
string x;
long long int pow(int a,int b){
	long long int ans=1;
	for(int i=1;i<=b;i++){
		ans*=a;
	}
	return ans;
}
int log(int a,int b){
	for(int i=1; ;i++){
		int flag=pow(a,i);
		if(flag==b){
			return i;
		}
		if(flag>b){
			break;
		}
	}
	return -1;
}
int main(){
	while(a!=0||b!=0){
		cin>>a>>x>>b;
		if(x=="+"){
			cout<<a+b<<endl;
		}
		else if(x=="-"){
			cout<<a-b<<endl;
		}
		else if(x=="*"){
			cout<<a*b<<endl;
		}
		else if(x=="/"&&b!=0){
			cout<<a/b;
			if(a%b!=0){
				cout<<"......"<<a%b;
			}
			cout<<endl;
		}
		else if(x=="pow"){
			cout<<pow(a,b);
		}
		else if(x=="log"){
			cout<<log(a,b)<<endl;
		}
		else if(x=="abs"){
			if(a>b){
				cout<<a-b<<endl;
			}
			else{
				cout<<b-a<<endl;
			}
		}
		else if(x=="rand"){
			srand(time(0));
			cout<<rand()%a+(b-a)<<endl;
		}
		else{
			cout<<"´íÎó"<<endl;
		}
	}
}

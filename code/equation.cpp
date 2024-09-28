#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int n,m,p,q,a,b;
int main(){
	cin>>m>>n>>p>>q;
	cout<<"y=";
	int a1=n-q;
	int a2=m-p;
	int a3=p*n-m*q;
	int a4=p-m;
	if(a1%a2!=0){
		int flag=__gcd(a1,a2);
		if(flag!=1){
			a1/=flag;
			a2/=flag;
		}
		if(a2<0){
			a2=-a2;
			a1=-a1;
		}
		cout<<a1<<"/"<<a2<<"*x";
	}
	else if(a1/a2!=0){
		cout<<a1/a2<<"x";
	}
	if(a3%a4!=0){
		int flag=__gcd(a3,a4);
		if(flag!=1){
			a3/=flag;
			a4/=flag;
		}
		if(a4<0){
			a3=-a3;
			a4=-a4;
		}
		if(a3<0){
			cout<<a3<<"/"<<a4;
		}
		else{
			cout<<"+"<<a3<<"/"<<a4;
		}
	}
	else if(a3/a4<0){
		cout<<"+"<<a3<<"/"<<a4;
	}
	else if(a3/a4!=0){
		cout<<"+"<<a3/a4;
	}
	return 0;
}
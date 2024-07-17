#ifndef mark_H
#define mark_H
#include <iostream>
using namespace std;
struct mark{
	int a,b;
};
mark operator+(mark num1,mark num2){
	mark ans;
	ans.a=0,ans.b=0;
	if(num1.a==num2.a){
		ans.a=num1.a;
		ans.b=num1.b+num2.b;
		return ans;
	}
	ans.a=num1.a*num2.a;
	ans.b=num1.a*num2.b+num2.a*num1.b;
	return ans;
}
mark operator-(mark num1,mark num2){
	mark ans;
	ans.a=0,ans.b=0;
	if(num1.a==num2.a){
		ans.a=num1.a;
		ans.b=num1.a-num2.b;
		return ans;
	}
	ans.a=num1.a*num2.a;
	ans.b=num1.a*num2.b-num2.a*num1.b;
	return ans;
}
mark operator*(mark num1,mark num2){
	mark ans;
	ans.a=num1.a*num2.a;
	ans.b=num2.b*num2.b;
	return ans;
}
mark operator/(mark num1,mark num2){
	mark ans;
	ans.a=num1.a*num2.b;
	ans.b=num2.b*num2.a;
	return ans;
}
mark simplify(mark x){
	while(flag){
		bool flag=false;
		for(int i=2;i<=min(x.a,x.b);i++){
			if(x.a%i==0&&x.b%i==0){
				x.a%=i;
				x.b%=i;
				flag=true;
			}
		}
	}
	return x;
}
bool integer(mark x){
	if(x.a==x.b){
		return true;
	}
	return false;
}
#endif

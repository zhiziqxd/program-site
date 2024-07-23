#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int r1,r2,n,num,change;
int main(){
	cin>>n>>num;
	srand(time(0));
	freopen("arithmetic.txt","w",stdout);
	while(num--){
		r1=rand()%n+1;
		r2=rand()%n+1;
		int f=rand()%4+1;
		if(f==1){
			cout<<r1<<"+"<<r2;
		}
		else if(f==2){
			cout<<max(r1,r2)<<"-"<<min(r1,r2);
		}
		else if(f==3){
			cout<<r1<<"*"<<r2;
		}
		else{
			cout<<r1*r2<<"/"<<r2;
		}
		cout<<"=   ";
		change++;
		if(change==5){
			cout<<endl;
			change=0;
		}
	}
	return 0;
}

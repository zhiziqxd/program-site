#include <iostream>
using namespace std;
char x[10000][10000];
int n,m;
int cnt,ans;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>x[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(x[i][j]=='1'){
				if(x[i-1][j]=='1'){
				  cnt++;
			  }
			  if(x[i+1][j]=='1'){
				  cnt++;
			  }
			  if(x[i][j-1]=='1'){
				  cnt++;
			  }
		    if(x[i][j+1]=='1'){
				  cnt++;
			  }
			}
			if(cnt%2!=0){
				ans++;
			}
			cnt=0;
		}
	}
	if(ans==0||ans==2){
		cout<<"Y";
	}
	else{
		cout<<"N";
	}
	return 0;
}

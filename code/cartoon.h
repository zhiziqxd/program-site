#ifndef cartoon_H
#define cartoon_H
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <vector>
#include <cmath>
using namespace std;
struct video{
	vector<vector<vector<char> > > draw;
};
video operator+(video a,video b){
	for(int i=0;i<b.draw.size();i++){
		a.draw.push_back(b.draw[i]);
	}
	return a;
}
void bar1(char ch,int time_long){
    for(int i=1;i<=100;i++){
        int j=i;
        while(j--){
            cout<<ch;
        }
		cout<<"%"<<i<<endl;
		sleep(time_long);
		system("cls");
    }
	return;
}
void bar2(char ch,int time_long){
	for(int i=1;i<=100;i++){
		cout<<ch<<std::flush;
		sleep(time_long);
	}
	return;
}
void countdown(int n,int long_time){
	system("mode con lines=5 cols=10"); 
	while(n--){
		cout<<n;
		sleep(long_time);
		system("cls");
	}
	return;
}
void paint(video to_paint,int n,int m,int long_time){
	for(int k=0;k<to_paint.draw.size();k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cout<<to_paint.draw[k][i][j];
			}
			cout<<endl;
		}
		sleep(long_time);
		system("cls");
	}
	return;
}
void padding(vector<vector<char> > draw,int long_time,char ch){
	for(int k=0;k<draw.size();k++){
		for(int i=0;i<=k;i++){
			for(int j=0;j<draw[i].size();j++){
				cout<<ch;
			}
			cout<<endl;
		}
		sleep(long_time);
		system("cls");
	}
	return;
}
void draw(int n,int m,int choose,char ch){
  if(choose==1){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<ch;
		}
		cout<<endl;
	}
  }
  else if(choose==2){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<ch;
		}
		cout<<endl;
	}
  }
  else if(choose==3){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int j=1;j<=n;j++){
			cout<<ch;
		}
		cout<<endl;
	}
  }
  else if(choose==4){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-1/2;j++){
			cout<<" ";
		}
		for(int j=1;j<=n-i;j++){
			cout<<ch;
		}
		for(int j=1;j<=ceil(n-1/2);j++){
			cout<<" ";
		}
		cout<<endl;
	}
  }
}
#endif
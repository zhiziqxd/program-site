#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
string str;
bool cmp(char a,char b){
	return int(a)<int(b);
}
void sort(){
	string a;
	cin>>a;
	const char* filename=&a[0];
	freopen(filename,"r",stdin);
	char x;
	vector<char> ch;
	while(cin>>x){
		ch.push_back(x);
	}
	sort(ch.begin(),ch.end(),cmp);
	return;
}
int main(){
	while(true){
		getline(cin,str);
		if(str=="sort"){
			sort();
		}
		else if(str=="del"){
			string filename;
			string del2="del"+filename;
			const char* del=&del2[0];
			system(del);
		}
		else if(str=="add"){
			string file;
			cin>>file;
			const char* f=&file[0];
			freopen(f,"w",stdout);
			string str;
			while(true){
				getline(cin,str);
				if(str!="/end"){
					cout<<str<<endl;
				}
				else{
					break;
				}
			}
			freopen("CON","w",stdout);
		}
		else if(str=="see"){
			system("Dir /b /s");
			system("pause");
			system("cls");
		}
		else{
			cout<<"´íÎó"<<endl;
		}
	}
}

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
string str,key;
ifstream fin;
ofstream fout;
int main(){
	time_t timep;
	srand(time(0));
	while(true){
		cin>>str;
		if(str=="rkey"){
			key="";
			int a;
			cin>>a;
			for(int i=1;i<=a;i++){
				key+=char(int(rand()%10)+'0');
			}
			if(key.length()<=30){
				cout<<key<<endl;
			}
			else{
				for(int i=0;i<key.length();i++){
					cout<<key[i];
					if(i%29==0){
						cout<<endl;
					}
				}
			}
			cout<<endl;
		}
		else if(str=="ikey"){
			fin.open("key.txt");
			cout<<key;
			fin.close();
		}
		else if(str=="skey"){
			fout.open("key.txt");
			fout<<key;
			fout.close();
		}
		else if(str=="->"){
			string s;
			getline(cin,s);
			int j=0;
			for(int i=0;i<s.length();i++){
				if(j==key.length()){
					j=0;
				}
				s[i]+=key[j];
				j++;
			}
			cout<<s<<endl;
		}
		else if(str=="<-"){
			string s;
			getline(cin,s);
			int j=0;
			for(int i=0;i<s.length();i++){
				s[i]-=key[j];
			}
			cout<<s<<endl;
		}
		else{
			cout<<"错误"<<endl;
		}
	}
	return 0;
}

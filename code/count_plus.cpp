#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
using namespace std;
vector<string> code;
string str;
int cnt;//琛屾暟
int main(){
	cout<<"娆㈣繋浣跨敤zhizi浠ｇ爜缂栬緫鍣?<<endl;
	system("pause");
	system("cls");
	while(true){
		cin>>str;
		if(str=="/del"){
			int a;
			cin>>a;
			if(a>cnt){
				cout<<"閿欒"<<endl;
			}
			else{
				if(a==cnt){
					code[a]="";
					cnt--;
				}
				else{
					for(int i=a;i<cnt;i++){
						code[i]=code[i+1];
					}
					cnt--;
				}
			}
		}
		else if(str=="/see"){
			int a,b;
			cin>>a>>b;
			for(int i=a;i<=b;i++){
				cout<<code[i]<<endl;
			}
		}
		else if(str=="/size"){
			cout<<cnt<<endl;
		}
		else if(str=="/allsee"){
			for(int i=1;i<=cnt;i++){
				cout<<code[i]<<endl;
			}
		}
		else if(str=="i"){
		    int a;
		    cin>>a;
		    cin>>str;
		    for(int i=cnt;i<=a;i++){
		        code[i+1]=code[i];
		    }
		    cnt++;
		    code[a]=str;
		}
		else if(str=="/del"){
		    int a;
		    cin>>a;
		    for(int i=a;i<=cnt;i++){
		        code[a]=code[a+1];
		    }
		    cnt--;
		}
		else if(str=="/end"){
		    ofstream fout;
		    string file;
		    cin>>file;
		    fout.open(file.c_str());
		    for(int i=1;i<=cnt;i++){
		        fout<<code[i]<<endl;
		    }
		    fout.close();
		    return 0;
		}
		else{
			code.push_back(str);
			cnt++;
		}
	}
}

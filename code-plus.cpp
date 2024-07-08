#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
vector<string> code;
string str;
int cnt;//行数
int main(){
	cout<<"欢迎使用zhizi代码编辑器"<<endl;
	system("pause");
	system("cls");
	while(true){
		cin>>str;
		if(str=="/del"){
			int a;
			cin>>a;
			if(a>cnt){
				cout<<"错误"<<endl;
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
		    cin>>str
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
		    ifstream fout;
		    string file;
		    cin>>file;
		    fout.open(file);
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

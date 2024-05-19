#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
vector<string> code;
string str;
int cnt;//ÐÐÊý
int main(){
	cout<<"»¶Ó­Ê¹ÓÃzhizi´úÂë±à¼­Æ÷"<<endl;
	system("pause");
	system("cls");
	while(true){
		cin>>str;
		if(str=="/del"){
			int a;
			cin>>a;
			if(a>cnt){
				cout<<"´íÎó"<<endl;
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
		else{
			code.push_back(str);
			cnt++;
		}
	}
}

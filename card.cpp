#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
bool card[13];
string c[13]={"basic R","honey R","light R","rice R","club SR","orange SR","Grapes SR",
"faster SSR","Bubble SSR","Beetle Egg SSR",
"Antennae UR","Bone UR","Yggdrasil UR"
};
void start(){
	freopen("florr.in","r",stdin);
	for(int i=0;i<13;i++){
		cin>>card[i];
	}
	freopen("CON","r",stdin);
	return;
}
string user;
int main(){
	cout<<"��ӭʹ��florr�鿨"<<endl;
	sleep(1);
	start();
	while(true){
		cin>>user;
		if(user=="/r"){
			int r=rand()%13;
			if(card[r]){
				cout<<"���Ѿ����:"<<c[r]<<endl;
			}
			else{
				card[r]=true;
				cout<<"��ϲ���:"<<c[r]<<endl;
			}
		}
		else if(user=="/see"){
			for(int i=0;i<13;i++){
				if(card[i]){
					cout<<c[r]<<endl;
				}
			}
			system("pause");
			system("cls")
		}
		else{
			cout<<"����"<<endl;
		}
	}
}

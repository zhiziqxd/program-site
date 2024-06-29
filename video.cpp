#include <iostream>
#include <cstdlib>
#include <fstream>
#include <windows.h>
using namespace std;
char w[1010][10100];
int n,m,ans,zh;
int main(){
    ifstream fin;
    fin.open("video.in");
    fin>>ans>>n>>m>>zh;
    for(int i=1;i<=ans;i++){
        for(int j=1;j<=n*m;j++){
            cin>>w[i][j];//第一个代表第几个，第二个换行即可
        }
    }
    for(int i=1;i<=ans;i++){
        for(int j=1;j<=n*m;j++){
            cout<<w[i][j];
            if(j%m==0){
                cout<<endl;
            }
        }
        sleep(1000/zh);
    }
    cout<<"共消耗"<<sizeof(w)<<"byte内存";
    return 0;
}

#include <iostream>
#include <vector>
#include <string>
using namespace std;
string str,name;
vector<string> text;
int cnt;//在哪里
int main(){
    cout<<"zhizi_text 2024"<<endl;
    while(true){
        getline(cin,str);
        if(str=="/end"){
            break;
        }
        else if(str=="/del"){
            int in;
            cin>>in;
            cin.ignore();
            in-=1;
            if(in>cnt){
                cout<<"error"<<endl;
            }
            else if(in==cnt){
                cnt--;
            }
            else{
                text.erase(text.begin()+in);
                cnt--;
            }
        }
        else if(str=="/cp"){
            int cp_in,cp_to;
            cin>>cp_in>>cp_to;
            text[cp_in]=text[cp_to];
        }
        else if(str=="/read"){
            string file;
            getline(cin,file);
            freopen(file.c_str(),"r",stdin);
            text.clear();
            cin>>cnt;
            for(int i=1;i<=cnt;i++){
                getline(cin,str);
                text.push_back(str);
            }
            freopen("CON","r",stdin);
        }
        else{
        	cnt++;
            text.push_back(str);
        }
    }
    cout<<"file_name:";
    string file;
    getline(cin,file);
    freopen(file.c_str(),"w",stdout);
    cout<<cnt<<endl;
    for(int i=1;i<=cnt;i++){
        cout<<text[i-1]<<endl;
    }
    return 0;
}
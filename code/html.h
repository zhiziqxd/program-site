#ifndef html_H
#define html_H
#include <iostream>
#include <string>
using namespace std;
string text(string str){
    if(str[1]=='a'){
        for(int i=2;i<=str.length();i++){
            if(str[i]=='"'){
                string website="";
                for(int j=i+1;j<=str.length();j++){
                    if(str[j]!='"'){
                        website+=str[j];
                    }
                    else{
                        return website;
                    }
                }
            }
        }
    }
    else if(str[1]=='p'||str[1]=='b'||str[1]=='i'){
        string text="";
        for(int i=3;i<str.length();i++){
            if(str[i]!='<'){
                return text;
            }
            text+=str[i];
        }
    }
    else if(str=="<br/>"){
        return "\n";
    }
    else{
        string tag="";
        for(int i=1;str[i]!='>';i++){
            tag+=str[i];
        }
        if(tag=="title"){
            string name="";
            for(int i=7;str[i]!='<';i++){
                name+=str[i];
            }
            return "name:"+name;
        }
        else if(tag=="strong"){
            string text;
            for(int i=8;str[i]!='<';i++){
                text+=str[i];
            }
            return text;
        }
        else if(tag=="html"||tag=="/html"){
            return "html";
        }
        else if(tag[0]=='h'&&tag[1]>='1'&&tag[1]<='6'&&tag.length()==2){
            string text;
            for(int i=4;str[i]!='<';i++){
                text+=str[i];
            }
            return text;
        }
        else if(tag=="del"){
            string text="";
            for(int i=5;str[i]!='<';i++){
                text+=str[i];
            }
            return text+"(~)";
        }
    }
    return "error";
}
#endif

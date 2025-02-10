#include<iostream>
using namespace std;

string encrypt(string text ,int shift){
    string result  =""
    for(char ch :text){
        if(isupper(ch)){
            result+=char(int(ch+shift-'A')%26+'A');
            
        }
        else if(islower(ch)){
            result+=char(int(ch+shift-'a')%26+'a');
        }
        else{
        result+=ch;
        }
    }
}
string decrypt(string text,int shift){
    return encrypt(text,26-shift);
}
int main(){
    string text;
    int shift;
    cout<<"enter the palintext";
    getline(cin,plaintext);
    cout<<"enter the shift key";
    cin>>shift;
    string encrypted  =encrypt(text,shift);
    string decrypt  =decrypt(encrypted,shift);
    cout<<"encrypted text"<<encrypt;
    cout<<"deecrypted text"<<decrypt<<endl;
    return 0;
}
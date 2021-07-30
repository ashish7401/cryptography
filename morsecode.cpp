#include<bits/stdc++.h>

using namespace std;

string morseEncode(char x)
{
    switch (x) {
    case 'a':
        return ".-";
    case 'b':
        return "-...";
    case 'c':
        return "-.-.";
    case 'd':
        return "-..";
    case 'e':
        return ".";
    case 'f':
        return "..-.";
    case 'g':
        return "--.";
    case 'h':
        return "....";
    case 'i':
        return "..";
    case 'j':
        return ".---";
    case 'k':
        return "-.-";
    case 'l':
        return ".-..";
    case 'm':
        return "--";
    case 'n':
        return "-.";
    case 'o':
        return "---";
    case 'p':
        return ".--.";
    case 'q':
        return "--.-";
    case 'r':
        return ".-.";
    case 's':
        return "...";
    case 't':
        return "-";
    case 'u':
        return "..-";
    case 'v':
        return "...-";
    case 'w':
        return ".--";
    case 'x':
        return "-..-";
    case 'y':
        return "-.--";
    case 'z':
        return "--..";
    case '1':
        return ".----";
    case '2':
        return "..---";
    case '3':
        return "...--";
    case '4':
        return "....-";
    case '5':
        return ".....";
    case '6':
        return "-....";
    case '7':
        return "--...";
    case '8':
        return "---..";
    case '9':
        return "----.";
    case '0':
        return "-----";
    }
}

string morse_code_encryptor(string &input){
    string output;
    for(int i=0;i<input.length();i++){
        char x=input[i];
        if(x!=' '){
        string b=morseEncode(x);
        for(auto p:b){
            output.push_back(p);
        }}
        else{
            output.push_back(' ');
        }
        output.push_back(' ');
    }
    return output;
}


string morse_code_decryptor(string &input){
    map<string,char> decry;
    string output;
    for(int i=0;i<26;i++){
        decry[morseEncode(char(97+i))]=char(97+i);
    }
    for(int i=0;i<10;i++){
        decry[morseEncode(char(48+i))]=char(48+i);
    }
    int i=0;
    while(i<input.length()){
        while(i<input.length() && input[i]==' '){
            output.push_back(' ');
            i++;
        }
        string bet;
        while(i<input.length() && input[i]!=' '){
            bet.push_back(input[i]);
            i++;
        }
        output.push_back(decry[bet]);
        i++;
    }
    return output;
}

int main(){
    cout<<"enter the text\n";
    string p;
    getline(cin,p);
    cout<<morse_code_encryptor(p)<<"\n";
    return 0;
}


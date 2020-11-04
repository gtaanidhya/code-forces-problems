#include <iostream>
#include <string>

using namespace std;

int main(){
    string  str;
    getline(cin,str);
    int lowercase{0};
    for(size_t i{0};i<str.length();i++){
        if(islower(str[i]))
            lowercase++;
    }
    if(lowercase>1 || (lowercase==1 && islower(str[0])==0))
        cout << str << endl;
    else{
        for(size_t i{0};i<str.length();i++){
            if(isupper(str[i]))
                str[i]=tolower(str[i]);
            else if(islower(str[i]))
                str[i]=toupper(str[i]);
        }
        cout << str << endl;
    }
    return 0;
}
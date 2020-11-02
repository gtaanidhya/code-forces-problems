#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <vector>

using namespace std;

void UtoL(string &str);

int main(){
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    UtoL(str1);
    UtoL(str2);
    if(str1>str2)
        cout << "1" <<endl;
    else if(str1<str2)
        cout << "-1" << endl;
    else if(str1==str2)
        cout << "0" << endl;
    
    return 0;
    
}

void UtoL(string &str){
    for(size_t i{0};i<str.length();i++){
        int c=str.at(i);
        if(isupper(c))
            str.at(i)=tolower(c);
    }
}
#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <vector>

using namespace std;

void UtoL(string &str);

int main(){
    string word;
    cin >> word;
    UtoL(word);
    vector<char> new_word;
    for(size_t i{0};i<word.length();i++){
        if(word[i]!= 'a' && word[i]!= 'e' && word[i]!= 'i' && word[i]!= 'o' && word[i]!= 'u' && word[i]!='y'){
            new_word.push_back('.');
            new_word.push_back(word[i]);
        }
    }
    for(auto c:new_word)
        cout << c;
    
    cout << endl;
    return 0;
}

void UtoL(string &str){
    for(size_t i{0};i<str.length();i++){
        int c=str.at(i);
        if(isupper(c))
            str.at(i)=tolower(c);
    }
}
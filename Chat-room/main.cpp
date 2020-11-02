#include <iostream>
#include <string>


using namespace std;

int main(){
    string word;
    cin >> word;
    string hello{"hello"};
    size_t z{0};
    for(size_t i{0};i<hello.length();i++){
        for(size_t j{z};j<word.length();j++){
            if(word[j]==hello[i]){
                z+=1;
                break;
            }
            else{
                word.erase(j,1);
                j=j-1;
            }
        }
    }
    if(word.length()>5)
        word.erase(5,word.length()-5);
    if(word=="hello")
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}

#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int main(){
    string str;
    cin >> str;
    string c{"abcdefghijklmnopqrstuvwxyz"};
    vector<int> num;
    for(size_t i{0};i<c.length();i++){
        unsigned int count{0};
        for(size_t j{0};j<str.length();j++)
            if(str[j]==c[i])
                count++;
        if(count!=0)
            num.push_back(count);
    }
    
    if((num.size()%2)==0)
        cout << "CHAT WITH HER!" << endl;
    else 
        cout << "IGNORE HIM!" << endl;
    return 0;
}

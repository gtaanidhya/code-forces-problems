#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;


int main(){
    vector <int> num;
    string str;
    cin >> str;
    stringstream ss(str);
    char ch{};
    size_t size=1;
    for(auto c:str){
        if(c=='+')
            size++;
    }
    for (size_t i{0};i<size;i++){
        int x;
        ss >> x >> ch;
        num.push_back(x);
    }

    for(size_t i{0};i<num.size();i++){
        for(size_t j{i+1};j<num.size();j++){
            if(num[i]>num[j])
                swap(num[i],num[j]);
        }
    }
 
    vector<char> new_str;
     for(size_t i{0};i<num.size();i++){
         cout << num[i];
         if(i==(num.size()-1))
             break;
         cout << "+";
     }
    cout << endl;
    return 0;
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n{0};
    vector<string> words;
    
    cin >> n;
    
    for(int i{0}; i<n; i++){
        string word;
        //string str;
        cin >> word;
        //str = word;
        words.push_back(word);
    }
    
    for(int i{0};i<n;i++){
        string word{words.at(i)};
        if(word.length()>10)
            cout << word.at(0) << word.length()-2 << word.at(word.length()-1) << endl;
        else
            cout << word << endl;
    }
    return 0;
}

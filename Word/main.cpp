#include <iostream>
#include <string>
#include <algorithm>
 

using namespace std;

int main(){
    string word;
    cin >> word;
    int lower{0};
    int upper{0};
    for(size_t i{0};i<word.length();i++){
        if(isupper(word[i]))
            upper++;
        if(islower(word[i]))
            lower++;
    }
    if(upper>lower)
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    if(upper<=lower)
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        
    cout << word << endl;
    return 0;
}
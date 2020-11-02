#include <iostream>
#include <string>

using namespace std;

int main(){
    int n{};
    cin >> n;
    string results;
    cin >> results;
    int anton{0},danik{0};
    for(size_t i{0};i<results.length();i++){
        if(results[i]=='A')
            anton++;
        else
            danik++;
    }
    if(anton>danik)
        cout << "Anton" << endl;
    else if(anton<danik)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    return 0;
}
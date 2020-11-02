#include <iostream>
#include <string>

using namespace std;

int main(){
    string number;
    cin >> number;
    int n{0};
    for(size_t i{0};i<number.length();i++){
        if(number[i]=='4' || number[i]=='7')
            n++;
    }
    if(n==4 || n==7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
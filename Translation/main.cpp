#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    string t;
    cin >> s;
    cin >> t;
    string x=s;
    for(size_t i{0};i<s.length();i++){
        s[i]=x[x.length()-i-1];
    }
//    cout << s << endl;
    if(t==s)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
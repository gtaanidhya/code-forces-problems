#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    string b;
    cin >> a;
    cin >> b;
    string answer;
    int n= a.length();
    for(int i{0};i<n;i++){
        if(a[i]==b[i])
            answer+="0";
        else
            answer+="1";
    }
    cout << answer << endl;
    return 0;
}
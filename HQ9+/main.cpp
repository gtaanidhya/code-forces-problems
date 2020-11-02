#include <iostream>
#include <string>

using namespace std;

int main(){
    string p;
    cin >> p;
    int n{0};
    for(size_t i{0};i<p.length();i++){
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
            n++;
    }
    if(n==0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
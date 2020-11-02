#include <iostream>

using namespace std;

int main(){
    int n{};
    cin >> n;
    while(true){
        n++;
        int p{},q{},r{},s{};
        p=n/1000;
        q=(n%1000)/100;
        r=(n%100)/10;
        s=n%10;
        if(p!=q && p!=r && p!=s && q!=r && q!=s && r!=s)
            break;
    }
    cout << n << endl;
    return 0;
}
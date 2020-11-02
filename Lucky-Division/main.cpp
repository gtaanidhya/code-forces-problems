#include <iostream>
#include <string>

using namespace std;

int main(){
    int n{};
    cin >> n;
    string str=to_string(n);
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%44==0 || n%77==0 || n%777==0 || n%444==0 || n%447==0 || n%474==0|| n%744==0|| n%774==0|| n%747==0 || n%477==0)
        cout << "YES" << endl;
    else{
        size_t z{0};
        for(size_t i{0};i<str.length();i++){
            if(str[i]!='4' && str[i]!='7'){
                cout << "NO" << endl;
                break;
            }
            z++;
        }
        if(z==str.length())
            cout << "YES" <<endl;
    }
        
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n{};
    cin >> n;
    int x{0};
    
    for(int i{0};i<n;i++){
        string str;
        cin >> str;
        if(str == "x++" || str == "X++")
            x++;
        else if(str == "x--" || str == "X--")
            x--;
        else if(str == "++x" || str == "++X")
            ++x;
        else if(str == "--x" || str == "--X")
            --x;
    }
    
    cout << x << endl;
    
    return 0;
}

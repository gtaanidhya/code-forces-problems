#include <iostream>

using namespace std;

int main(){
    int x{};
    cin >> x;
    int steps{};
    if(x>=5){
        steps=x/5;
        x=x%5;
    }
    if(x==4 || x==3 || x==2 || x==1)
        steps++;
    cout << steps << endl;
    return 0;
}
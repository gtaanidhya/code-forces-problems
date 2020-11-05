#include <iostream>

using namespace std;

int main(){
    int n{};
    cin >> n;
    int final{};
    for(int i{0};i<n;i++){
        int x{};
        cin >> x;
        final+=x;
    }
    cout << static_cast<double>(final)/n << endl;
    return 0;
}
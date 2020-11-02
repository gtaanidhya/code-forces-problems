#include <iostream>

using namespace std;

int main(){
    int a{},b{};
    cin >> a >> b;
    int i{0};
    int weight_a{a},weight_b{b};
    while(true){
        weight_a *= 3;
        weight_b *= 2;
        if(weight_a>weight_b){
            i++;
            break;
        }
        i++;
    }
    cout << i << endl;
    return 0;
}

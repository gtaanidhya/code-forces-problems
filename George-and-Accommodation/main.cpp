#include <iostream>

using namespace std;

int main(){
    int n{};
    cin >> n;
    int rooms[2*n]{};
    for(int i{0};i<2*n;i++){
        cin >> rooms[i];
    }
    int available{0};
    for(int i{0};i<2*n;i=i+2){
        if(rooms[i+1]-rooms[i]>=2)
            available++;
    }
    cout << available << endl;
    return 0;
}
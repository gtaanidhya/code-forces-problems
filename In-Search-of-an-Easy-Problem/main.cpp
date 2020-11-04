#include <iostream>

using namespace std;

int main(){
    int n{};
    cin >> n;
    int opinion[n]{};
    for(int i{0};i<n;i++)
        cin >> opinion[i];
    int hard{0};
    for(int i{0};i<n;i++){
        if(opinion[i]==1)
            hard++;
    }
    if(hard>0)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;
    return 0;
}
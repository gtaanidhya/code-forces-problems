#include <iostream>

using namespace std;

int main(){
    int n{};
    cin >> n;
    int h{};
    cin >> h;
    int width{0};
    int heights[n]{};
    for(int i{0};i<n;i++){
        cin >> heights[i];
        if(heights[i]<=h)
            width++;
        if(heights[i]>h)
            width+=2;
    }
    cout << width << endl;
    return 0;
}
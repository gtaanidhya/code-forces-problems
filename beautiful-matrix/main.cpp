#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<vector<int>> matrix;
    for(int i{0};i<5;i++){
        vector<int> row;
        for(int j{0};j<5;j++){
            int x{};
            cin >> x;
            row.push_back(x);
        }
        matrix.push_back(row);
    }
    int x{},y{};
    for(int i{0};i<5;i++)
        for(int j{0};j<5;j++)
            if(matrix[i][j]==1)
            {
                x=2-i;
                y=2-j;
            }
    if(x<0)
        x*=(-1);
    
    if(y<0)
        y*=(-1);
    cout << x+y << endl;
    
    return 0;
}

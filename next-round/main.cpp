#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n{},k{};
    vector<int> score;
    int count{0};
    
    cin >> n >> k;
    
    for(int i{0};i<n;i++){
        int x{};
        cin >> x;
        score.push_back(x);
    }
    
    for(int i{0};i<n;i++){
        if(score.at(i) >= score.at(k-1) && score.at(i)>0)
            count++;
    }
    
    cout << count << endl;
    return 0;
}

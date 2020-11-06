#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n{},m{};
    cin >> n >> m;
    int pieces[m]{};
    for(int i{0};i<m;i++){
        cin >> pieces[i];
    }
    sort(pieces,pieces+m);
//    for(int i{0};i<m;i++)
//        cout << pieces[i] << " ";
//    cout << endl;
    
    vector<int> results;
    for(int i{n-1};i<m;i++){
        int x{};
        x=pieces[i]-pieces[i-n+1];
        results.push_back(x);
    }
    sort(results.begin(),results.end());
    
    cout << results[0] << endl;
    return 0;
}
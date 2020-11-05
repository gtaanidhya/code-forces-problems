#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n{};
    cin >> n;
    vector<int> a(n,0);
    for(int i{0};i<n;i++)
        cin >> a[i];
    sort(a.begin(),a.end());
    for(auto v:a)
        cout << v << " ";
    cout << endl;
    return 0;
}
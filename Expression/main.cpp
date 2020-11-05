#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int a{},b{},c{};
    cin >> a >> b >> c;
    vector<long long int> results;
    results.push_back(a+b+c);
    results.push_back(a*b*c);
    results.push_back(a*(b+c));
    results.push_back((a+b)*c);
    sort(results.begin(),results.end());
    cout << results[results.size()-1] << endl;
    return 0;
}
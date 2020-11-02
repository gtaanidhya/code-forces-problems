#include <iostream>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

int main(){
    int n{};
    cin >> n;
    vector<int> current_passengers;
    int a{},b{};
    int c{0};
    for(int i{0}; i<n; i++){
        cin >> a >> b; 
        c = c + (((-1)*a)+b);
        current_passengers.push_back(c);
    }
    sort(current_passengers.begin(),current_passengers.end());
    //for(auto v:current_passengers)
    //    cout << v << " ";
    cout << current_passengers[n-1] << endl;
    return 0;
}

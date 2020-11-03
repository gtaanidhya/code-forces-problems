// It has a run time on 202 ms on codeforce so if you have better solution please pull a request
#include <iostream>
#include <vector>


using namespace std;

int main(){
    int n{};
    cin >> n;
    int a[n]{};
    for(int i{0};i<n;i++)
        cin >> a[i];
    int max{1};
    vector <int> non_decreasing;
    for(int i{0};i<=n-2;i++){
        if(a[i+1]>=a[i]){
            max++;
        }
        else if(a[i+1]<a[i]){
            non_decreasing.push_back(max);
            max=1;
        }
    }
    non_decreasing.push_back(max);
//    for(auto v:non_decreasing)
//        cout << v << " ";
    
    int x{non_decreasing[0]};
    for(size_t i{1};i<non_decreasing.size();i++){
        if(non_decreasing[i]>x)
        x=non_decreasing[i];
    }
            cout << x << endl;
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int k{},n{},w{};
    cin >> k >> n >> w;
    int total_cost{};
    for(int i{1};i<=w;i++){
        total_cost+=i*k;
    }
    if(total_cost<=n)
        cout << "0" << endl;
    else
        cout << total_cost-n << endl;
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;


int main(){
    size_t n{};
    cin >> n;
    vector<int> point;
    for(size_t i{0};i<3*n;i++){
        int p{};
        cin >> p;
        point.push_back(p);
    }
    vector<int> sum(3,0);
    for(size_t i{0};i<3*n;i+=3){
        sum[0]+=point[i];
    }
    for(size_t i{1};i<3*n;i+=3){
        sum[1]+=point[i];
    }
    for(size_t i{2};i<3*n;i+=3){
        sum[2]+=point[i];
    }
    //for(auto z:sum)
    //    cout << z << " "; 
  
    if(sum[0]==0 && sum[1]==0 && sum[2]==0)
        cout << "YES" << endl;
    else
        cout << "NO"  << endl;
    return 0;
}

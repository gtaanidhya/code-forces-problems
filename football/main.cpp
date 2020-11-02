#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string str;
    cin >> str;
    vector<int> num;
    for(size_t i{0};i<str.length();i++){
        int count{1};
        for(size_t j{i+1};j<str.length();j++){
            if(str[i]==str[j])
                count++;
            else
                break;
        }
        num.push_back(count);
    }
    
    for(size_t i{0};i<num.size();i++){
        for(size_t j{i+1};j<num.size();j++){
            if(num[i]>num[j])
                swap(num[i],num[j]);
        }
    }
    if(num[num.size()-1]>=7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n{};
    cin >> n;
    string it{"it"};
    string final_feeling;
    for(int i{1};i<=n;i++){
        if(i%2==1){
            final_feeling+="I hate ";
        }
        else{
            final_feeling+="I love ";
        }
        if(i<n)
            final_feeling+="that ";
    }
    final_feeling+="it";
    cout << final_feeling << endl;
    return 0;
}
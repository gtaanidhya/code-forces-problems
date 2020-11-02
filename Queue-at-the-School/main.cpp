#include <iostream>
#include <string>

using namespace std;

int main(){
    int n{},t{};
    cin >> n >> t;
    string queue;
    cin >> queue;
    while(t>0){
    for(size_t i{0};i<queue.length();){
        if(queue[i]=='B' && queue[i+1]=='G'){
            swap(queue[i],queue[i+1]);
            i=i+2;
        }
        else
            i++;
    }
    t--;
    }
    cout << queue << endl;
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int n{};
    cin >> n;
    int coins[n]{};
    
    for(int i{0};i<n;i++)
        cin >> coins[i];
    for(int i{0};i<n;i++){
        for(int j{i+1};j<n;j++){
            if(coins[j]>coins[i]){
                int x=coins[i];
                coins[i]=coins[j];
                coins[j]=x;
            }
        }
    }
    int min{1};
    int x{0};
    for(int i{0};i<n;i++){
        int remain{0};
        for(int j{i+1};j<n;j++){
            remain+=coins[j];
        }
        x+=coins[i];
        if(x>remain){
            break;
        }
        else{
            min++;
        }
    }
    cout << min << endl;
    return 0;
}
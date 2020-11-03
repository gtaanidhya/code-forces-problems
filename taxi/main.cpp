#include <iostream>

using namespace std;

int main(){
    int n{};
    cin >> n;
    int groups[n]{};
    int cnt_one{0};
    int cnt_two{0};
    int cnt_three{0};
    int cnt_four{0};
    int min_taxi{0};
    for(int i{0};i<n;i++){
        cin >> groups[i];
        if(groups[i]==1)
            cnt_one++;
        if(groups[i]==2)
            cnt_two++;
        if(groups[i]==3)
            cnt_three++;
        if(groups[i]==4)
            cnt_four++;
    }
    min_taxi=cnt_four;
    while(cnt_one!=0 && cnt_three!=0){
        cnt_one--;
        cnt_three--;
        min_taxi++;
    }
    if(cnt_three!=0){
        min_taxi+=cnt_three;
        cnt_three=0;
    }
    min_taxi += cnt_two/2;
    if(cnt_two%2 != 0){
        if(cnt_one<=2){
            cnt_one=0;
            min_taxi++;
        }
        else{
            cnt_one=cnt_one-2;
            cnt_two=0;
            min_taxi++;
        }
    }
    if(cnt_one!=0){
        min_taxi+=cnt_one/4;
        if(cnt_one%4!=0)
            min_taxi++;
   }
   
   cout << min_taxi << endl;
    return 0;
}
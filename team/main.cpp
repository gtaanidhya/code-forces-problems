#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n{};
    vector<vector<int>> response;
    vector<int> agree;
    int num{};
    cin >> n;
    for(int i{0};i<n;i++){
        vector<int> elements;
        for(int j{0};j<3;j++){
            int x{};
            cin >> x;
            elements.push_back(x);
        }
        response.push_back(elements);
    }
    
     for(int i{0};i<n;i++){
        int count{};
        for(int j{0};j<3;j++){
            if(response.at(i).at(j)==1)
                count++;
        }
        agree.push_back(count);
     }
     for(int i{0};i<n;i++){
         if(agree.at(i)>1)
             num++;
     }
     cout << num << endl;
    return 0;
}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n, petya, vasya, tonya, counter = 0;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> petya >> vasya >> tonya;
//        if (petya + vasya + tonya >= 2)
//        {
//            counter++;
//        }
//    }
//    cout << counter;
//    return 0;
//}

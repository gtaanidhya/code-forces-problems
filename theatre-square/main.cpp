#include <iostream>

using namespace std;

int main(){
    unsigned long long int n{},m{};
    unsigned long long int a{};
    unsigned long long int result{};
    
    cin >> n >> m >> a;
    if(n<=a && m<=a){
        result = 1;
        cout << result << endl;
    }
    else if(n==a && m>a)
        if(m%a==0){
            result= m/a;
            cout << result << endl;
        }
        else{
            result=1+(m/a);
            cout << 1+(m/a) << endl;
        }
    else if(n>a && m==a)
        if(n%a==0){
            result = (n/a);
            cout << result << endl;
        }
        else{ 
            result=1+(n/a);
            cout << result << endl;
        }
    else if(n>a && m>a){
        if(n%a==0 && m%a!=0){
            result=(n/a)*(1+(m/a));
            cout << result << endl;
        }
        else if(m%a==0 && n%a!=0){
            result=(1+(n/a))*(m/a);
            cout << result << endl;
        }
        else if(m%a==0 && n%a==0){
            result=(n/a)*(m/a);
            cout << result << endl;
        }
        else{
            result=(1+(n/a))*(1+m/a); 
            cout << result << endl;
        }
    }
    return 0;
}

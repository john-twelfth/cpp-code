/*UTF-8*/
/*3n+1猜想*/
/*又称：角谷猜想
对于任意一个正整数，如果是奇数*3+1,如果是偶数/2
得到的结果再按照上述规则重复处理，最终总能够得到1
*/
#include <iostream>
using namespace std;
int main(){
    int a,b=0;
    cin >>a;
    b=a;
    while (a!=1){
        if (a%2==0){
            a=a/2;
            cout <<b<<"/2="<<a<<endl;
            
        }
        else{
            a=a*3+1;
            
            cout << b<<"*3+1="<<a<<endl;
        }
        b=a;
    }
    cout << "End";
    return 0;
}
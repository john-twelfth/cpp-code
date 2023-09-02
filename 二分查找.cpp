/*coding:GBK*/
#include <iostream>
using namespace std;
int a[11]= {1,3,5,7,9,11,13,15,17,19,0};
int x,n=1; //n:查找内容
void zhao(int l,int r){
    x= (r+l)/2;
    if (a[x] == n) {
            cout << x;
            return;
        }
    else if (a[x] > n) {
            zhao(l,x);
        }
    else if (a[x] < n) {
            zhao(x,r);
        }
}
int main(){
    //cin >> n;
    zhao(0,9);
    return 0;
}
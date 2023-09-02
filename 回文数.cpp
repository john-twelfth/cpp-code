/*UTF-8*/
/*回文数*/
/*判断是否为回文数*/
#include <iostream>
using namespace std;
int main(){
    string a; 
    int b;
    cout << "pleace input a word:";
    cin >>a;
    int c= a.length();
    for (int i=0;i<(c/2);i++){
        if (a[i]==a[(c-i-1)]){
            b=0;
        }
        else{
            b=1;
            break;
        }
    }
    if (b==0){
        cout << "yes,It is a palindrome srting";
    }
    else{
        cout << "sorry,It isn't a palindrome srting";
    }
    return 0;
}
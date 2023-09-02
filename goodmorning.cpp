/*UTF-8*/
/*早上好*/
/*输入现在的时间，回答早上、中午、下午、晚上好*/
#include <iostream>
using namespace std;
int main(){
    string e[4],a;
    int q;
    a = "good";
    e[0] = "morning";
    e[1] = "afternoon";
    e[2] = "eveing";
    e[3] = "noon";
    for(int i=0;i=1;i){
        cout <<endl<< "what time is it now(int)[off is 30]";
        cin >> q;
        
            if ((q>=5) and (q<12)){
                cout << a<<" "<<e[0];
            }
            if ((q>12) and (q<= 18)){
                cout << a<<" "<<e[1];
            }
            if (q==12){
                cout << a<<" "<<e[3];
            }
            if (((q>18) and (q<=24)) or ((q>=0)and (q<5)) ){
                cout << a<< " "<< e[2];
            }
            if(q==30){
                break;
            }
        if (q<0 or q>24){
            cout << "not time";
            
        }
    }
    return 0;
}
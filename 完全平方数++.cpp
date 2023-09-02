/*UTF-8*/
/*完全平方数++*/
/*按从小到大的顺序寻找同时符合条件1和2的大于10的数，条件为：
1.该数为完全平方数
2.该数至少有2位数字相同*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a,i=10,x=0,nb;
    cin >> a;
    string a_str = to_string(a);
    int list1[a+1],add1=1;
    
    while (a!=0){   
        x=i*i;
        int b[to_string(x).length()];
        int d= to_string(x).length();
        nb=x;
        int g=0;
        while (x>0)
        {
            b[d-1-g]=x%10;
            x=x/10;
            g++;
            if (!(g<d)){
                break;
            }
        }
        int mi=0;
        for (int c=0;c<=d/2;c++){
            for (int j=d/2;j<d;j++){
                if (c==j){
                    continue;
                }
                if (b[c]==b[j]){
                    mi++;
                    
                    if (i != list1[add1-1]){
                        cout <<i<<"*"<<i<<"="<<nb<<endl;
                        list1[add1]=i;
                        add1++;
                        
                    }
                    else{
                        a++;
                    }

                    a--;
                    break;
                }
            }
        }
        i++;
    }
    cout << "["<<list1[1];
    for (int i=2;i<add1;i++){
        cout  <<","<< list1[i];
    }
    cout <<"]";
    return 0;
}
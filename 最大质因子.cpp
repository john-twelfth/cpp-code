/*UTF-8*/
/*最大质因子*/
/*质因子是指能整除给定正整数的质数。而最大质因子是指一个整数的所有质因子中最大的那个。
比如30的质因子有2，3， 5，所以最大质因子就是5。*/
#include <iostream>
using namespace std;
int main()
{
  int a;
  cin >> a;

  int b[a], b1 = 0;//b:存储a的所有因数 b1：因数的个数 11~24行将a中除1和它本身外所有因数存入列表b，将它的数量赋值给b1
    for (int i = 2; i < a; i++)
  {
    for (int q = 2; q < a; q++)
    {
      if (i * q == a)
      {
        b[b1] = i;
        b[b1 + 1] = q;
        b1 = b1 + 2;
      }
    }     
  }
  b1=b1/2;//以10为例，原b1值为4，对应b[0~3]:2、5、5、2

  int max = 0, zj, tf;//max：最大值 zj：寻找max的中间变量 tf：判断zj是否为质数
  for (int w = 0; w < b1; w++)
  {
    zj = b[w];    //29~42判断zj是否为质数，是：tf=0 ，否：tf=1
    tf = 0;
    for (int i = 2; i < zj; i++)
    {
      for (int j = 2; j < zj; j++)
      {
        if (i * j == zj)
        {
          tf = 1;
          break;
          break;
        }
      }
    }

    if (tf == 0 && zj > max)
    {
      max = zj;
    }
  }
  cout << max;
  return 0;
}
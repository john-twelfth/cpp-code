/*coding:GBK*/
#include <iostream>
using namespace std;
int a[105]={10,221,32,54,76,39,553,3221,5678,4021};
void quicksort(int l,int r){
    if (l>r){
        return;
    }
    int temp=a[l],i=l,j=r; //temp：基准数
    while (i <j) {
        while (a[j] >= temp) {
            j--;
        }
        while (a[i] <= temp) {
            i++;
        }
        swap(a[i], a[j]);
    }
    swap(a[i],temp);
    quicksort(l,i-1);//左
    quicksort(i+1,r);//右
}
int main() {
    quicksort(0,9);
    for (int i=0;i<=9;i++){
        cout <<a[i]<<" ";
    }
    return 0;
}
/*coding:GBK*/
#include <iostream>
using namespace std;
// 冒泡排序算法
void bubble_sort(double arr[10],int len){
    for (int i = 0; i < len-1; i++) {
        for (int j = 0; j < len-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    //写测试
    double arr[10] = {11,2.2,112.22,33,1,3.22,12.22,33,11,2.2};
    bubble_sort(arr,10);
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    return 0;

}
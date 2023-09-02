/*language:GBK*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cout << "多少数？";
	cin >>n;
	cout << "请输入每个数字"<<endl;
	double a[n+5],sum=0;  //sum:总和
	cin >> a[1];
	double maxn=a[1],minn=a[1]; //最大值，最小值
	sum +=a[1];
	for (int i=2;i<=n;i++){
		cin >> a[i];
		sum+=a[i];
		maxn=max(maxn,a[i]);
		minn=min(minn,a[i]);
	}
	double average =sum/n*1.0;
	
	sort(a+1,a+n+1); //小到大排序
	cout << "排序(从小到大)";
	for(int i=1;i<=n;i++){
		cout << a[i]<<" ";
	}
	cout << endl;
	cout << "最大值："<<maxn<<endl;
	cout << "最小值："<<minn<<endl;
	cout << "总和："<<sum<<endl;
	cout << "平均数："<<average<<endl;
	if (n%2==0){
		cout << "中位数："<< (a[n/2]+a[n/2+1])/2.0<<endl;
	}
	else{
		cout << "中位数："<< a[n/2+1]<<endl;
	}
	return 0;
}

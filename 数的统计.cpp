/*language:GBK*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cout << "��������";
	cin >>n;
	cout << "������ÿ������"<<endl;
	double a[n+5],sum=0;  //sum:�ܺ�
	cin >> a[1];
	double maxn=a[1],minn=a[1]; //���ֵ����Сֵ
	sum +=a[1];
	for (int i=2;i<=n;i++){
		cin >> a[i];
		sum+=a[i];
		maxn=max(maxn,a[i]);
		minn=min(minn,a[i]);
	}
	double average =sum/n*1.0;
	
	sort(a+1,a+n+1); //С��������
	cout << "����(��С����)";
	for(int i=1;i<=n;i++){
		cout << a[i]<<" ";
	}
	cout << endl;
	cout << "���ֵ��"<<maxn<<endl;
	cout << "��Сֵ��"<<minn<<endl;
	cout << "�ܺͣ�"<<sum<<endl;
	cout << "ƽ������"<<average<<endl;
	if (n%2==0){
		cout << "��λ����"<< (a[n/2]+a[n/2+1])/2.0<<endl;
	}
	else{
		cout << "��λ����"<< a[n/2+1]<<endl;
	}
	return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
��� ���� �Լ����� ���� ���� �ݺ��ڸ� �䱸�ϱ� ������, ���� ������ ������ �����̳ʿ��� ��� ����
������ �����ڰ� �������� ���� ��� < �����ڸ� �̿��ؼ� ��� ��.
*/

void main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	sort(v.begin(), v.end()); //sort(iterator first, iterator last) first ~ last ������ �����ڷ� ���Ͽ� ����.
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}
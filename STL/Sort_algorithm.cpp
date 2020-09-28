#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
모든 정렬 함수들은 임의 접근 반복자를 요구하기 때문에, 임의 접근이 가능한 컨테이너에서 사용 가능
별도의 조건자가 지정되지 않을 경우 < 연산자를 이용해소 대소 비교.
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

	sort(v.begin(), v.end()); //sort(iterator first, iterator last) first ~ last 구간을 조건자로 비교하여 정렬.
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}
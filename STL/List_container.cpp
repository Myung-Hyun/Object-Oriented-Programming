#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;
class Member
{
public:
	Member(string f, string l) :
		first_n(f), last_n(l) {}
	void print() {
		cout << last_n << " "<< first_n << endl;
	}
private:
	string last_n, first_n;
	friend bool operator < (Member& m1,
		Member& m2) {
		return m1.last_n < m2.last_n;
	}
	friend bool operator == (Member& m1, Member& m2)
	{
		return m1.last_n == m2.last_n;
	}
};


int main()
{
	list<Member> li1;
	li1.push_back(Member("Linda", "Smith")); //push_back: list 끝에 새로운 데이터를 추가한다.
	li1.push_back(Member("Robert", "Frost"));
	li1.push_back(Member("Alex", "Amstrong"));
	list<Member> li2;
	li2.push_back(Member("Linda", "Smith"));
	li2.push_back(Member("John", "Wood"));
	li2.push_back(Member("Alex", "Amstrong"));
	
	li1.sort(); //컨테이너 내의 모든 데이터들을 오름차순으로 정렬
	li2.sort();
	li1.merge(li2); // 두  list를 병합

	cout << "li1 after sorting and mergin"<< endl;
	list<Member>::iterator it = li1.begin(); //iterator(반복자): STL 컨테이너 원소에 접근하는 포인터와 비슷한 역할
	while (it != li1.end()) (it++)->print();

	li1.unique(); //컨테이너 내의 중복되는 모든 데이터를 삭제 

	cout << "After li1.unique()" << endl;
	it = li1.begin();
	while (it != li1.end()) (it++)->print();
	return 0;
}



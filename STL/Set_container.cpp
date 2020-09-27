#include <iostream>
#include <iomanip>
#include <string>
#include <set> //트리 구조, 정렬이 필요할 때 사용, 검색 시간이 빠르다.

using namespace std;


class Member
{
public:
	Member(string l, string f) : last(l), first(f) {}
	void print() const
	{
		cout.setf(ios::left); //set flag의 줄임말로 형식을 지정해주는 멤버함수, 왼쪽정렬.
		cout << setw(15) << first << " " << last << endl;
	}
private:
	string first, last;
	friend bool operator <
		(const Member& m1, const Member& m2)
	{
		return (m1.last < m2.last) ? true : false;
	}
	friend bool operator ==
		(const Member& m1, const Member& m2)
	{
		return (m1.last == m2.last) ? true : false;
	}
};

int main()
{
	typedef Member M;
	typedef set<M> S; //template 데이터형도 typedef로 정의해줄 수 있다.
	M m("Frost", "Robert");
	S s;
	s.insert(m);
	s.insert(M("Smith", "John"));
	s.insert(M("Amstrong", "Bill"));
	s.insert(M("Bain", "Linda"));
	s.insert(M("Amstrong", "Bill")); //두 번째 입력과 동일
	/* 기존에 존재하는 값들과 비교하여, 동일한 값이 이미 존재
	할 경우 값을 추가하지 않는다. 이 동작은 operator ==를
	통해 이루어진다. */

	S::iterator it = s.begin();

	while (it != s.end())
		(it++)->print();

	it = s.find(m);
	if (it == s.end())
		cout << "element not found" << endl;
	else
	{
		cout << "element is found : ";
		(*it).print();
	}
	return 0;
}

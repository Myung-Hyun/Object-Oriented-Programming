#include <iostream>
#include <map>  //(key, data) 쌍, 트리 구조, 빠른 검색이 필요하고 삽입과 삭제가 적은 경우.
#include <string>

using namespace std;


int main()
{
	map<string, string> dictionary;
	string searchWord;
	

	//(1) operator [] 를 이용한 입력 : overwrite 가능
	dictionary["horse"] = "말";
	dictionary["apple"] = "사과";

	//(2) insert 메소드를 이용한 입력 : overwrite 불가, 즉 grape에 다른 data 넣어도 바뀌지 않는다.
	dictionary.insert(pair<string, string>("grape", "포도"));
	dictionary.insert(pair<string, string>("orange", "오렌지"));

	// 영어 단어를 이용한 검색
	cout << "검색하고자 하는 영어 단어를 입력하세요 : ";
	cin >> searchWord;
	if (!dictionary[searchWord].empty())
	{
		cout << "단어를 찾았습니다." << endl;
		cout << searchWord << " : " << dictionary[searchWord] << endl;
	}
	else
	{
		cout << "검색된 단어가 없습니다." << endl;
	}


	map<string, string>::iterator it;
	it = dictionary.find(searchWord);
	if (!(*it).second.empty())
	{
		cout << "단어를 찾았습니다." << endl;
		cout << (*it).first << " : " << (*it).second << endl; //first(멤버)를 통해 key에 접근, second를 통해 data에 접근 가능하다. 
	}
	else
	{
		cout << "검색된 단어가 없습니다." << endl;
	}

	return 0;
}
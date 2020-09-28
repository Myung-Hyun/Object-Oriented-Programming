#include <iostream>
#include <map>  //(key, data) ��, Ʈ�� ����, ���� �˻��� �ʿ��ϰ� ���԰� ������ ���� ���.
#include <string>

using namespace std;


int main()
{
	map<string, string> dictionary;
	string searchWord;
	

	//(1) operator [] �� �̿��� �Է� : overwrite ����
	dictionary["horse"] = "��";
	dictionary["apple"] = "���";

	//(2) insert �޼ҵ带 �̿��� �Է� : overwrite �Ұ�, �� grape�� �ٸ� data �־ �ٲ��� �ʴ´�.
	dictionary.insert(pair<string, string>("grape", "����"));
	dictionary.insert(pair<string, string>("orange", "������"));

	// ���� �ܾ �̿��� �˻�
	cout << "�˻��ϰ��� �ϴ� ���� �ܾ �Է��ϼ��� : ";
	cin >> searchWord;
	if (!dictionary[searchWord].empty())
	{
		cout << "�ܾ ã�ҽ��ϴ�." << endl;
		cout << searchWord << " : " << dictionary[searchWord] << endl;
	}
	else
	{
		cout << "�˻��� �ܾ �����ϴ�." << endl;
	}


	map<string, string>::iterator it;
	it = dictionary.find(searchWord);
	if (!(*it).second.empty())
	{
		cout << "�ܾ ã�ҽ��ϴ�." << endl;
		cout << (*it).first << " : " << (*it).second << endl; //first(���)�� ���� key�� ����, second�� ���� data�� ���� �����ϴ�. 
	}
	else
	{
		cout << "�˻��� �ܾ �����ϴ�." << endl;
	}

	return 0;
}
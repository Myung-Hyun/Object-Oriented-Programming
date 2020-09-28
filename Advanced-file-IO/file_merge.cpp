#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string file1, file2;

	cout << "This program appends two files." << endl;
	cout << "Please enter file name of primary file: ";
	cin >> file1;

	ofstream fsAp;
	//file1을 출력모드로 열어준다.
	fsAp.open(file1.c_str(), ios::out | ios::app | ios::binary); //c_str()는 file1 첫 번째 문자의 주소값(포인터)를 반환한다.
	if(!fsAp)
	{
		cerr << "Can't open " << file1 << endl;
		exit(100);
	}	

	fsAp.seekp(0, ios::end); //파일 내 위치를 맨 끝으로 이동, 중간에서 내용을 출력하면 그만큼 대체되기 때문에.

	cout << "Please enter file name of the second file: ";
	cin >> file2;

	ifstream fsIn;
	fsIn.open(file2.c_str(), ios::in | ios::binary);
	if(!fsIn)
	{
		cerr << "Can't open " << file2 << endl;
		exit(110);
	}

	long apndCnt = 0;
	char inChar[1];
	while(fsIn.read((char*)inChar, 1)) //file2에서 읽어오는 대로 file1 끝에 쓴다.
	{
		fsAp.write(inChar, 1);
		apndCnt++;
	}

	fsAp.close();
	fsIn.close();

	cout << "Append complete: " << apndCnt << " appended to file" << endl;
	return 0;
}

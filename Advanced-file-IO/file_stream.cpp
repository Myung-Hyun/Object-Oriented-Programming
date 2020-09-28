#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	// Output File Stream 예제
	ofstream fsOut;
	fsOut.open("LAB13_01.dat", ios::out | ios::binary);
	if(!fsOut)
	{
		cerr << "Output file open failure\a\n"; //에러 출력 구분, cf) clog: 로그 출력
		exit(100);
	}
	for(int data=1; data<=30; data++)
		fsOut.write((char*)&data, sizeof(int)); //(char*) 형변환 해주는 것.
	fsOut.close();

	// Input File Stream 예제
	ifstream fsIn("LAB13_01.dat", ios::in | ios::binary);
	if(!fsIn)
	{
		cerr << "Input file open failure\a\n";
		exit(100);
	}

	// 데이터를 항목 하나씩 읽어서 console에 출력
	int tempInt[1];
	cout << "데이터를 항목 하나씩 읽은 경우: " << endl;
	while(fsIn.read((char*)tempInt, sizeof(int)))  //read()함수 사용하면 문자 끝까지 읽는다. 읽을 문자 없으면 false를 return한다.
	{
		cout << tempInt[0] << endl;
	}
	cout << endl;
	fsIn.close();	
	
	return 0;
}



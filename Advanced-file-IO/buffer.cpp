#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	// Output File Stream 예제
	ofstream fsOut;
	fsOut.open("LAB13_02.dat", ios::out | ios::binary);
	if(!fsOut)
	{
		cerr << "Output file open failure\a\n";
		exit(100);
	}
	for(int data=1; data<=30; data++)
		fsOut.write((char*)&data, sizeof(int));
	fsOut.close();
	
	// Input File Stream 예제
	fstream fs("LAB13_02.dat", ios::in | ios::binary);
	if(!fs)
	{
		cerr << "Input file open failure\a\n";
		exit(100);
	}

	// 데이터를 항목에 주어진 버퍼 크기만큼 읽어서 출력
	int intAry[10]; //버퍼
	cout << "데이터를 한번에 버퍼 크키만큼 읽은 경우: " << endl;
	while(fs.read((char*)intAry, 10*sizeof(int))) //int크기 10배만큼의 데이터 읽어온다. 한 번 읽을 때, intAry[10]에 저장.
	{
		int numRead;
		numRead = fs.gcount() / sizeof(int); //(txt의 경우) gcount는 읽어드린 문자의 개수를 return한다. binary file이라 sizeof(int)로 나눠준다. numRead는 10
		
		for(int i=0; i<numRead; i++)
			cout << intAry[i] << " " ;
		cout << endl;
	}
	fs.close();
	
	return 0;
}


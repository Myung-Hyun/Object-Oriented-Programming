#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//text file, block 단위로 입출력.

int main()
{
	ofstream fsOut;
	fsOut.open("LAB13_03.txt");
	if(!fsOut)
	{
		cerr << "Output file open failure\a\n";
		exit(100);
	}
	fsOut << "0123456789abcdefghijABCDEFGHIJ!@#$%^&*()" << endl;	
	fsOut.close();


	ifstream fsIn;
	fsIn.open("LAB13_03.txt");
	if(!fsIn)
	{
		cerr << "Input file open failure\a\n";
		exit(100);
	}

	char charAry[10]; //블록 단위가 10. 
	while(fsIn.read(charAry, 10)) //while문 한 번 돌 때, 10개 읽어오고
	{		
		int numRead;
		numRead = fsIn.gcount(); //gcount는 읽은 문자의 개수

		for(int i=0; i<numRead; i++)//for문 10번 돌면서 읽어온만큼 출력.
			cout << charAry[i];
		cout << endl;
	}
	cout << endl;
	return 0;
}


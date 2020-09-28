
#include <fstream>
using namespace std;

//.txt .bin 파일을 생성하고 메모장과 Hex editor로 열어본다.

int main()
{
	int aInt = 768;
	char aChar = 'A';

	// text file 생성, ASCII 코드
	ofstream fsTextOut("data.txt"); // text mode
	fsTextOut << aInt << aChar;
	fsTextOut.close();
	
	// binary file 생성, 16진수 
	ofstream fsBinOut("data.bin", ios::out|ios::binary); // binary mode
	fsBinOut.write((char*)&aInt, sizeof(int));
	fsBinOut.write(&aChar, sizeof(char));
	fsBinOut.close();

	return 0;
}

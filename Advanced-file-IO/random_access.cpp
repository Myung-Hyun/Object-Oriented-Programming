#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void buildFile(fstream& fsData); //binary 파일 생성
void printFile(fstream& fsData); // 순서대로 출력
void randomPrint(fstream& fsData); // 임의의 위치 출력

int main()
{
	fstream fsData; //ofstream, ifsteram 상속관계 알아야 한다.
	buildFile(fsData);
	printFile(fsData);
	randomPrint(fsData);
	return 0;
}

void buildFile(fstream& fsData)
{
	//trunc: 오픈하고자 하는 파일이 이미 있는경우, 기존의 파일을 삭제하고 다시 만듬
	fsData.open("LAB13_06.dat", ios::in | ios::out | ios::trunc | ios::binary); 

	if(!fsData)
	{
		cerr << "Error opening file for writing" << endl;
		exit(100);
	}

	for(int i=1; i<=10; i++)
	{
		int data;
		data = i * i;
		fsData.write((char*)&data, sizeof(int));
	}
}

void printFile(fstream& fsData)
{
	cout << "File contents in sequential order." << endl;

	//seekg는 입력위치 지정자를 위치시키는 함수이다. beg(시작위치) cur(현재위치) end(파일의 끝)에서 부터 0L만큼 떨어진 곳에 위치시킨다.
	fsData.seekg(0L, ios::beg); //0L은 long 데이터형을 갖고 모든 bit가 0인 값이다.
	int data;
	int recNum = 0;

	while(fsData.read((char*)&data, sizeof(int)))
		cout << "Record " << setw(4) << recNum++ << " ==> " << setw(4) << data << endl;

	fsData.clear(); //오류 상태 플래그 값을 보존하지 않는다.
}

void randomPrint(fstream& fsData)
{
	cout << "\nFile contents in random sequence." << endl;

	int data;
	int randSeek;
	for(int i=0; i<10; i++) //무조건 10번만 돌고 중복되는 경우가 존재.
	{
		randSeek = (rand() % 10); //seed를 똑같이 주기 때문에 결과는 계속 같다.
		fsData.seekg(sizeof(int) * randSeek, ios::beg);
		fsData.read((char*)&data, sizeof(int));

		cout << "Record " << setw(4) << randSeek << " ==> " << setw(4) << data << endl;
	}
	fsData.close();
}

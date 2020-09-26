
#include <iostream>
#include <iomanip>
using namespace std;

template <class TYPE>
class smartAry //다양한 자료형 배열을 위한 template class
{
private:
	TYPE* m_ptr;
	int arySize;

public:
	smartAry(int size);
	~smartAry() { delete [] m_ptr;}
	int GetSize(){ return arySize; }

	TYPE& operator[] (int idx ) //[]연산자 overloading
	{
		return m_ptr[idx];
	}
};

template <class TYPE>
smartAry<TYPE>::smartAry(int size)
{
	m_ptr = new TYPE[size];
	arySize = size;
}

void main()
{
	smartAry<int> arr1(4); //template class의 TYPE은 선언할 때 정해준다. 
	arr1[0] = 1; arr1[1] = 4;
	for(int i=0; i<arr1.GetSize(); i++)
		cout << arr1[i] << endl;

	smartAry<double> arr2(4);
	arr2[0] = 5.5; arr2[3] = 3.14;

	for(int i=0; i<arr2.GetSize(); i++)
		cout << arr2[i] << endl;
}

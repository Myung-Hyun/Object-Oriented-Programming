#include <iostream>
#include <iomanip>
using namespace std;

template <class TYPE>
class smartAry
{
public:
	TYPE* m_ptr;
	int arySize;

public:
	smartAry(int size);
	~smartAry() { delete [] m_ptr;}
	int GetSize(){ return arySize; }

	TYPE& operator[] (int idx )
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


template <class TYPE>
class MArray : public smartAry<TYPE> //class가 template class를 상속받으면서, TYPE을 같은 방식으로 사용. 
{
private:
	int nextUnusedIdx;

public:
	MArray(int size);
	void addElem(TYPE data);
	TYPE retrieve(int idx) const;
	void find(TYPE data) const;
	bool isFull() const;
	template <class TYPE> friend void aryPrint(MArray<TYPE>& arr); //friend 함수. 위의 TYPE과 별개로 해주기 위해??
};

template <class TYPE>
MArray<TYPE>::MArray(int size) : smartAry(size)
{
	nextUnusedIdx = 0;
}

template <class TYPE>
TYPE MArray<TYPE>::retrieve(int idx) const
{
	if( idx < 0 || idx >= nextUnusedIdx ){
		cout << "Error 101:index out of range";
		exit(101);
	}
	return m_ptr[idx];
}

template <class TYPE>
void MArray<TYPE>::addElem(TYPE data)
{
	if(arySize > nextUnusedIdx)
	{
		m_ptr[nextUnusedIdx] = data;
		nextUnusedIdx++;
	}else{
		cout << "Error : Array overflow" << endl;
		exit(100);
	}
}

template <class TYPE>
bool MArray<TYPE>::isFull() const
{
	return (nextUnusedIdx == arySize);
}

template <class TYPE>
void MArray<TYPE>::find(TYPE data) const{
	int idx = 0;
	bool found = false;
	while( !found && idx < nextUnusedIdx )
	{
		if(m_ptr[idx] == data)
			found = true;
		else
			idx++;
	}
	if(found)
		cout << "SUCCESS! Input " << data << " : index [" << idx<< "]" << endl;
	else
		cout << "FAIL! Input " << data << " : Can not find" << endl;
}


template <class TYPE>
void aryPrint(MArray<TYPE>& arr)
{
	for( int i=0; i < arr.GetSize(); i++ )
		cout << setw(3) << "[" << i << "]" << arr.retrieve(i);
	cout << endl;
}


void main()
{
	MArray<int> arr1(4);
	for(int i=0; i<arr1.GetSize(); i++)
		arr1.addElem(i*5);	
	aryPrint(arr1);
	arr1.find(10);
	cout << "Value at location 3 is : " << arr1.retrieve(3) << endl;

	MArray<double> arr2(4);
	for(int i=0; i<arr2.GetSize(); i++)
		arr2.addElem((i+1)*3.14);
	aryPrint(arr2);
	arr2.find(9.41);
	arr2.addElem(1.15);
}

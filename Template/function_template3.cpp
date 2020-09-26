#include <iostream>
using namespace std;

template <class TYPE, class KEY>
int search (TYPE arr[], KEY key, int size) //TYPE에 구조체로 정의한 데이터 형도 가능.
{
	int index = 0;
	while ( index < size )
	{
		if ( key != arr[index].key )
			index++;
		else //else문 괄호로 안 묶으면 에러난다. 
		{
			return index;
		}
	}
	return -1;
}

struct sBox {
	int key;
	int age;
	float salary;
};

void main()
{
	sBox arr[3] = { {5, 32, 3.23f}, {2, 48, 5.18f}, {7, 60, 6.01f} };

	int idx = search(arr, 2, 3); //key=2인 경우를 찾아라. 
	

	if( idx >= 0 ){
		cout << "Key : " << arr[idx].key << endl;
		cout << "Age : " << arr[idx].age << endl;
		cout << "Salary : " << arr[idx].salary << endl;
		cout << "found at location : " << idx << endl;
	}else{
		cout << "Can not find" << endl;
	}
}

#include <iostream>
using namespace std;

//혼합된 매개변수를 이용하는 템플릿 함수.
template<class TYPE>
TYPE biggest (TYPE arr[], int arr_size);

void main()
{
	int ary1[4] = {10, 7, 11, 24};
	cout << "Biggest Value is " << biggest(ary1, 4) << endl;

	float ary2[4] = {3.5f, 1.12f, 3.14f, 0.25f};
	cout << "Biggest Value is " << biggest(ary2, 4) << endl;
}

template<class TYPE>
TYPE biggest (TYPE arr[], int arr_size)
{
	TYPE biggestVal = arr[0];
	for( int idx = 0; idx < arr_size; idx++ )
	{
		if( arr[idx] > biggestVal )
			biggestVal = arr[idx];
	}
	return biggestVal;
}

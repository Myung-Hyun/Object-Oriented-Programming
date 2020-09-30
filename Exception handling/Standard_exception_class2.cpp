#include <iostream>
#include <new>
using namespace std ;


int main()
{
	cout << "Demonstrate memory allocation failure\n" ;

	try 
	{
		for( int count = 0 ;  ; count++ ) //for문 무한히 돈다.
		{
			double * Arr = new double[1024*1024*10] ; //new에서 throw, 10*2^20=10MB
			cout << "count " << count 
				<< "Memory allocated successfully\n" ; //23번까지 메모리할당되는 것 확인했다. 즉 프로그램에 230MB까지 메모리 할당한다.
		}
	}
	catch( exception & err )
	{
		cerr << "** Enter 100 : Program out of memory\n **"
			<< err.what() << endl ;
	}
	cout << "End of exceptions tests\n" ;

	return 0 ;
}

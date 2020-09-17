#include < iostream >

using namespace std ;


class Rectangle
{
private :
	int m_nWidth ;
	int m_nHeight ;
public :
	Rectangle() : m_nWidth(0), m_nHeight(0) {} ; //초기화 리스트
	Rectangle( int nWidth, int nHeight ) : m_nWidth(nWidth), m_nHeight(nHeight) {} ;
	void Store( int nWidth, int nHeight )
	{ 
		m_nWidth = nWidth;
		m_nHeight = nHeight; 
	} ;
	void PrintArea() 
	{ 
		cout << "Area = " << m_nWidth * m_nHeight << endl ; 
	} ;
} ;

void main()
{
	Rectangle arr[3] = { Rectangle(3,5), Rectangle(2,2),  } ; //객체 배열 초기화, 생성자로 
	arr[2].Store( 5, 5 ) ;
	for( int i = 0 ; i < 3 ; i++ )
	{
		cout << i << " : " ;
		arr[i].PrintArea() ;
	}

}

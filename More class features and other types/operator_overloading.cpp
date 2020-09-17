#include <iostream>
using namespace std ;

class Fraction
{
private :
	int numerator ;
	int denominator ;
public :
	Fraction( int num, int denom ) ;
	Fraction() ;
	void print( void ) ;

	const Fraction & operator++ () ;  //전위증가
	const Fraction operator++ ( int ) ; //후위증가, int는 구분하기 위해 
	void operator += ( const Fraction & fr2 ) ; //이항증가 연산자
	Fraction & operator = ( const Fraction & fr ) ; //대입 연산자
	
	int greatestComDiv( int n1, int n2 ) ;
	
	Fraction operator+( Fraction & right ) ;
	Fraction operator-( Fraction & right ) ;
	Fraction operator*( Fraction & right ) ;
	Fraction operator/( Fraction & right ) ;
} ;

int Fraction::greatestComDiv( int n1, int n2 ) 
{
	if( n2 == 0 ) 
		return n1 ;
	else
		return greatestComDiv( n2, n1 % n2 ) ;
}
Fraction ::Fraction() 
{

}
Fraction::Fraction( int num, int denom ) 
{
	numerator = num ;
	denominator = denom ;
	int gcd = greatestComDiv( numerator, denominator )  ;
	numerator = numerator / gcd ;
	denominator = denominator / gcd ;
}

void Fraction::print() 
{
	cout << numerator << "/" << denominator << endl ;
}

const Fraction & Fraction::operator++ ()
{
	numerator += denominator ;
	return *this ;
}
const Fraction Fraction::operator++ ( int )
{
	const Fraction saveObject(*this) ;
	numerator += denominator ;
	return saveObject ;

}

void Fraction::operator += ( const Fraction & fr2 )
{
	numerator = ( numerator * fr2.denominator ) + ( fr2.numerator * denominator ) ;
	denominator *= fr2.denominator ;
	*this = Fraction ( numerator, denominator ) ;
	return ;

}

Fraction & Fraction::operator = ( const Fraction & fr )
{
	numerator = fr.numerator ;
	denominator = fr.denominator ;
	return * this ;
}

Fraction Fraction::operator+( Fraction & fr ) 
{
	Fraction newFr( *this ) ;

	newFr.numerator = ( newFr.numerator * fr.denominator ) + ( fr.numerator * newFr.denominator ) ;
	newFr.denominator = newFr.denominator * fr.denominator ;
	

	return newFr ;
}

Fraction Fraction::operator-( Fraction & fr ) 
{
	Fraction newFr( *this ) ;

	newFr.numerator = ( newFr.numerator * fr.denominator ) - ( fr.numerator * newFr.denominator ) ;
	newFr.denominator = newFr.denominator * fr.denominator ;
	

	return newFr ;
}

Fraction Fraction::operator*( Fraction & fr ) 
{
	Fraction newFr( *this ) ;

	newFr.numerator = newFr.numerator * fr.numerator ;
	newFr.denominator = newFr.denominator * fr.denominator ;
	

	return newFr ;
}

Fraction Fraction::operator/( Fraction & fr ) 
{
	Fraction newFr( *this ) ;

	newFr.numerator = newFr.numerator * fr.denominator ;
	newFr.denominator = newFr.denominator * fr.numerator ;
	

	return newFr ;
}



int main()
{
	Fraction fr1( 3, 5 ) ;
	Fraction fr2( 7, 10 ) ;
	Fraction fr3 ;
	fr3 = fr1 + fr2 ;
	cout << "value of fr3 after fr3 = fr1 + fr2 operation : " ;
	fr3.print()  ;
	 fr3 = fr1 - fr2 ;
	cout << "value of fr3 after fr3 = fr1 - fr2 operation : ";
	fr3.print()  ;
	 fr3 = fr1 * fr2 ;
	cout << "value of fr3 after fr3 = fr1 * fr2 operation : " ;
	fr3.print()  ;
	 fr3 = fr1 / fr2 ;
	cout << "value of fr3 after fr3 = fr1 / fr2 operation : ";
	fr3.print()  ;
	return 0 ;

}

//  �ǽ� �н� ��ǥ
//
//-	����Ʈ ���� ��Ÿ���� SmartPhone Ŭ������ �����϶�. 
//-	main()���� TomPhone�� ��iOS5.1��, 32GB��, myPhone�� ��IceCreamSandwich4.0��, 64GB�� �����ϰ� �� ��ü�� ȭ�鿡 ����ϴ� ������ ��� ����.


class CSmartPhone
{
public:
	char m_strName[20]; //20byte ũ���� �ü�� �̸�
	int  m_nMemorySize; //�޸� ũ��

private: //main �Լ����� ���� ���ϰ� ��� �Լ� �������� ��� ����.
	void initName( void );
	void CopyName( char* pName );

public:// ������ �̸�: �Ľ�Į ǥ���
	CSmartPhone( void );
	CSmartPhone( char* pName, int nMemorySize );

public:// �Լ� �̸�: camel ǥ���
	void changeMemSize( int   nMemorySize ); //�޸� ũ�� ����
	void changeOSName ( char* pName       ); //�ü�� �̸� ����
	void print        ( void              ) const; //����Ʈ�� ���� ���
};
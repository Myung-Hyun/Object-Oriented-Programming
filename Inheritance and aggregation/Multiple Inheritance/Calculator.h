#include "Add.h"
#include "Subtract.h"

class Calculator : public Add, public Subtract //���� ���
{
public:
	Calculator(double val1, double val2);
};
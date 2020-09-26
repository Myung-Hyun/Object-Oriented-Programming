#include "Add.h"
#include "Subtract.h"

class Calculator : public Add, public Subtract //다중 상속
{
public:
	Calculator(double val1, double val2);
};

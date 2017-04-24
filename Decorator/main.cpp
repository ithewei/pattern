#include "stdafx.h"
#include "Decorator.h"

int _tmain(int argc, _TCHAR* argv[])
{
	IOrigin* pOrigi = new CDecorator(new COrigin);
	pOrigi->Test();
	getchar();
	return 0;
}

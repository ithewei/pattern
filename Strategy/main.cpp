#include "stdafx.h"
#include "Strategy.h"

int _tmain(int argc, _TCHAR* argv[])
{
	ITarget* pTarA = new CTarget(new CStrategyA);
	pTarA->Test();
	ITarget* pTarB = new CTarget(new CStrategyB);
	pTarB->Test();

	getchar();
	return 0;
}
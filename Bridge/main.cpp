#include "stdafx.h"
#include "Bridge.h"

int _tmain(int argc, _TCHAR* argv[])
{
	IAbstract* pA = new CAbstract(new CImplA);
	pA->Test();
	IAbstract* pB = new CAbstract(new CImplB);
	pB->Test();

	getchar();
	return 0;
}
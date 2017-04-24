#include "stdafx.h"
#include "Facade.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CFacade* pFacade = new CFacade;
	pFacade->Test();
	delete pFacade;
	getchar();
	return 0;
}


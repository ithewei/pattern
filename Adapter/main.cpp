#include "stdafx.h"
#include "Adapter.h"

int _tmain(int argc, _TCHAR* argv[])
{
	ITarget* pTarget = new CTarget;
	pTarget->Request();
	getchar();
	return 0;
}
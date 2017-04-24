#include "stdafx.h"
#include "Composite.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CComposite com;
	com.Add(new CElementA);
	com.Add(new CElementB);
	com.Test();
	getchar();
	com.RemoveAll();
	com.Test();
	getchar();
	return 0;
}
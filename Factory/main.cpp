#include "stdafx.h"
#include "Factory.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CFactory::CreateProduct(EPRODUCT_TYPE_TA)->Test();
	CFactory::CreateProduct(EPRODUCT_TYPE_TB)->Test();
	getchar();
	return 0;
}
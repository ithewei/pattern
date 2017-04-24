#include "stdafx.h"
#include "Singleton.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CSingleton::Instance()->Test();
	CSingleton::ExitInstance();
	getchar();
	return 0;
}
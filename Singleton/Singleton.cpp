#include "stdafx.h"
#include "Singleton.h"

CSingleton* CSingleton::sm_pSingleton = NULL;

CSingleton* CSingleton::Instance()
{
	if (sm_pSingleton == NULL)
	{
		sm_pSingleton = new CSingleton;
	}
	return sm_pSingleton;
}

void CSingleton::ExitInstance()
{
	if (sm_pSingleton)
	{
		delete sm_pSingleton;
		sm_pSingleton = NULL;
	}
}
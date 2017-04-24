#include "stdafx.h"
#include "Template.h"

int _tmain(int argc, _TCHAR* argv[])
{
	ITemplate* pTemA = new CTemplateA;
	pTemA->Test();
	ITemplate* pTemB = new CTemplateB;
	pTemB->Test();

	delete pTemA;
	delete pTemB;

	getchar();

	return 0;
}
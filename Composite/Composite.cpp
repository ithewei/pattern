#include "stdafx.h"
#include "Composite.h"

CComposite::CComposite()
{

}

CComposite::~CComposite()
{
	RemoveAll();
}


void CComposite::Add(IElement* pElem)
{
	m_vecElem.push_back(pElem);
}

void CComposite::Remove(IElement* pElem)
{
	vector<IElement*>::iterator iter = m_vecElem.begin();
	while (iter != m_vecElem.end())
	{
		if (*iter == pElem)
		{
			delete pElem;
			m_vecElem.erase(iter);
			return;
		}
		iter++;
	}
}

void CComposite::RemoveAll()
{
	for (unsigned int i = 0; i < m_vecElem.size(); i++)
	{
		delete m_vecElem[i];
	}
	m_vecElem.clear();
}

IElement* CComposite::GetChild(int nIndex)
{
	return m_vecElem[nIndex];
}

void CComposite::Test()
{
	for (unsigned int i = 0; i < m_vecElem.size(); i++)
	{
		m_vecElem[i]->Test();
	}
}


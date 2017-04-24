#ifndef __COMPOSITE_H__
#define __COMPOSITE_H__

#include <vector>
using namespace std;

class IElement
{
protected:
	IElement() {}
public:
	virtual ~IElement() {}
	
public:
	virtual void Test() = 0;
};

class CElementA : public IElement
{
public:
	CElementA() {}
	~CElementA() {}

public:
	void Test() {printf("CElementA::Test()\n");}
};

class CElementB : public IElement
{
public:
	CElementB() {}
	~CElementB() {}

public:
	void Test() {printf("CElementB::Test()\n");}
};

class CComposite
{
public:
	CComposite();
	~CComposite();

public:
	void Add(IElement* pElem);
	void Remove(IElement* pElem);
	void RemoveAll();
	IElement* GetChild(int nIndex);

public:
	void Test();

private:
	vector<IElement*> m_vecElem; // 如用于多线程中请自行加锁
};

#endif // __COMPOSITE_H__
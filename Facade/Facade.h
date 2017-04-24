#ifndef __FACADE_H__
#define __FACADE_H__

class CSubSystem1
{
public:
	CSubSystem1() {}
	~CSubSystem1() {}

public:
	void Test1() {printf("CSubSystem1::Test1()\n");}
};

class CSubSystem2
{
public:
	CSubSystem2() {}
	~CSubSystem2() {}

public:
	void Test2() {printf("CSubSystem2::Test2()\n");}
};

class CFacade
{
public:
	CFacade() {m_pSub1 = new CSubSystem1; m_pSub2 = new CSubSystem2;}
	~CFacade() {delete m_pSub1; delete m_pSub2;}

public:
	void Test() {m_pSub1->Test1(); m_pSub2->Test2();}

private:
	CSubSystem1* m_pSub1;
	CSubSystem2* m_pSub2;
};

#endif // __FACADE_H__
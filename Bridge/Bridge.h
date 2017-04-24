#ifndef __BRIDGE_H__
#define __BRIDGE_H__

class IImpl
{
protected:
	IImpl() {}
	virtual ~IImpl() {}

public:
	virtual void TestImpl() = 0;
};

class CImplA : public IImpl
{
public:
	CImplA() {}
	~CImplA() {}

public:
	void TestImpl() {printf("CImplA::TestImpl()\n");}
};

class CImplB : public IImpl
{
public:
	CImplB() {}
	~CImplB() {}

public:
	void TestImpl() {printf("CImplB::TestImpl()\n");}
};

class IAbstract
{
protected:
	IAbstract(IImpl* pImpl) {m_pImpl = pImpl;}
	virtual ~IAbstract() {}

public:
	virtual void Test() = 0;

protected:
	IImpl* m_pImpl;
};

class CAbstract : public IAbstract
{
public: 
	CAbstract(IImpl* pImpl) : IAbstract(pImpl) {}

public:
	void Test() {m_pImpl->TestImpl();}
};

#endif // __BRIDGE_H__
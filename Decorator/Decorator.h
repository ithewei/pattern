#ifndef __DECORATOR_H__
#define __DECORATOR_H__

class IOrigin
{
protected:
	IOrigin() {}
	virtual ~IOrigin() {}

public:
	virtual void Test() = 0;
};

class COrigin : public IOrigin
{
public:
	COrigin() {}
	~COrigin() {}

public:
	void Test() {printf("COrigi::Test()\n");}
};

class CDecorator : public IOrigin
{
public:
	CDecorator(IOrigin* pOrigin) {m_pOrigin = pOrigin;}
	~CDecorator() {}

public:
	void Test() {m_pOrigin->Test(); printf("Add new operation\n");}

private:
	IOrigin* m_pOrigin;
};

#endif // __DECORATOR_H__
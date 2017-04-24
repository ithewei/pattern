#ifndef __TEMPLATE_H__
#define __TEMPLATE_H__

class ITemplate
{
public:
	ITemplate() {}
	virtual ~ITemplate() {}

public:
	virtual void Test() = 0;
};

class CTemplate : public ITemplate
{
public:
	CTemplate() {}
	virtual ~CTemplate() {}

public:
	virtual void Test() {TestStep1(); TestStep2();}

protected:
	virtual void TestStep1() = 0;
	virtual void TestStep2() = 0;
};

class CTemplateA : public CTemplate
{
public:
	CTemplateA() {}
	~CTemplateA() {}

protected:
	virtual void TestStep1() {printf("CTemplateA::TestStep1()\n");}
	virtual void TestStep2() {printf("CTemplateA::TestStep2()\n");}
};

class CTemplateB : public CTemplate
{
public:
	CTemplateB() {}
	~CTemplateB() {}

protected:
	virtual void TestStep1() {printf("CTemplateB::TestStep1()\n");}
	virtual void TestStep2() {printf("CTemplateB::TestStep2()\n");}
};

#endif // __TEMPLATE_H__
#ifndef __STRATEGY_H__
#define __STRATEGY_H__

class IStrategy
{
public:
	IStrategy() {}
	virtual ~IStrategy() {}

public:
	virtual void TestStep1() = 0;
	virtual void TestStep2() = 0;
};

class CStrategyA : public IStrategy
{
public:
	CStrategyA() {}
	virtual ~CStrategyA() {}

public:
	virtual void TestStep1() {printf("CStrategyA::TestStep1()\n");}
	virtual void TestStep2() {printf("CStrategyA::TestStep2()\n");}
};

class CStrategyB : public IStrategy
{
public:
	CStrategyB() {}
	virtual ~CStrategyB() {}

public:
	virtual void TestStep1() {printf("CStrategyB::TestStep1()\n");}
	virtual void TestStep2() {printf("CStrategyB::TestStep2()\n");}
};



class ITarget
{
public:
	ITarget(IStrategy* pStrategy) {m_pStrategy = pStrategy;}
	virtual ~ITarget() {}

public:
	virtual void Test() = 0;

protected:
	IStrategy* m_pStrategy;
};

class CTarget : public ITarget
{
public:
	CTarget(IStrategy* pStrategy) : ITarget(pStrategy) {}
	~CTarget() {}

public:
	virtual void Test() {m_pStrategy->TestStep1(); m_pStrategy->TestStep2();}
};

#endif // __STRATEGY_H__
#ifndef __ADAPTER_H__
#define __ADAPTER_H__ 

class CThirdParty
{
public:
	CThirdParty() {}
	~CThirdParty() {}

public:
	void Realize() {printf("CThirdParty::Realize()\n");}
};

class ITarget
{
protected:
	ITarget() {}
	virtual ~ITarget() {}

public:
	virtual void Request() = 0;
};

class CTarget : public ITarget
{
public:
	CTarget() {}
	~CTarget() {}

	void Request() {m_cThrid.Realize();}

private:
	CThirdParty m_cThrid;
};

#endif // __ADAPTER_H__
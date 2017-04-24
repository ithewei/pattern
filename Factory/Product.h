#ifndef __PRODUCT_H__
#define __PRODUCT_H__

enum EPRODUCT_TYPE
{
	EPRODUCT_TYPE_TA,
	EPRODUCT_TYPE_TB,
};

class IProduct
{
protected:
	IProduct() {}
	virtual ~IProduct() {}

public:
	virtual void Test() = 0;
};

class CProductTA : public IProduct
{
public:
	CProductTA() {}
	~CProductTA() {}

public:
	void Test() {printf("CProductTA::Test()\n");}
};

class CProductTB : public IProduct
{
public:
	CProductTB() {}
	~CProductTB() {}

public:
	void Test() {printf("CProductTB::Test()\n");}
};
#endif // __PRODUCT_H__
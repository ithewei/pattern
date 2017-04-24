#ifndef __FACTORY_H__
#define __FACTORY_H__

#include "Product.h"

class CFactory
{
public:
	static IProduct* CreateProduct(EPRODUCT_TYPE eType)
	{
		switch (eType)
		{
		case EPRODUCT_TYPE_TA:
			return new CProductTA;
		case EPRODUCT_TYPE_TB:
			return new CProductTB;
		default:
			return NULL;
		}
	}
};

#endif // __FACTORY_H__
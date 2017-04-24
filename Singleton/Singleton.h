#ifndef __SINGLETON_H__
#define __SINGLETON_H__

class CSingleton
{
private:
	CSingleton() {}
	~CSingleton() {}
	static CSingleton* sm_pSingleton;

public:
	static CSingleton* Instance();
	static void ExitInstance();

public:
	void Test() {printf("CSingleton::Test()\n");}
};

#endif // __SINGLETON_H__
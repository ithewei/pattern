#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include <Windows.h>
#include <list>
using namespace std;

class IObserver
{
public:
	IObserver() {}
	~IObserver() {}

public:
	virtual void Update(WPARAM wParam, LPARAM lParam) = 0;
};

class CSubject
{
public:
	CSubject() {}
	virtual ~CSubject() {}

public:
	virtual void Attatch(IObserver* pObserver){
		m_lsObserver.push_back(pObserver);
	}
	virtual void Dettatch(IObserver* pObserver){
		m_lsObserver.remove(pObserver);
	}

	virtual void Notify(WPARAM wParam, LPARAM lParam){
		list<IObserver*>::iterator iter = m_lsObserver.begin();
		while (iter != m_lsObserver.end()){
			(*iter)->Update(wParam, lParam);
			iter++;
		}
	}

	list<IObserver*> m_lsObserver;
};

class CConcreteObserverA : public IObserver
{
public:
	void Update(WPARAM wParam, LPARAM lParam){
		printf("CConcreteObserverA:%d:%d\n", wParam, lParam);
	}
};

class CConcreteObserverB : public IObserver
{
public:
	void Update(WPARAM wParam, LPARAM lParam){
		printf("CConcreteObserverB:%d:%d\n", wParam, lParam);
	}
};

#endif // __OBSERVER_H__
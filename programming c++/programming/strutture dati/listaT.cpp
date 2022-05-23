#include <iostream>

using namespace std;

template<typename T>
class Nodo
{
	public:
	Nodo<T>*succ;
	T valore;
	
	Nodo(T value):succ(nullptr),valore(value){}
	
};


template<typename T>
class Lista
{
	Nodo<T>* testa;
	
	public:
	
	Lista(){testa=nullptr;}
	~Lista(){clear();}
	
	void clear()
	{
		Nodo<T>*iter=testa;
		while(iter!=nullptr)
		{
		Nodo<T>*tmp=iter;
		iter=iter->succ;
		delete tmp;
		}
		testa=nullptr;
	}
	
	void inserisci(int valore)
	{
		Nodo<T>*nuovo=new Nodo<T>(valore);
		if(testa==nullptr)
		{
			testa=nuovo;
			testa->succ=nullptr;
		}
		else
		{
			Nodo<T>*iter=testa;
			while(iter->succ!=nullptr)
				iter=iter->succ;
			iter->succ=nuovo;
		}
	}
	
	template<typename U>
	friend
	ostream&operator<<(ostream&os,Lista<U>&l)
	{
		Nodo<U>*iter=l.testa;
		while(iter!=nullptr)
		{
			os << iter->valore << " --> ";
        		iter=iter->succ;
		}
		os << "NULL";
		return os;
	}
};

int main()
{
	Lista<char> l;
	
	cout << endl;
	
	l.inserisci('A');
	l.inserisci('B');
	l.inserisci('a');
	
	cout << l << endl;
	
	l.~Lista();
}

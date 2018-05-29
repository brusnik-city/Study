#pragma once

#include <iostream>

//klasa szablonowa dynamicznej tablicy
template<typename T>
class DynArray
{
public:
//konstruktor ustawia rozmiar tablicy i rezerwuje pamiec
DynArray(int size):m_size(size)
{
	m_array = new T[size];
};

//konstruktor ustawia rozmiar tablicy, rezerwuje pamiec i przepisuje przeslana tablice
DynArray(int size,const T* array):m_size(size)
{
	m_array = new T[m_size];
	for(int i = 0; i < size; i++)
	{
		m_array[i] = array[i];
	}

};

//zwracanie rozmiaru
int size() const
{
	return m_size;
}

//zwracanie wartosci
T GetVal(int pos) const
{
	return m_array[pos]; 
}

//przeladowany operator [] zwraca poszczegolne el tablicy
T& operator [](int number)
{
	return m_array[number];
}

//zwracanie poczatku tablicy
T* begin() const
{
	return &(m_array[0]);
}

//zwracanie konca tablicy
T* end() const
{
	return &(m_array[m_size]);
}

//zaprzyjazniony operator << wypisujacy tablice
friend std::ostream& operator << (std::ostream& os,const DynArray<T>& array)
{
	
	//os << T;
	os<< "{\"";
	os<<array.GetVal(0);
	os<<"\"";
	for(int i = 1; i < array.size();i++)
	{
		os <<",\""<<array.GetVal(i)<<"\"";
	}
	os << "}";
	return os;
}

//destruktor
~DynArray()
{
	delete [] m_array;
}

//klasa zagniezdzona iterator
class Iterator
{
public:
	//konstruktor w ktorym iterator przyjmuje adres tablicy
	Iterator(T* adress):m_arrayAdress(adress){}

	//przeladowany operator ++ przesuwa wskaznik na nastepny element tablicy
	void operator++()
	{
		++m_arrayAdress;
	}

	//zwraca przechowywany adres
	operator T*()
	{
		return m_arrayAdress;
	}

	//zwraca wartosc pod adresem
	const T& operator *()
	{
		return *m_arrayAdress;
	}

	//sprawdza czy nie wyszlismy poza zakres
	bool operator !=(const T& object)
	{
		if(object !=m_arrayAdress)
		{
			return true;
		}
		else
		{
			return false;
		}

	}
	//zwraca *this
	Iterator* operator ->()
	{
		return this;
	}

	//dodaje parametr obj do elementu tablicy
	void append(const T& obj)
	{
		*m_arrayAdress +=obj;
	}


private:
	T* m_arrayAdress;

};



private:
	int m_size;
	T *m_array;
};




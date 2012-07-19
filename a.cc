#include <iostream>

using namespace std;

class Chocolate {

};
class Vallina {

};

template<class S>
class Oreo : public S {
	public:
		void LickOreo() { cout<<"Orea is great"<<endl; }
};
template<class M>
class Chips : public M {
	public:
		void LickChips() { cout<<"Chips is crunchy"<<endl; }
};
template<class T>
class Cherry : public T {
	public:
		void LickCherry() { cout<<"Cheery is Juicy"<<endl; }
};

typedef Oreo < Chips < Cherry < Vallina > > > MiHelado; 
int main()
{
	Oreo < Chocolate > OreaChocolateIceCream;
	Cherry < Chips < Chocolate > > CherryChipsChocolateIceCream;
	Oreo < Chips < Cherry < Vallina > > > OreoChipsCherryVallinaIceCream;
	OreoChipsCherryVallinaIceCream.LickCherry();
	OreoChipsCherryVallinaIceCream.LickChips();
	OreoChipsCherryVallinaIceCream.LickOreo();
	MiHelado helado;
	helado.LickOreo();
	// all so yummy!
	return 0;
}

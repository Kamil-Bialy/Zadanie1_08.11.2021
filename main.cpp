#include <iostream>

using namespace std;

class Przelicznik
{
	public:
		float metry, mile_angielskie, stopy_angielskie;
		void metryczka()
		{
			cout << "--------------------------------------" << endl;
			cout << "Imie i nazwisko autora: Kamil Bialy" << endl;
			cout << "Klasa: 3Cg" << endl;
			cout << "--------------------------------------\n\n" << endl;
		}
		
		void metryNaMile()
		{
			mile_angielskie = metry*0.000621371;
			cout << "Mile angielskie: " << mile_angielskie << "fml" << endl; 
		}
		
		void metryNaStopy()
		{
			stopy_angielskie = metry*3.28084;
			cout << "Stopy angielskie: " << stopy_angielskie << "ft" << endl; 
		}
		
		
};

int main() 
{
	
	Przelicznik p;
	p.metryczka();
	
	cout << "Podaj ile metrow chcesz przeliczyc na mile i stopy angielskie: " << endl;
	cin >> p.metry;
	
	p.metryNaMile();
	p.metryNaStopy();
	
	return 0;
}

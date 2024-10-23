#include <iostream>
#include <string>
using namespace std;

class rochie
{
public:
	string marime;
	string culoare;
	const int lungime;
	static int nrRochii;
	int* pret;

	rochie() : culoare("necunoscuta"), marime("m"), lungime(100)
	{
		pret = new int(100);
		nrRochii++;
	}

	rochie(string culoare, string marime) : culoare(culoare), marime(marime), lungime(100)
	{
		pret = new int(100);
		nrRochii++;
	}

	rochie(string culoare, string marime, int pretVal) :culoare(culoare), marime(marime), lungime(100)
	{
		pret = new int(pretVal);
		nrRochii++;
	}

	static void afisareNrRochii()
	{
		cout << "Numarul total de rochii:" << nrRochii << endl;
	}

	~rochie()
	{
		delete pret;
	}

};

int rochie::nrRochii = 0;

class geanta
{
public:
	string culoare;
	string tip;
	const int volum;
	static int nrGenti;
	int* pret;

	geanta() : culoare("necunoscuta"), tip("de mana"), volum(15)
	{
		pret = new int(150);
		nrGenti++;
	}

	geanta(string culoare, string tip) :culoare(culoare), tip(tip), volum(15)
	{
		pret = new int(150);
		nrGenti++;
	}

	geanta(string culoare, string tip, int pretVal) :culoare(culoare), tip(tip), volum(15)
	{
		pret = new int(pretVal);
		nrGenti++;
	}

	static void afisareNrGenti()
	{
		cout << "Numarul de genti este:" << nrGenti << endl;
	}

	~geanta()
	{
		delete pret;
	}

};

int geanta::nrGenti = 0;

class pantofi
{
public:
	string brand;
	int marime;
	const string material;
	static int nrPantofi;
	int* pret;

	pantofi() :brand("necunoscut"), marime(40), material("piele")
	{
		pret = new int(200);
		nrPantofi++;
	}

	pantofi(string brand, int marime) :brand(brand), marime(marime), material("piele")
	{
		pret = new int(200);
		nrPantofi++;
	}

	pantofi(string brand, int marime, int pretVal) :brand(brand), marime(marime), material("piele")
	{
		pret = new int(pretVal);
		nrPantofi++;
	}

	static void afisareNrPantofi()
	{
		cout << "Numarul de pantofi este:" << nrPantofi << endl;
	}

	~pantofi()
	{
		delete pret;
	}
};

int pantofi::nrPantofi = 0;

int main()
{
	rochie rochie1;
	rochie rochie2("rosie", "xs");
	rochie rochie3("albastru", "xl", 250);

	cout << "Rochie1:" << endl;
	cout << "Culoare:" << rochie1.culoare << endl;
	cout << "Marime:" << rochie1.marime << endl;
	cout << "Pret:" << *(rochie1.pret) << endl;

	cout << "Rochie2:" << endl;
	cout << "Culoare:" << rochie2.culoare << endl;
	cout << "Marime:" << rochie2.marime << endl;
	cout << "Pret:" << *(rochie2.pret) << endl;

	cout << "Rochie3:" << endl;
	cout << "Culoare:" << rochie3.culoare << endl;
	cout << "Marime:" << rochie3.marime << endl;
	cout << "Pret:" << *(rochie3.pret) << endl;

	rochie::afisareNrRochii();

	geanta geanta1;
	geanta geanta2("neagra", "de umar");
	geanta geanta3("maro", "ghiozan", 400);

	
	cout << "Geanta1:" << endl;
	cout << "Culoare:" << geanta1.culoare << endl;
	cout << "Tip:" << geanta1.tip << endl;
	cout << "Pret:" << *(geanta1.pret) << endl;

	cout << "Geanta2:" << endl;
	cout << "Culoare:" << geanta2.culoare << endl;
	cout << "Tip:" << geanta2.tip << endl;
	cout << "Pret:" << *(geanta2.pret) << endl;

	cout << "Geanta3:" << endl;
	cout << "Culoare:" << geanta3.culoare << endl;
	cout << "Tip:" << geanta3.tip << endl;
	cout << "Pret:" << *(geanta3.pret) << endl;

	geanta::afisareNrGenti();

	pantofi pantofi1;
	pantofi pantofi2("nike", 42);
	pantofi pantofi3("adidas", 38, 500);

	cout << "Pantofi1:" << endl;
	cout << "Brand:" << pantofi1.brand << endl;
	cout << "Marime:" << pantofi1.marime << endl;
	cout << "Pret:" << *(pantofi1.pret) << endl;

	cout << "Pantofi2:" << endl;
	cout << "Brand:" << pantofi2.brand << endl;
	cout << "Marime:" << pantofi2.marime << endl;
	cout << "Pret:" << *(pantofi2.pret) << endl;

	cout << "Pantofi3:" << endl;
	cout << "Brand:" << pantofi3.brand << endl;
	cout << "Marime:" << pantofi3.marime << endl;
	cout << "Pret:" << *(pantofi3.pret) << endl;

	pantofi::afisareNrPantofi();

	return 0;
}
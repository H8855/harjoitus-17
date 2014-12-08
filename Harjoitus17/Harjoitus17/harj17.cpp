#include <iostream>
using namespace std;

void main()
{
	
	struct HKL { char etu[20]; char suku[20]; char osoite[30]; int kenka; int posti; float matka; };
	HKL hkl1;
	HKL hkl2 = { "Matti", "Meikalainen", "Esimerkkikatu 12", 40, 43460, 55 };
	HKL hkl3 = { "Pekka", "Perusnimi", "Geneerinenkuja 47", 42, 12300, 3 };

	cout << "Anna kaikki etunimesi: ";
	cin.get(hkl1.etu, 20);
	cin.ignore(200, '\n');
	cout << "Anna kengannumero: ";
	cin >> hkl1.kenka;
	cin.ignore(200, '\n');
	cout << "Anna sukunimesi: ";
	cin.get(hkl1.suku, 20);
	cin.ignore(200, '\n');
	cout << "Anna koulumatka: ";
	cin >> hkl1.matka;
	cin.ignore(200, '\n');
	cout << "Anna osoitteesi: ";
	cin.get(hkl1.osoite, 30);
	cin.ignore(200, '\n');
	cout << "Anna postinumero: ";
	cin >> hkl1.posti;
	cin.ignore(200, '\n');
	

		cout << hkl1.suku << " " << hkl1.etu << endl;
		cout << hkl1.osoite << endl << hkl1.posti << endl;
		cout << hkl1.kenka << " " << hkl1.matka << endl << endl;

		if (hkl1.matka <= hkl2.matka)
		{
			if (hkl1.matka <= hkl3.matka)
			{
				cout << hkl1.suku << " " << hkl1.etu << endl;
				cout << hkl1.osoite << endl << hkl1.posti << endl;
				cout << hkl1.kenka << " " << hkl1.matka << endl << endl;
				if (hkl2.matka <= hkl3.matka)
				{
					cout << hkl2.suku << " " << hkl2.etu << endl;
					cout << hkl2.osoite << endl << hkl2.posti << endl;
					cout << hkl2.kenka << " " << hkl2.matka << endl << endl;

					cout << hkl3.suku << " " << hkl3.etu << endl;
					cout << hkl3.osoite << endl << hkl3.posti << endl;
					cout << hkl3.kenka << " " << hkl3.matka << endl << endl;
				}
				else
				{
					cout << hkl3.suku << " " << hkl3.etu << endl;
					cout << hkl3.osoite << endl << hkl3.posti << endl;
					cout << hkl3.kenka << " " << hkl3.matka << endl << endl;

					cout << hkl2.suku << " " << hkl2.etu << endl;
					cout << hkl2.osoite << endl << hkl2.posti << endl;
					cout << hkl2.kenka << " " << hkl2.matka << endl << endl;
				}

			}
			else
			{
				cout << hkl3.suku << " " << hkl3.etu << endl;
				cout << hkl3.osoite << endl << hkl3.posti << endl;
				cout << hkl3.kenka << " " << hkl3.matka << endl << endl;

				cout << hkl1.suku << " " << hkl1.etu << endl;
				cout << hkl1.osoite << endl << hkl1.posti << endl;
				cout << hkl1.kenka << " " << hkl1.matka << endl << endl;

				cout << hkl2.suku << " " << hkl2.etu << endl;
				cout << hkl2.osoite << endl << hkl2.posti << endl;
				cout << hkl2.kenka << " " << hkl2.matka << endl << endl;
			}
		}
		else
		{
			if (hkl1.matka <= hkl3.matka)
			{
				cout << hkl2.suku << " " << hkl2.etu << endl;
				cout << hkl2.osoite << endl << hkl2.posti << endl;
				cout << hkl2.kenka << " " << hkl2.matka << endl << endl;

				cout << hkl1.suku << " " << hkl1.etu << endl;
				cout << hkl1.osoite << endl << hkl1.posti << endl;
				cout << hkl1.kenka << " " << hkl1.matka << endl << endl;

				cout << hkl3.suku << " " << hkl3.etu << endl;
				cout << hkl3.osoite << endl << hkl3.posti << endl;
				cout << hkl3.kenka << " " << hkl3.matka << endl << endl;
			}
			else
			{
				if (hkl2.matka <= hkl3.matka)
				{
					cout << hkl2.suku << " " << hkl2.etu << endl;
					cout << hkl2.osoite << endl << hkl2.posti << endl;
					cout << hkl2.kenka << " " << hkl2.matka << endl << endl;

					cout << hkl3.suku << " " << hkl3.etu << endl;
					cout << hkl3.osoite << endl << hkl3.posti << endl;
					cout << hkl3.kenka << " " << hkl3.matka << endl << endl;
				}
				else
				{
					cout << hkl3.suku << " " << hkl3.etu << endl;
					cout << hkl3.osoite << endl << hkl3.posti << endl;
					cout << hkl3.kenka << " " << hkl3.matka << endl << endl;
						
					cout << hkl2.suku << " " << hkl2.etu << endl;
					cout << hkl2.osoite << endl << hkl2.posti << endl;
					cout << hkl2.kenka << " " << hkl2.matka << endl << endl;
				}
				cout << hkl1.suku << " " << hkl1.etu << endl;
				cout << hkl1.osoite << endl << hkl1.posti << endl;
				cout << hkl1.kenka << " " << hkl1.matka << endl << endl;
			}
		}
			
	

}

/*
	cout << hkl2.suku << " " << hkl2.etu << endl;
	cout << hkl2.osoite << endl << hkl2.posti << endl;
	cout << hkl2.kenka << " " << hkl2.matka;
*/


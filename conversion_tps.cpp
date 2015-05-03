/*-----------------------------------------------------
 OpenClassrooms : Cours Git & GitHub
 Git & GitHub - Partie 2 Activité
 auteur : Liciax
 
 Programme qui affiche en détails une durée (donnée en secondes), c'est à dire en heures, en minutes et en secondes.
-------------------------------------------------------*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	//variables
	int sec = 0, minu = 0, heure = 0;

	cout << "Saisir une durée en secondes : ";
	cin >> sec;

	while (sec >= 60)
	{
		sec -= 60;
		minu += 1;
	}
	while (minu >= 60)
	{
		minu -= 60;
		heure += 1;
	}
	cout << heure << "h : " << minu << "m : " << sec << "s." << endl;


	return 0;
} //main

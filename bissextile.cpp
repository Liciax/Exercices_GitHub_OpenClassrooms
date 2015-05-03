/*-----------------------------------------------------
 OpenClassrooms : Cours Git & GitHub
 Git & GitHub - Partie 2 Activité
 auteur : Liciax
 
 Programme qui teste si une année est bissextile ou non
-------------------------------------------------------*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	//variable
	int annee;
	
	cout << "Saisir une année : ";
	cin >> annee;
	
	if ((annee % 400 == 0)||((annee % 4 == 0)&&(annee % 100 != 0))) {
		cout << "L'année " << annee << " est une année bissextile." << endl;
	}
	else
	{
		cout << "L'année " << annee << " n'est pas une année bissextile." << endl;
	}
	return 0;
} //main

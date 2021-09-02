// But : Écrire un programme qui demande un entier à l'utilisateur et affiche s'il s'agit d'un entier pair ou impair
// Auteur :	Issam Abdelkrim
// Date : 2021-08-31

#include <iostream> // Bibliotheque necessaire pour tout les programmes qui dialogues avec l'utilisateur utilisation du --> (cin, cout)

using namespace std; // Inclus le std pour ne pas le remettre à chq fois dans notre code

int main()
{
	int entier1; //Initialisé la variable

	setlocale(LC_ALL, ""); // Ajouter la biblio

	cout << "Ce programme détermine si votre nombre entier est pair ou impair! \n \n"; // Afficher à l'écran l'utilité du programme

	cout << "\t \t \t-------------------------------Exercie 1------------------------------- \n"; // Numéro de l'exercice

	cout << "Veuillez entrer un nombre entier: " ; // Demander à l'utilisateur un nombre

	cin >> entier1; // Stocker le nombre dans la variable initialiser plus haut
	cout << endl; // Passage à la ligne

	if (entier1 % 2 == 0) // Mettre une condition dans le if (Si il n'y a pas de reste rentrer est lire la fonction)
	{
		cout << "Votre nombre " << "(" << entier1 << ")" " est pair!" << endl; // Affiche que le nombre choisi est pair
	}

	else // Si la condition dans le if n'est pas respecté alors rentrer ici
	{
		cout << "Votre nombre " << "(" << entier1 << ")" " est impair!" << endl; // Affiche que le nombre est impair
	}
	

	system("pause"); // Mettre une pause sur l'écran
	return 0; // Retourne zéro

}

/*
1. Veuillez rentrer le chiffre 2 --> Le programme doit afficher un message qui mentionne que votre entier est pair!

2. Veuillez rentrer le chiffre 3 --> Le programme doit afficher un message qui mentionne que votre entier est impair!
*/
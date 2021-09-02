// But : �crire un programme qui demande un entier � l'utilisateur et affiche s'il s'agit d'un entier pair ou impair
// Auteur :	Issam Abdelkrim
// Date : 2021-08-31

#include <iostream> // Bibliotheque necessaire pour tout les programmes qui dialogues avec l'utilisateur utilisation du --> (cin, cout)

using namespace std; // Inclus le std pour ne pas le remettre � chq fois dans notre code

int main()
{
	int entier1; //Initialis� la variable

	setlocale(LC_ALL, ""); // Ajouter la biblio

	cout << "Ce programme d�termine si votre nombre entier est pair ou impair! \n \n"; // Afficher � l'�cran l'utilit� du programme

	cout << "\t \t \t-------------------------------Exercie 1------------------------------- \n"; // Num�ro de l'exercice

	cout << "Veuillez entrer un nombre entier: " ; // Demander � l'utilisateur un nombre

	cin >> entier1; // Stocker le nombre dans la variable initialiser plus haut
	cout << endl; // Passage � la ligne

	if (entier1 % 2 == 0) // Mettre une condition dans le if (Si il n'y a pas de reste rentrer est lire la fonction)
	{
		cout << "Votre nombre " << "(" << entier1 << ")" " est pair!" << endl; // Affiche que le nombre choisi est pair
	}

	else // Si la condition dans le if n'est pas respect� alors rentrer ici
	{
		cout << "Votre nombre " << "(" << entier1 << ")" " est impair!" << endl; // Affiche que le nombre est impair
	}
	

	system("pause"); // Mettre une pause sur l'�cran
	return 0; // Retourne z�ro

}

/*
1. Veuillez rentrer le chiffre 2 --> Le programme doit afficher un message qui mentionne que votre entier est pair!

2. Veuillez rentrer le chiffre 3 --> Le programme doit afficher un message qui mentionne que votre entier est impair!
*/
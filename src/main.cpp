#include <iostream>
using namespace std;

int main ()  { 

//variable permettant de compter le nombre de places disponibles
  int nbrePlaces = 10;
  //variable permettant de récupérer le choix de l'utilisateur
  int choix;
  cout << "Quel est votre choix ?"<< endl <<endl;
  
 
  // partie à compléter à partir du 3.1

  std::cout << "********   Evaluation 2    *********\n\n";
  std::cout << " 1 - Entrée dans le parking\n\n";
  std::cout << " 2 - Nombre de places disponibles\n\n";
  std::cout << " 3 - Sortir du parking\n\n";
  std::cout << " 4 - Quitter\n\n";
 
  cin >> choix;

  switch (choix) {

  case 1:

    cout << "Vous avez choisi Entrée dans le parking\n";
    break;
  case 2:

    cout << "Vous avez choisi Nombre de places disponibles\n";
    break;
  case 3:

    cout << " Vous avez choisi Sortir du parking\n";
    break;
   
    case 4:
   
     cout << "Vous avez choisi Quitter\n";
    break;

  
  return 0;

}
}










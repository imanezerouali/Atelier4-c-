#include <iostream>
using namespace std;
class Test{
public:
static int tableau[] ;
public :
static int division(int indice, int diviseur){ //  condition de division 
if( diviseur == 0 ) {
throw "vous pouvez pas diviser par zero!";
}
return tableau[indice]/diviseur;
}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main()
{
    try{         // bloc en cas d'erreur :
    int x, y;
    cout << "Entrez l'indice de l'entier a diviser: " << endl;
    cin >> x ;
    cout << "Entrez le diviseur: " << endl;
    cin >> y ;
    cout << "Le resultat de la division est: "<< endl;
    cout <<Test::division(x,y) << endl;
    }
   
    catch (const char* e) {
    cerr << e << endl;
    }
return 0;
}

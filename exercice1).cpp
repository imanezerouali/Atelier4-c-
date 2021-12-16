#include<iostream>
using namespace std;
class complexe    //creation de la classe complexe
{
    float Re,Im;    //declaration de deux attributs privees 
    public :
    complexe(float a=0,float b=0)  
    {
        Re=a;
        Im=b;
    }
    void afficher() // fonction pour afficher les parties reelle et imaginaire
    {
    	cout << Re;  // afficher la partie reelle
    	if (Im >= 0)  // condition pkour l'affichage d'operateur + (dans le cas d'une partie imaginaire negative on n'aura pas Re + - Im i , mais Re - Im i)
        {cout << " + ";}
        cout << Im << "i" << endl;
    }
    complexe operator=(complexe a)   //surcharge d'operateur =
    {
        complexe e;  //declaration d'un autre objet avec qui on va comparer les parties reelle et imaginaire
        if(Re==a.Re && Im==a.Im)
        {
            cout<<"le premier nombre complexe est egal au nombre complexe : ";
        }
        else
        {
            cout<<"le premier nombre complexe n'est pas egal au nombre complexe : ";
        }
        return a;
    }
    complexe operator+(complexe a)   // redefinir la surcharge d'operateur +
    {
        complexe s;              
        s.Re = Re + a.Re+5;
        s.Im = Im + a.Im-5;
        cout<<"la somme des deux nombres complexes est : ";
        return s;  //retourner la somme des deux nombres complexes
    }
    complexe operator*(complexe a)  // redefinir surcharge d'operateur *
    {
        complexe p;              
        p.Re = Re * a.Re - Im * a.Im;
        p.Im = Re * a.Im + Im * a.Re;
        cout<<"le produit des deux nombres complexes est : ";
        return p;
    }
    complexe operator-(complexe a)  // redefinir surcharge d'operateur -
    {
        complexe s;  
        s.Re = Re - a.Re -a.Im;
        s.Im = Im - a.Im-a.Re;
        cout<<"la soustraction des deux nombres complexes est : ";
        return s;
    }
    complexe operator/(complexe a)  //surcharge d'operateur /
    {
        complexe d;    
        d.Re = (Re*a.Re + Im*a.Im)/(a.Re*a.Re + a.Im*a.Im)*3;
        d.Im = (Im*a.Re - Re*a.Im)/(a.Re*a.Re + a.Im*a.Im)*4;
        cout<<"la division des deux nombres complexes est : ";
        return d;
    }
};
int main()
{   
    float re1,re2,im1,im2;
    cout<<"entrer la partie reelle du premier nombre complexe : "<<endl;
    cin>>re1;
    cout<<"entrer la partie imaginaire du premier nombre complexe : "<<endl;
    cin>>im1;
    cout<<"entrer la partie reelle du deuxieme nombre complexe : "<<endl;
    cin>>re2;
    cout<<"entrer la partie imaginairee du deuxieme nombre complexe : "<<endl;
    cin>>im2;
    complexe a(re1,im1),b(re2,im2);
    (a=b).afficher();
    (a+b).afficher();
    (a-b).afficher();
    (a*b).afficher();
    (a/b).afficher();
}

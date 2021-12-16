#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<string> mylist;   //creation de la liste
    string m;
    int i;
    cout<<"inserez le nom, le prenom et l'age de chaque personne sous form de nom,prenom,age. inserez stop quand vous terminez :"<<endl;//demander l'insersion
    for (i = 0;; i++)  // une boucle pour enregistrer plusieurs nombres saisis par l'utilisateur
    {
    cin>>m;
    if(m=="stop")
    {
        break;   // l'arret de prendre les noms,prenoms et ages 
    }
    mylist.push_back(m); //chanque nombre saisi par l'utilisateur est ajoutee a la liste
    }
    list<string>::iterator it;  // declarer l'iterator it
    mylist.sort();     // trier la liste par la fonction sort()
    it=mylist.begin();
    cout<<"votre liste triee est : ";
    for (it;it!=mylist.end();it++)  // afficher les elements lorque ils seront tries
    {
            cout<<*it<<"  ";
    }
}

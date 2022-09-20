#include <iostream>

using namespace std;

int main()
{
    float val1, val2, resultat;
    char operateur;
    cout << "Saisir le calcul";
    cin >> val1 >> operateur >> val2;

    if (operateur=='+')
    {resultat=val1+val2;}

    if (operateur=='-')
    {resultat=val1-val2;}

    if (operateur=='*')
    {resultat=val1*val2;}

    if (operateur=='/')
    {resultat=val1/val2;}

    cout<< resultat;

    return 0;
}

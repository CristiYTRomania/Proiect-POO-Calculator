#include <iostream>
#include <cmath>
using namespace std;
class Calculator
{
private:
    long long L[1001],P;
    double D[1001],p;
    int i,x;
public:
    long long adunareNumereIntregi()
    {
        P=0;
        for(i=1;i<=x;i++)
            P = P+L[i];
        return P;
    }
    double adunareNumereReale()
    {
        p=0;
        for(i=1;i<=x;i++)
            p = p+D[i];
        return p;
    }
    double scadereNumereReale()
    {
        p=0;
        for(i=2;i<=x;i++)
            p = p+D[i];
        return D[1]-p;
    }
    long long scadereNumereIntregi()
    {
        P=0;
        for(i=2;i<=x;i++)
            P = P+L[i];
        return L[1]-P;
    }
    long long inmultireNumereIntregi()
    {
        P=1;
        for(i=1;i<=x;i++)
            P = P*L[i];
        return P;
    }
    double inmultireNumereReale()
    {
        p=1;
        for(i=1;i<=x;i++)
            p = p*D[i];
        return p;
    }
    double impartireNumereReale()
    {
        p=1;
        for(i=2;i<=x;i++)
            p = p*D[i];
        return D[1]/p;
    }
    long long impartireNumereIntregi()
    {
        P=1;
        for(i=2;i<=x;i++)
            P = P*L[i];
        return P==0 ? 0 : L[1]/P;
    }
    void declarareNumereIntregi(long long l[1001],int X)
    {
        for(i=1;i<=X;i++)
            L[i]=l[i];
        x=X;
    }
    void declarareNumereReale(double d[1001],int X)
    {
        for(i=1;i<=X;i++)
            D[i]=d[i];
        x=X;
    }
};
int main()
{
    int i,n,x;
    long long l[1001];
    double d[1001];
    Calculator myCalc;
inceput:
    cout<<endl<<"Introduceti numarul 1 pentru numere intregi"<<endl;
    cout<<"Introduceti numarul 2 pentru numere reale"<<endl;
    cout<<"Introduceti orice alt numar intreg pentru terminarea programului"<<endl;
    cout<<"Numarul introdus este: ";
    cin>>n;
    if(n==1 || n==2)
    {
        x=1;
        while(x<2)
        {
            cout<<"Cate numere vreti sa introduceti pentru calcule aritmetice? (n>1) ";
            cin>>x;
        }
        cout<<"Introduceti "<<x<<" numere ";
    }
    if(n==1)
    {
        cout<<"intregi: ";
        for(i=1;i<=x;i++)
            cin>>l[i];
        myCalc.declarareNumereIntregi(l,x);
    }
    else if(n==2)
    {
        cout<<"reale: ";
        for(i=1;i<=x;i++)
            cin>>d[i];
        myCalc.declarareNumereReale(d,x);
    }
    else
        goto etexit;
calculare:
    cout<<endl<<"Introduceti numarul 0 pentru reintroducerea numerelor"<<endl;
    cout<<"Introduceti numarul 1 pentru suma celor "<<x<<" numere"<<endl;
    cout<<"Introduceti numarul 2 pentru scaderea primului numar cu suma celorlalte "<<x-1<<" numere"<<endl;
    cout<<"Introduceti numarul 3 pentru produsul celor "<<x<<" numere"<<endl;
    cout<<"Introduceti numarul 4 pentru impartirea primului numar cu produsul celorlalte "<<x-1<<" numere"<<endl;
    cout<<"Introduceti orice alt numar intreg pentru terminarea programului"<<endl;
    cout<<"Numarul introdus este: ";
    int m;
    cin>>m;
    if(m==0)
        goto inceput;
    if(m==1)
    {
        cout << "Suma celor "<<x<<" numere este: ";
        if(n==1)
            cout << myCalc.adunareNumereIntregi();
        else
            cout << myCalc.adunareNumereReale();
        cout << endl;
        goto calculare;
    }
    else if(m==2)
    {
        cout << "Diferenta dintre primul numar si suma celorlalte "<<x-1<<" numere este: ";
        if(n==1)
            cout << myCalc.scadereNumereIntregi();
        else
            cout << myCalc.scadereNumereReale();
        cout << endl;
        goto calculare;
    }
    else if(m==3)
    {
        cout << "Produsul celor "<<x<<" numere este: ";
        if(n==1)
            cout << myCalc.inmultireNumereIntregi();
        else
            cout << myCalc.inmultireNumereReale();
        cout << endl;
        goto calculare;
    }
    else if(m==4)
    {
        cout << "Catul dintre primul numar si produsul celorlalte "<<x-1<<" numere este: ";
        if(n==1)
            cout << myCalc.impartireNumereIntregi();
        else
            cout << myCalc.impartireNumereReale();
        cout << endl;
        goto calculare;
    }
etexit:
    return 0;
}

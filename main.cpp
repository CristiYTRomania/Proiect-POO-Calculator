#include <iostream>
#include <cmath>
class Calculator
{
private:
    long long L[1001],P;
    double D[1001],p;
    int x;
public:
    long long adunareNumereIntregi()
    {
        P=0;
        for(int i=1;i<=x;i++)
            P = P+L[i];
        return P;
    }
    double adunareNumereReale()
    {
        p=0;
        for(int i=1;i<=x;i++)
            p = p+D[i];
        return p;
    }
    double scadereNumereReale()
    {
        p=0;
        for(int i=2;i<=x;i++)
            p = p+D[i];
        return D[1]-p;
    }
    long long scadereNumereIntregi()
    {
        P=0;
        for(int i=2;i<=x;i++)
            P = P+L[i];
        return L[1]-P;
    }
    long long inmultireNumereIntregi()
    {
        P=1;
        for(int i=1;i<=x;i++)
            P = P*L[i];
        return P;
    }
    double inmultireNumereReale()
    {
        p=1;
        for(int i=1;i<=x;i++)
            p = p*D[i];
        return p;
    }
    double impartireNumereReale()
    {
        p=1;
        for(int i=2;i<=x;i++)
            p = p*D[i];
        return D[1]/p;
    }
    long long impartireNumereIntregi()
    {
        P=1;
        for(int i=2;i<=x;i++)
            P = P*L[i];
        return P==0 ? (long long)-2147483647-1 : L[1]/P;
    }
    void declarareNumereIntregi(long long l[1001],int X)
    {
        for(int i=1;i<=X;i++)
            L[i]=l[i];
        x=X;
    }
    void declarareNumereReale(double d[1001],int X)
    {
        for(int i=1;i<=X;i++)
            D[i]=d[i];
        x=X;
    }
};
int main()
{
    int n,x;
    long long l[1001];
    double d[1001];
    Calculator myCalc;
inceput:
    std::cout<<std::endl<<"Introduceti numarul 1 pentru numere intregi"<<std::endl;
    std::cout<<"Introduceti numarul 2 pentru numere reale"<<std::endl;
    std::cout<<"Introduceti orice alt numar intreg pentru terminarea programului"<<std::endl;
    std::cout<<"Numarul introdus este: ";
    std::cin>>n;
    if(n==1 || n==2)
    {
        x=1;
        while(x<2)
        {
            std::cout<<"Cate numere vreti sa introduceti pentru calcule aritmetice? (n>1) ";
            std::cin>>x;
        }
        std::cout<<"Introduceti "<<x<<" numere ";
    }
    if(n==1)
    {
        std::cout<<"intregi: ";
        for(int i=1;i<=x;i++)
            std::cin>>l[i];
        myCalc.declarareNumereIntregi(l,x);
    }
    else if(n==2)
    {
        std::cout<<"reale: ";
        for(int i=1;i<=x;i++)
            std::cin>>d[i];
        myCalc.declarareNumereReale(d,x);
    }
    else
        goto etexit;
calculare:
    std::cout<<std::endl<<"Introduceti numarul 0 pentru reintroducerea numerelor"<<std::endl;
    std::cout<<"Introduceti numarul 1 pentru suma celor "<<x<<" numere"<<std::endl;
    std::cout<<"Introduceti numarul 2 pentru scaderea primului numar cu suma celorlalte "<<x-1<<" numere"<<std::endl;
    std::cout<<"Introduceti numarul 3 pentru produsul celor "<<x<<" numere"<<std::endl;
    std::cout<<"Introduceti numarul 4 pentru impartirea primului numar cu produsul celorlalte "<<x-1<<" numere"<<std::endl;
    std::cout<<"Introduceti orice alt numar intreg pentru terminarea programului"<<std::endl;
    std::cout<<"Numarul introdus este: ";
    int m;
    std::cin>>m;
    if(m==0)
        goto inceput;
    if(m==1)
    {
        std::cout << "Suma celor "<<x<<" numere este: ";
        if(n==1)
            std::cout << myCalc.adunareNumereIntregi();
        else
            std::cout << myCalc.adunareNumereReale();
        std::cout << std::endl;
        goto calculare;
    }
    else if(m==2)
    {
        std::cout << "Diferenta dintre primul numar si suma celorlalte "<<x-1<<" numere este: ";
        if(n==1)
            std::cout << myCalc.scadereNumereIntregi();
        else
            std::cout << myCalc.scadereNumereReale();
        std::cout << std::endl;
        goto calculare;
    }
    else if(m==3)
    {
        std::cout << "Produsul celor "<<x<<" numere este: ";
        if(n==1)
            std::cout << myCalc.inmultireNumereIntregi();
        else
            std::cout << myCalc.inmultireNumereReale();
        std::cout << std::endl;
        goto calculare;
    }
    else if(m==4)
    {
        std::cout << "Catul dintre primul numar si produsul celorlalte "<<x-1<<" numere este: ";
        if(n==1)
            std::cout << myCalc.impartireNumereIntregi();
        else
            std::cout << myCalc.impartireNumereReale();
        std::cout << std::endl;
        goto calculare;
    }
etexit:
    return 0;
}

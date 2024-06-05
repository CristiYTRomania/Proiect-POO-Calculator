#include <iostream>
#include "clase.cpp"
int main()
{
    system("color 09");
    int n,x=0;
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
        do
        {
            std::cout<<"Cate numere vreti sa introduceti pentru calcule aritmetice? (n>1) ";
            std::cin>>x;
        }
        while(x<2);
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
    system("color 0f");
    return 0;
}

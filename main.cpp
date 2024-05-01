#include <iostream>
#include <cmath>
using namespace std;
class Calculator
{
private:
    long long A,B,C,D,E,F,P;
    double G,H,I,J,K,L;
public:
    long long adunareNumereIntregi()
    {
        return A+B+C+D+E+F;
    }
    double adunareNumereReale()
    {
        return G+H+I+J+K+L;
    }
    double scadereNumereReale()
    {
        return G-H-I-J-K-L;
    }
    long long scadereNumereIntregi()
    {
        return A-B-C-D-E-F;
    }
    long long inmultireNumereIntregi()
    {
        return A*B*C*D*E*F;
    }
    double inmultireNumereReale()
    {
        return G*H*I*J*K*L;
    }
    double impartireNumereReale()
    {
        return G/(H*I*J*K*L);
    }
    long long impartireNumereIntregi()
    {
        P = B*C*D*E*F;
        return P==0 ? /** LONG_LONG_MIN **/ -2147483648 : A/P;
    }
    void declarareNumereIntregi(long long a, long long b, long long c, long long d, long long e, long long f)
    {
        A=a,B=b,C=c,D=d,E=e,F=f;
    }
    void declarareNumereReale(double g, double h, double i, double j, double k, double l)
    {
        G=g,H=h,I=i,J=j,K=k,L=l;
    }
};
int main()
{
inceput:
    cout<<"Introduceti numarul 1 pentru numere intregi"<<endl;
    cout<<"Introduceti numarul 2 pentru numere reale"<<endl;
    cout<<"Introduceti orice alt numar intreg pentru terminarea programului"<<endl;
    cout<<"Numarul introdus este: ";
    int n;
    Calculator myCalc;
    long long a,b,c,d,e,f;
    double g,h,i,j,k,l;
    cin>>n;
    if(n==1 /** or **/ || n==2)
        cout<<"Introduceti 6 numere ";
    if(n==1)
    {
        cout<<"intregi: ";
        cin>>a>>b>>c>>d>>e>>f;
        myCalc.declarareNumereIntregi(a,b,c,d,e,f);
    }
    else if(n==2)
    {
        cout<<"reale: ";
        cin>>g>>h>>i>>j>>k>>l;
        myCalc.declarareNumereReale(g,h,i,j,k,l);
    }
    else
        goto etexit;
calculare:
    cout<<"Introduceti numarul 0 pentru reintroducerea numerelor"<<endl;
    cout<<"Introduceti numarul 1 pentru adunarea celor 6 numere"<<endl;
    cout<<"Introduceti numarul 2 pentru scaderea primului numar cu suma celorlalte 5 numere"<<endl;
    cout<<"Introduceti numarul 3 pentru inmultirea celor 6 numere"<<endl;
    cout<<"Introduceti numarul 4 pentru impartirea primului numar cu produsul celorlalte 5 numere"<<endl;
    cout<<"Introduceti orice alt numar intreg pentru terminarea programului"<<endl;
    cout<<"Numarul introdus este: ";
    int m;
    cin>>m;
    if(m==0)
        goto inceput;
    if(m==1)
    {
        cout << "Suma celor 6 numere este: ";
        if(n==1)
            cout << myCalc.adunareNumereIntregi();
        else
            cout << myCalc.adunareNumereReale();
        cout << endl;
        goto calculare;
    }
    else if(m==2)
    {
        cout << "Diferenta dintre primul numar si suma celorlalte 5 numere este: ";
        if(n==1)
            cout << myCalc.scadereNumereIntregi();
        else
            cout << myCalc.scadereNumereReale();
        cout << endl;
        goto calculare;
    }
    else if(m==3)
    {
        cout << "Produsul celor 6 numere este: ";
        if(n==1)
            cout << myCalc.inmultireNumereIntregi();
        else
            cout << myCalc.inmultireNumereReale();
        cout << endl;
        goto calculare;
    }
    else if(m==4)
    {
        cout << "Catul dintre primul numar si produsul celorlalte 5 numere este: ";
        if(n==1)
            cout << myCalc.impartireNumereIntregi();
        else
            cout << myCalc.impartireNumereReale();
        cout << endl;
        goto calculare;
    }
etexit:
    cout<<"Programul s-a terminat! Puteti apasa orice tasta pentru a inchide fereastra";
    return 0;
}

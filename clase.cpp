#include <iostream>
#include <cmath>
class ImpartireaLaZero: public std::exception
{
public:
    const char* what() const noexcept override
    {
        return "Impartitorul este zero!";
    }
};
class OrdinRadicalZero: public std::exception
{
public:
    const char* what() const noexcept override
    {
        return "Ordinul radicalului este zero!";
    }
};
class Calculator
{
protected:
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
        try
        {
            if(P==0)
            {
                throw ImpartireaLaZero();
            }
        }
        catch(const ImpartireaLaZero &e)
        {
            std::cerr<<e.what()<<' ';
            return ((long long)-2147483647-1)*((long long)2147483647+1)*2;
        }
        return L[1]/P;
        //return P==0 ? ((long long)-2147483647-1)*((long long)2147483647+1)*2 : L[1]/P;
    }
    void declarareNumereIntregi(const long long l[],int X)
    {
        for(int i=1;i<=X;i++)
            L[i]=l[i];
        x=X;
    }
    void declarareNumereReale(const double d[],int X)
    {
        for(int i=1;i<=X;i++)
            D[i]=d[i];
        x=X;
    }
    Calculator()
    {
        std::cout<<"\nProiect POO - Calculator - Jitescu Silviu-Cristian - grupa 133\n";
    }
    ~Calculator()
    {
        std::cout<<"\nProgramul s-a terminat! Puteti apasa orice tasta pentru a inchide fereastra (daca rulati executabilul in aplicatia CodeBlocks)\n";
    }
};
class CalculatorStiintific: public Calculator
{
public:
    CalculatorStiintific()
    {
        std::cout<<"Acesta este calculatorul meu stiintific!\n";
    }
    ~CalculatorStiintific()
    {
        std::cout<<"\nCalculatorul meu stiintific s-a inchis!";
    }
    long long PutereNumereIntregi()
    {
        P=L[x];
        for(int i=x-1;i>=1;i--)
            P=floor(static_cast<double>(pow(L[i],P)));
        return P;
    }
    double PutereNumereReale()
    {
        p=D[x];
        for(int i=x-1;i>=1;i--)
            p=pow(D[i],p);
        return p;
    }
    long long RadicalNumereIntregi()
    {
        P=1;
        for(int i=1;i<=x-1;i++)
            P=P*L[i];
        try
        {
            if(L[x]==0)
            {
                throw OrdinRadicalZero();
            }
        }
        catch(const OrdinRadicalZero &e)
        {
            std::cerr<<e.what()<<' ';
            return ((long long)-2147483647-1)*((long long)2147483647+1)*2;
        }
        P=floor(pow(P,1/L[x]));
        return P;
    }
    double RadicalNumereReale()
    {
        p=1;
        for(int i=1;i<=x-1;i++)
            p=p*D[i];
        p=pow(p,1/D[x]);
        return p;
    }
};
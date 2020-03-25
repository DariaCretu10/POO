#include <iostream>
#include <cmath>
using namespace std;
class Numar_Complex {
   private: double ParteReala;

            double ParteImaginara;

   public:  Numar_Complex() {ParteReala=0; ParteImaginara=0;}

            Numar_Complex(const Numar_Complex &nr1)

                { this->ParteImaginara=nr1.ParteImaginara;
                  this->ParteReala=nr1.ParteReala;
                }

            ~Numar_Complex() {ParteReala=0; ParteImaginara=0; }

            void SetParteReala(double pr) {ParteReala=pr;}

            double GetParteReala(){return ParteReala;}

            void SetParteImaginara(double pi) {ParteImaginara=pi;}

            double GetParteImaginara(){return ParteImaginara;}

            void Afisare();

            friend istream & operator>>(istream &in, Numar_Complex &nr);

            friend ostream & operator<<(ostream &out, Numar_Complex &nr);

            Numar_Complex operator + (Numar_Complex nr);

            Numar_Complex operator * (Numar_Complex nr);

            Numar_Complex operator / (Numar_Complex nr);

            double modul();

            double radical();

            Numar_Complex* citeste(int n)
                {
                    Numar_Complex* v=new Numar_Complex[n];
                    for(int i=0;i<n;i++)
                        cin>>v[i];
                    for(int i=0;i<n;i++)
                        cout<<v[i]<<' ';
                    return v;
                }

            };
 istream & operator>>(istream &in, Numar_Complex &nr)

    { in>>nr.ParteReala>>nr.ParteImaginara;
      return in;

    }
 ostream & operator<<(ostream &out, Numar_Complex &nr)

    { out<<nr.ParteReala<<'+'<<nr.ParteImaginara;
      return out;

    }

void Numar_Complex::Afisare()

    { if (ParteImaginara==0) cout<<ParteReala;

      if (ParteReala==0)
        {if(ParteImaginara>0)

            cout<<"i*"<<ParteImaginara;
        else
            cout<<"-i*"<<-ParteImaginara;
        }
      if(ParteReala!=0&&ParteImaginara!=0)
        {if(ParteImaginara>0)
            cout<<ParteReala<<"+i*"<<ParteImaginara;
        else
            cout<<ParteReala<<"-i*"<<-ParteImaginara;
        }
    }

Numar_Complex Numar_Complex::operator + (Numar_Complex nr)
    { Numar_Complex sum;
      sum.ParteReala=this->ParteReala+nr.ParteReala;
      sum.ParteImaginara=this->ParteImaginara+nr.ParteImaginara;
      return sum;
    }
Numar_Complex Numar_Complex::operator / (Numar_Complex nr)
    { Numar_Complex imp;
      imp.ParteReala=(this->ParteReala*nr.ParteReala+this->ParteImaginara*nr.ParteImaginara)/(nr.ParteReala*nr.ParteReala+nr.ParteImaginara*nr.ParteImaginara);
      imp.ParteImaginara=(this->ParteImaginara*nr.ParteReala-this->ParteReala*nr.ParteImaginara)/(nr.ParteReala*nr.ParteReala+nr.ParteImaginara*nr.ParteImaginara);
      return imp;
    }
Numar_Complex Numar_Complex::operator * (Numar_Complex nr)
    {Numar_Complex inm;
     inm.ParteReala=this->ParteReala*nr.ParteReala-this->ParteImaginara*nr.ParteImaginara;
     inm.ParteImaginara=this->ParteReala*nr.ParteImaginara+this->ParteImaginara*nr.ParteReala;
     return inm;

    }
double Numar_Complex::modul()
    {
        return sqrt(ParteReala*ParteReala+ParteImaginara*ParteImaginara);
    }
double Numar_Complex::radical()
    {
        return sqrt(ParteReala)+sqrt(ParteImaginara);
    }
Numar_Complex citesteComplex()
{
    Numar_Complex x;

    double r, i;

    cin>>r>>i;

    x.SetParteReala(r);
    x.SetParteImaginara(i);

    return x;
}

int main()
{

  Numar_Complex c1, c2, c3, sol1,sol2;

    c1 = citesteComplex();
    c2 = citesteComplex();
    c3 = citesteComplex();

    sol1=(sqrt(c2*c2-4*c1*c3)+c2)/2*c1;
    sol2=(sqrt(c2*c2-4*c1*c3)-c2)/2*c1;

    cout<<sol1.GetParteReala()<<' '<<sol1.GetParteImaginara()<<'\n';
    cout<<sol2.GetParteReala()<<' '<<sol2.GetParteImaginara()<<'\n';
    return 0;
}

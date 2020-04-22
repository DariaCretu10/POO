#include <iostream>
#include "Nod.h"
#include "Nod_dublu.h"
#include "Nod_prioritate.h"
using namespace std;

Nod_dublu::Nod_dublu() : Nod()
{
    ante=NULL;
}

Nod_dublu::Nod_dublu(char*i, Nod*n, Nod*p):Nod(i,n){
   ante=new Nod;
   ante=p;

}

Nod_dublu::Nod_dublu(const Nod_dublu &other):Nod(other){
  ante=new Nod;
  this->ante=other.ante;
}
Nod_dublu::~Nod_dublu()
{
    delete ante;
}
 istream& operator>>(istream& i, const Nod_dublu& ob)
 {
     i>>ob.info;
     return i;
 }
 ostream& operator<<(ostream& o, const Nod_dublu& ob)
 {
     o<<ob.info;
     return o;
 }

 Nod_dublu& Nod_dublu::operator = (const Nod_dublu &ob )
{
         delete info;
         delete next;
         delete ante;
         info=new char;
         next=new Nod_dublu;
         ante=new Nod_dublu;
         strcpy(info,ob.info);
         next=ob.next;
         ante=ob.ante;
         return *this;
      }


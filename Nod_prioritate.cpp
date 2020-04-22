#include <iostream>
#include "Nod.h"
#include "Nod_dublu.h"
#include "Nod_prioritate.h"
using namespace std;

Nod_prioritate::Nod_prioritate() : Nod_dublu()
{
    prio=-1;
}

Nod_prioritate::Nod_prioritate(char*i, Nod*n, Nod*p, int pr):Nod_dublu(i,n,p){
   prio=pr;
}

Nod_prioritate::Nod_prioritate(const Nod_prioritate &other):Nod_dublu(other){
  this->prio=other.prio;
}
Nod_prioritate::~Nod_prioritate()
{
    delete ante;
}

istream& operator>>(istream& i, Nod_prioritate& ob);
{
    i>>ob.info;
    return i;
}

ostream& operator<<(ostream& o, Nod_prioritate& ob);
{
    o<<ob.info;
    return o;
}

int Nod_prioritate::get_prioritate(){
return prio;
}

void Nod_prioritate::set_prioritate(Nod_prioritate* prio)
{
    this->prio=prio;
}

Nod_prioritate& Nod_prioritate::operator = (const Nod_prioritate &ob )
{
         delete info;
         delete next;
         delete ante;
         info=new char
         next=new Nod_dublu;
         ante=new Nod_dublu;
         strcpy(info,ob.info);
         next=ob.next;
         ante=ob.ante;
         prio=ob.prio;
         return *this;
      }

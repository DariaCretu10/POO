#include <iostream>
#include "Nod.h"
#include "Nod_dublu.h"
#include "Nod_prioritate.h"
using namespace std;

Nod::Nod()
{ info=new char[0];
  next=NULL;
  cout<<"ConstructorNeparametrizat";
}

Nod::Nod(char*i, Nod*urm)
 { info=new char; next=new Nod;
   strcpy(info, i);
   next=urm;
   cout<<"ConstructorParam";
 }

Nod::Nod(const Nod &ob)
{ info=new char;
  strcpy(info,ob.info);
  this->next=ob.next;
  cout<<"ConstructorDeCopiere";
}

Nod::~Nod()
{ delete info;
  delete next;
  cout<<"Destructor";
}

Nod* Nod::get_next() {
    return next;
}
char* Nod::get_info(){
return info;
}

 istream& operator>>(istream& i, const Nod& ob)
{
    i>>ob.info;
    return i;
}
 ostream& operator<<(ostream& o, const Nod& ob)
{
    o<<ob.info;
    return o;
}
Nod& Nod::operator = (const Nod &ob )
{
         delete info;
         delete next;
         info=new char;
         next=new Nod;
         strcpy(info,ob.info);
         next=ob.next;
         return *this;
      }

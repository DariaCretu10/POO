#include "Coada_prioritati.h"

Coada_prioritati::Coada_prioritati()
{
    cap = NULL;
    ultim = NULL;
    dim = 0;
}

Coada_prioritati::Coada_prioritati(char v[][31], int dimv)
{
    cap = new Nod_prioritate(v[0], NULL, NULL);
    ultim = new Nod_prioritate(v[0], NULL, NULL);
    Nod_prioritate* e = new Nod_prioritate();
    for ( int i = 1 ; i <= dimv ; i++)
       {e -> info = v[i];
        if ( i == 1)
            { e -> next = NULL
              cap = ultim = e;
            }
        else
           {e -> next = cap;
            prim = e ;}
       }
}

Coada_prioritati::Coada_prioritati(const Coada_prioritati &ob)
{
    cap = ob.cap;
    ultim = ob.ultim;
    Nod_prioritate* e = new Nod_prioritate();
    for(i=1 ; i <= ob.dim ; i++)
        {e -> info = ob.cap -> info
        if ( cap == NULL)
            {cap = ultim = ob.cap ;
             ob.ultim = NULL
            }
        else
           {ob.prim -> next = cap;
            prim = ob ;}
        }
}

Coada_prioritati::~Coada_prioritati()
{
    delete cap;
    dim = 0;
}

 void Coada_prioritati::pop(Coada_prioritati* &cap){
 try{
  Nod_prioritate* victima=cap;
  if(goala()==0)
    throw Exceptii { "S-a produs o eroare" }

  cap = cap -> next;

  delete victima;
 }
 catch (Exceptii &e) {cout<<e.what()<<endl;}
 }

void inserareElement(Nod_prioritate* &cap, Nod_prioritate* element_dat, char valoare)
{
    Nod_prioritate *elem_creat = new Nod_prioritate;
    elem_creat->info = valoare;
    elem_creat->next = NULL;
    if (cap == NULL)
    {
        cap = elem_creat;
        return;
    }
    if (prio == 1)
    {
        elem_creat->next = cap;
        cap = elem_creat;
        return;
    }
    elem_creat->next = element_dat->next;
    element_dat->next = elem_creat;
}
Nod_prioritate* cautarePozitie(Nod_prioritate* cap, int pozitie)
{
    int i = 0;
    while (cap != NULL && i < pozitie)
    {
        cap = cap->next;
        i++;
    }
    if (i == pozitie)
        return cap;
    else
        return NULL;
}
void Coada_prioritati::top(Nod_prioritate* cap)
{
  return cap;
}

void Coada_prioritati::emptyy()
{
    while(dim)
    {
        Nod_prioritate* elem = cap;
        cap = cap -> next;
        dim--;
        delete elem;
    }
}
int Coada_prioritati()::goala(){
    if(dim) return 1;
    else return 0;

}
istream& operator>>(istream& i, const Coada_prioritati& ob)
{
    while(ob.cap!=NULL)
        { i >> ob.cap -> get_info(); ob.cap = ob.cap ->get_next(); }
    return i;
}

ostream& operator<<(ostream& o, Coada_prioritati& ob)
{
    Nod_prioritate *e=ob.cap;

    for(Nod_prioritate *e; e !=NULL; e = e-> get_next)
        o<<e -> get_info();
    return o;
}

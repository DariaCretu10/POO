#ifndef NOD_H
#define NOD_H
#pragma once
#include <bits/stdc++.h>
using namespace std;
class Nod
{ public:
  char *info;
  Nod *next;
    public:
        Nod();
        virtual ~Nod();
        Nod( char* , Nod* );
        Nod ( const Nod &ob );
        virtual char* get_info();
        virtual Nod* get_next();
        friend istream& operator>>(istream &i, const Nod& ob);
        friend ostream& operator<<(ostream &o, const Nod& ob);
        friend class Coada_prioritati;
        Nod& operator = (const Nod& ob );
};

#endif // NOD_H

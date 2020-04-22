#ifndef NOD_DUBLU_H
#define NOD_DUBLU_H
#include <bits/stdc++.h>
using namespace std;

class Nod_dublu : public Nod
{ protected:
    Nod *ante;
    public:
        Nod_dublu();
        virtual ~Nod_dublu();
        Nod_dublu(const Nod_dublu &);
        Nod_dublu (char* , Nod*, Nod*);
        friend istream& operator>>(istream& i, Nod_dublu& ob);
        friend ostream& operator<<(ostream& o, Nod_dublu& ob);
        Nod_dublu& operator = (const Nod_dublu& ob );
};

#endif // NOD_DUBLU_H

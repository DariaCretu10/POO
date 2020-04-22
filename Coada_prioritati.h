#ifndef COADA_PRIORITATI_H
#define COADA_PRIORITATI_H


class Coada_prioritati
{ private:
      Nod_prioritate  *ultim, *cap;
      int dim;
    public:
        Coada_prioritati();
        virtual ~Coada_prioritati();
        Coada_prioritati();
        Coada_prioritati();
        void insertt();
        void top();
        void pop();
        void emptyy();
        int goala();
        friend istream& operator>>(istream& i, Coada_prioritati& ob);
        friend ostream& operator<<(ostream& o, Coada_prioritati& ob);

};

#endif // COADA_PRIORITATI_H

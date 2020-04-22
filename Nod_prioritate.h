#ifndef NOD_PRIORITATE_H
#define NOD_PRIORITATE_H


class Nod_prioritate : public Nod_dublu
{ int prio;
    public:
        Nod_prioritate();
        virtual ~Nod_prioritate();
        Nod_prioritate(char* , Nod*, Nod*, int);
        Nod_prioritate(const Nod_prioritate &);
        virtual int get_prioritate();
        virtual void set_prioritate();
        friend istream& operator>>(istream& i, Nod_prioritate& ob);
        friend ostream& operator<<(ostream& o, Nod_prioritate& ob);
        Nod_prioritate operator=(const Nod_prioritate&);
};

#endif // NOD_PRIORITATE_H

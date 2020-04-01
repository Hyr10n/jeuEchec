#ifndef JOUEUR_H
#define JOUEUR_H


class Joueur
{
    public:
        Joueur();
        virtual ~Joueur();

        string Getnom() { return nom; }
        void Setnom(string val) { nom = val; }

    protected:

    private:
        string nom;
};

#endif // JOUEUR_H

#ifndef FLAECHE_H
#define FLAECHE_H

class Flaeche {
    private:
    std::string farbe;
    public:
    Flaeche(std::string n);
    ~Flaeche();
    void getFarbe() const;
};

#endif // FLAECHE_H

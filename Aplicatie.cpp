#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <bits/stdc++.h>
#include <time.h>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <cctype>
#include <istream>
#include <stdio.h>
using namespace std;
const int ch_MAX = 26;
string RandomName()
{
    int ch = rand() % ch_MAX;
    char alpha[ch_MAX] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z'};
    string name = "";
    for (int i = 0; i < ch; i++)
        name = name + alpha[rand() % ch_MAX];

    return name;
}
string randExtra()
{
    string a, b;
    a = RandomName();
    b = RandomName();
    a = a + " " + b;
    return a;
}
class Cast
{
private:
    string lg1;
    string lg2;

public:
    int vampir = 0;
    int varcolac = 0;
    int sirene = 0;
    int clarvazator = 0;
    int om = 0;
    int dietaOrice = 0;
    int dietaVegetariana = 0;
    int dietaFlexitariana = 0;
    int numarPersoane;
    void setLanguage1(string lg1)
    {
        this->lg1 = lg1;
    }
    void setLanguage2(string lg2)
    {
        this->lg2 = lg2;
    }
    string getLanguage1()
    {
        return this->lg1;
    }
    string getLanguage2()
    {
        return this->lg2;
    }
    
   friend void file( Cast object);

 
};
void file(Cast object)
{
    int i, k;
    fstream fout;
    fstream fout1;
    fstream fin;
    fin.open("wednesdayCast.csv", ios::in);
    fout.open("wednesdayCastnew.csv", ios::out);
    fout1.open("wednesdayCastEngleza.csv", ios::out);
    vector<string> nume;
    vector<string> rol;
    vector<string> dieta;
    vector<string> machiaj;
    string line;
    string a, b, c, d;
    while (fin.good())
    {
        getline(fin, line);
        stringstream ss(line);
        getline(ss, a, ',');
        nume.push_back(a);
        getline(ss, b, ',');
        rol.push_back(b);
    }
    fin.close();
    object.numarPersoane = nume.size();
    for (i = 0; i < nume.size() + 132; i++)
    {
        if (i < nume.size()-1)
        {
            if (!(rol[i].find("actor/actress")))
            {
                fout << nume[i] << ","
                     << "actor/actrita"
                     << ",";
                fout1 << nume[i] << ","
                      << "actor/actress"
                      << ",";
                k = rand() % 3;
                if (k == 0)
                {
                    fout << "Apt sa manance orice"
                         << ",";
                    fout1 << "Apt to eat anything"
                          << ",";
                    object.dietaOrice++;
                }
                if (k == 1)
                {
                    fout << "Vegetariana"
                         << ",";
                    fout1 << "Vegetariana"
                          << ",";
                  object.dietaVegetariana++;
                }
                if (k == 2)
                {
                    fout << "Flexitariana"
                         << ",";
                    fout1 << "Flexitariana"
                          << ",";
                   object.dietaFlexitariana++;
                }
                k = rand() % 5;
                if (k == 0)
                {
                    fout << "Vampir"
                         << "," << endl;
                    fout1 << "Vampire"
                          << "," << endl;
                    object.vampir++;
                }
                if (k == 1)
                {
                    fout << "Varcolac"
                         << "," << endl;
                    fout1 << "Werewolf"
                          << "," << endl;
                    object.varcolac++;
                }
                if (k == 2)
                {
                    fout << "Sirene"
                         << "," << endl;
                    fout1 << "Mermaid"
                          << "," << endl;
                  object.sirene++;
                }
                if (k == 3)
                {
                    fout << "Clarvazator"
                         << "," << endl;
                    fout1 << "Clairvoyant"
                          << "," << endl;
                    object.clarvazator++;
                }
                if (k == 4)
                {
                    fout << "Oameni"
                         << "," << endl;
                    fout1 << "People"
                          << "," << endl;
                    object.om++;
                }
            }
            else
            {
                fout << nume[i] << ","
                     << "personal"
                     << ",";
                fout1 << nume[i] << ","
                      << "staff"
                      << ",";
                k = rand() % 3;
                if (k == 0)
                {
                    fout << "Apt sa manance orice"
                         << "," << endl;
                    fout1 << "Apt to eat anything"
                          << "," << endl;
                   object.dietaOrice++;
                }
                if (k == 1)
                {
                    fout << "Vegetariana"
                         << "," << endl;
                    fout1 << "Vegetariana"
                          << "," << endl;
                    object.dietaVegetariana++;
                }
                if (k == 2)
                {
                    fout << "Flexitariana"
                         << "," << endl;
                    fout1 << "Flexitariana"
                          << "," << endl;
                    object.dietaFlexitariana++;
                }
            }
        }

        else
        {
            fout << randExtra() << ","
                 << "figuratie"
                 << ",";
            fout1 << randExtra() << ","
                  << "extra"
                  << ",";
            k = rand() % 3;
            if (k == 0)
            {
                fout << "Apt sa manance orice"
                     << ",";
                fout1 << "Apt to eat anything"
                      << ",";
              object.dietaOrice++;
            }
            if (k == 1)
            {
                fout << "Vegetariana"
                     << ",";
                fout1 << "Vegetariana"
                      << ",";
               object.dietaVegetariana++;
            }
            if (k == 2)
            {
                fout << "Flexitariana"
                     << ",";
                fout1 << "Flexitariana"
                      << ",";
               object.dietaFlexitariana++;
            }
            k = rand() % 5;
            if (k == 0)
            {
                fout << "Vampir"
                     << "," << endl;
                fout1 << "Vampire"
                      << "," << endl;
                object.vampir++;
            }
            if (k == 1)
            {
                fout << "Varcolac"
                     << "," << endl;
                fout1 << "Werewolf"
                      << "," << endl;
               object.varcolac++;
            }
            if (k == 2)
            {
                fout << "Sirene"
                     << "," << endl;
                fout1 << "Mermaid"
                      << "," << endl;
               object.sirene++;
            }
            if (k == 3)
            {
                fout << "Clarvazator"
                     << "," << endl;
                fout1 << "Clairvoyant"
                      << "," << endl;
               object.clarvazator++;
            }
            if (k == 4)
            {
                fout << "Oameni"
                     << "," << endl;
                fout1 << "People"
                      << "," << endl;
               object.om++;
            }
        }
    }
    fout.close();
    remove("wednesdayCast.csv");
    rename("wednesdayCastnew.csv", "wednesdayCast.csv");
}
class costZi : public Cast
{
public:
    int totalMasa=0;
    int totalMachiaj=0;
    int costCamere2=0;
    int costCamere3=0;
    int costTransport=0;
    int totalCazare=0;
    int inchiriereSpatiu=0, apa=0, cafea=0, sucpers=0;
    float suc=0, bautura=0;
    
    void fileCost(int zile, int limba)
    {
        if ((numarPersoane + 132) % 50 != 0)
            costTransport = (((numarPersoane + 132) / 50 + 1) * 5680) * 2;
        else
            costTransport = (((numarPersoane + 132) / 50) * 5680) * 2;
        totalMasa = 40 * dietaOrice + 33 * dietaVegetariana + 46 * dietaFlexitariana;
        totalMachiaj = vampir * 230 + varcolac * 555 + sirene * 345 + clarvazator * 157 + om * 55;
        costCamere2 = (numarPersoane / 2 + numarPersoane % 2) * 350;
        costCamere3 = (132 / 3) * 420;
        totalCazare = costCamere2 + costCamere3;
        inchiriereSpatiu = zile * 10000 - 200 * zile;
        apa = ((numarPersoane + 132) * zile) / 2 + ((numarPersoane + 132) * zile) % 2;
        apa = apa * 6;
        cafea = ((numarPersoane + 132) * zile) / 2 + ((numarPersoane + 132) * zile) % 2;
        cafea = cafea * 30;
        sucpers = ((numarPersoane + 132) * zile);
        if (sucpers % 5 == 0)
            suc = (sucpers / 5) * 16;
        else if (sucpers % 5 == 1 || sucpers % 5 == 2)
            suc = ((sucpers / 5) * 2 + 1) * 0, 8;
        else if (sucpers % 5 == 3 || sucpers % 5 == 4)
            suc = (sucpers / 5 + 1) * 16;
        bautura = suc + cafea + apa;
        if (limba == 2)
        {

            fstream fout;
            fout.open("wednesdayCost.csv", ios::app);
           
            fout << "Costul pentru " << zile << " de zile: " << endl
                 << endl;
                  fout << "Transport:  " << costTransport/5 <<" k$: "<<endl;
            fout << "      ~Cazare:  " << (totalCazare * zile) / 5000 << " k$: " << endl;
            fout << "      ~Machiaj: " << (totalMachiaj * zile) / 5000 << " k$: " << endl;
            fout << "      ~Mancare: " << (totalMasa * zile) / 5000 << " k$: " << endl;
            fout << "      ~Bautura: " << bautura / 5000 << " k$: " << endl;
            fout << "      ~Inchiriere spatiu: " << inchiriereSpatiu / 5000 << " k$: " << endl
                 << endl;
            fout.close();
        }
        else if (limba == 1)
        {

            fstream fout;
            fout.open("wednesdayCost.csv", ios::app);
            
            fout << "Cost for " << zile << " of days: " << endl
                 << endl;
                 fout << "Transport: " << costTransport/5 <<" k$ "<<endl;
            fout << "      ~Accommodation: " << (totalCazare * zile) / 5000 << " k1$: " << endl;
            fout << "      ~Makeup: " << (totalMachiaj * zile) / 5000 << " k$: " << endl;
            fout << "      ~Food: " << (totalMasa * zile) / 5000 << " k$: " << endl;
            fout << "      ~Beverage: " << bautura / 5000 << " k$: " << endl;
            fout << "      ~Space rental: " << inchiriereSpatiu / 5000<< " k$: " << endl
                 << endl;
            fout.close();
        }
    }
    void fileCost(int limba)
{
    if (limba == 2)
    {

        fstream fout;
        fout.open("wednesdayCost.csv", ios::out);
        fout << " Costul pentru fiecare perioada: " << endl;
        fout.close();
    }
    else

        if (limba == 1)
    {
        fstream fout;
        fout.open("WednesdayCost.csv", ios::out);
        fout << " Cost for each period: " << endl;
        fout.close();
    }
}
};
void meniuRomana()
{
    fstream fout;
    fout.open("wednesdayMeniu.csv", ios::out);
    fout << "Ziua 1:" << endl
         << endl;
    fout << "~dimineata:" << endl;
    fout << "     ~Apt sa manance orice: platou(oua, branza, cascaval, rosii, castraveti, sunca, muschi, masline)" << endl;
    fout << "     ~Vegetarian: platou(rosii, castraveti, masline, ardei)" << endl;
    fout << "     ~Flexitarieni: platou(rosii, castraveti, masline, salata cu ton si porumb, ardei)" << endl;
    fout << "~pranz:" << endl;
    fout << "     ~Apt sa manance orice: supa de perisoare, snitel cu piure si salata de rosii cu castraveti, amandina" << endl;
    fout << "     ~Vegetarian: supa crema de legume cu crutoane, tocana de cartofi, negresa" << endl;
    fout << "     ~Flexitarian: supa crema de legume cu crutoane, tocana de cartofi, negresa" << endl;
    fout << "~seara:" << endl;
    fout << "     ~Apt sa manance orice: somon cu legume, salata de fructe" << endl;
    fout << "     ~Vegetarian: paste vegane, salata de fructe" << endl;
    fout << "     ~Flexitarian: somon cu legume, salata de fructe" << endl
         << endl
         << endl;
    fout << "Ziua 2:" << endl
         << endl;
    fout << "~dimineata:" << endl;
    fout << "     ~Apt sa manance orice: platou(oua, branza, cascaval, rosii, castraveti, sunca, muschi, masline)" << endl;
    fout << "     ~Vegetarian: platou(rosii, castraveti, masline, ardei)" << endl;
    fout << "     ~Flexitarieni: platou(rosii, castraveti, masline, salata cu ton si porumb, ardei)" << endl;
    fout << "~pranz:" << endl;
    fout << "     ~Apt sa manance orice: supa de pui, tochitura cu mamaliga, tarte" << endl;
    fout << "     ~Vegetarian: supa crema cu ciuperci, mancare de mazare, strudel cu mere" << endl;
    fout << "     ~Flexitarian: supa crema cu ciuperci, mancare de mazare, strudel cu mere" << endl;
    fout << "~seara:" << endl;
    fout << "     ~Apt sa manance orice: ceafa de porc la gratar, cartofi la cuptor, salata de legume, creme de zahar ars" << endl;
    fout << "     ~Vegetarian: legume la gratar, soia, crema de zahar ars" << endl;
    fout << "     ~Flexitarian: legume la gratar, pastrav, crema de zahar ars" << endl
         << endl
         << endl;
    fout << "Ziua 3:" << endl
         << endl;
    fout << "~dimineata:" << endl;
    fout << "     ~Apt sa manance orice: platou(oua, branza, cascaval, rosii, castraveti, sunca, muschi, masline)" << endl;
    fout << "     ~Vegetarian: platou(rosii, castraveti, masline, ardei)" << endl;
    fout << "     ~Flexitarieni: platou(rosii, castraveti, masline, salata cu ton si porumb, ardei)" << endl;
    fout << "~pranz:" << endl;
    fout << "     ~Apt sa manance orice: supa de vaca, cotlet de porc cu piure si salata de rosii cu castraveti, amandina" << endl;
    fout << "     ~Vegetarian: supa crema de legume cu crutoane, lasagna vedetariana, negresa" << endl;
    fout << "     ~Flexitarian: supa crema de legume cu crutoane, lasagna vegetariana, negresa" << endl;
    fout << "~seara:" << endl;
    fout << "     ~Apt sa manance orice: paste bologniese, papanasi" << endl;
    fout << "     ~Vegetarian: paste vegane, negresa " << endl;
    fout << "     ~Flexitarian: paste cu fructe de mare, negresa" << endl;
    fout.close();
}
void meniuEngleza()
{
    fstream fout;
    fout.open("wednesdayMenu.csv", ios::out);

    fout << "Day 1:" << endl
         << endl;
    fout << "  ~morning:" << endl;
    fout << "     ~Can eat anything: plate (eggs, cheese, cheese, tomatoes, cucumbers, ham, olives)" << endl;
    fout << "     ~Vegetarian: plate (tomatoes, cucumbers, olives, peppers)" << endl;
    fout << "     ~Flexitarians: plate (tomatoes, cucumbers, olives, tuna and corn salad, peppers)" << endl;
    fout << "  ~lunch:" << endl;
    fout << "     ~Able to eat anything: periwinkle soup, schnitzel with mash and tomato salad with cucumbers, almonds" << endl;
    fout << "     ~Vegetarian: vegetable cream soup with croutons, potato stew, blackberry" << endl;
    fout << "     ~Flexitarian: vegetable cream soup with croutons, potato stew, blackberry" << endl;
    fout << "  ~evening:" << endl;
    fout << "     ~Can eat anything: salmon with vegetables, fruit salad" << endl;
    fout << "     ~Vegetarian: vegan pasta, fruit salad" << endl;
    fout << "     ~Flexitarian: salmon with vegetables, fruit salad" << endl
         << endl
         << endl;
    fout << "Day 2:" << endl
         << endl;
    fout << "  ~morning:" << endl;
    fout << "     ~Can eat anything: plate (eggs, cheese, cheese, tomatoes, cucumbers, ham, olives)" << endl;
    fout << "     ~Vegetarian: plate (tomatoes, cucumbers, olives, peppers)" << endl;
    fout << "     ~Flexitarians: plate (tomatoes, cucumbers, olives, tuna and corn salad, peppers)" << endl;
    fout << "  ~lunch:" << endl;
    fout << "     ~He can eat anything: chicken soup, stew with chickpeas, tarts" << endl;
    fout << "     ~Vegetarian: mushroom cream soup, pea dish, apple strudel" << endl;
    fout << "     ~Flexitarian: cream soup with mushrooms, pea dish, apple strudel" << endl;
    fout << "  ~evening:" << endl;
    fout << "     ~He can eat anything: grilled pork neck, baked potatoes, vegetable salad, burnt sugar cream" << endl;
    fout << "     ~Vegetarian: grilled vegetables, soy, burnt sugar cream" << endl;
    fout << "     ~Flexitarian: grilled vegetables, trout, burnt sugar cream" << endl
         << endl
         << endl;
    fout << "Day 3:" << endl
         << endl;
    fout << "  ~morning:" << endl;
    fout << "     ~Can eat anything: plate (eggs, cheese, cheese, tomatoes, cucumbers, ham, olives)" << endl;
    fout << "     ~Vegetarian: plate (tomatoes, cucumbers, olives, peppers)" << endl;
    fout << "     ~Flexitarians: plate (tomatoes, cucumbers, olives, tuna and corn salad, peppers)" << endl;
    fout << "  ~lunch:" << endl;
    fout << "     ~He can eat anything: beef soup, pork cutlet with mash and tomato salad with cucumbers, almonds" << endl;
    fout << "     ~Vegetarian: vegetable cream soup with croutons, star lasagna, negresa" << endl;
    fout << "     ~Flexitarian: vegetable cream soup with croutons, vegetarian lasagna, negresa" << endl;
    fout << "  ~evening:" << endl;
    fout << "     ~Apt to eat anything: bolognese pasta, papanasi" << endl;
    fout << "     ~Vegetarian: vegan pasta, negresa " << endl;
    fout << "     ~Flexitarian: seafood pasta, black" << endl;
    fout.close();
}
int main()
{
    Cast cast;
    cast.setLanguage1("engleza");
    cast.setLanguage2("romana");
    cout << "Translations available: " << cast.getLanguage1() << " and " << cast.getLanguage2() << endl
         << endl;
    file(cast);
    costZi obiect;
    int language;
    cout << "Select language: " << endl;
    cout << "~Press 1 for english" << endl
         << "~Press 2 for romanian" << endl;
         cin>>language;
         try{
            
    if (language == 1)
    {
        meniuEngleza();
        cout << " You can find the menu for the 3 days in the file 'wednesdayMenu.csv'  "<<endl;
        cout << " You can find the cost for all periods in the file 'wednesdayCost.csv' " << endl;
        cout<<" You can find the personnel data in the file 'wednesdayCastEngleza' "<<endl;
        obiect.fileCost(language);
        obiect.fileCost(30, language);
        obiect.fileCost(45, language);
        obiect.fileCost(60, language);
        obiect.fileCost(100, language);
    }    
        else
        if (language == 2)
        {
        meniuRomana();
        cout << "Meniul pentru cele 3 zile il gasiti in fisierul 'wednesdayMeniu.csv'  " << endl;
        cout << " Costul pentru toate perioadele il gasiti in fisierul 'wednesdayCost.csv'  " << endl;
        cout<<" Datele despre personal le gasiti in fisierul 'wednesdayCast.csv' "<<endl;
        obiect.fileCost(language);
        obiect.fileCost(30, language);
        obiect.fileCost(45, language);
        obiect.fileCost(60, language);
        obiect.fileCost(100, language);
        }
        else
        throw language;
    }
    catch(int language)
    {  
        cout<<language<<" is not a valide choice!"<<endl;
    }

    return 0;
}
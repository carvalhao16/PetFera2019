#ifndef Animal_obj
#define Animal_obj
#include <iostream>
#include<string>
using namespace std;
class animal_obj
{
private:
    /* data */
public:
    string id;
    string nome_animal;
    string classe;
    string nome_cientifico;
    string sexo;
    string tamanho;
    string dieta;
    string veterinario;
    string tratador;
    string nome_batismo;
    animal_obj(/* args */);
    ~animal_obj();
};

animal_obj::animal_obj(/* args */)
{
}

animal_obj::~animal_obj()
{
}


#endif
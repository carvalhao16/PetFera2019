#include <stdio.h>
#include "classes/Tratador.cpp"
#include "classes/Mamifero.cpp"

using namespace std;

int main(int argc, char const *argv[])
{

    Tratador *tratador = new Tratador(1, 1, "Frankleiton", "107", 10, 2, '+', "Especialista");
    cout << tratador->getID();
    tratador->~Tratador();

    return 0;
}
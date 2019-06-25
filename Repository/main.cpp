#include "Repository.h"
#include "../classes/Animal.h"
#include <list>
#include "../classes/Funcionario.h"
int main(){
    // list<Funcionario*> funcionarios;
    // list<Animal*> animais;
    list<animal_obj> animais;
    repository *repo = new repository();
    // repo->creat_table();
    // repo->insert_table_animal("ok","ok","ok",'F',"10","ok","0","0","ok");
    // repo->select_table_animal();
    // // repo->delete_table_animal("1");
    // repo->insert_table_funcionario("ok","ok","ok","10","ok","+","ok","ok","10");
    // repo->select_table_funcionario();
    // repo->select_table_animal_id("1");
    // repo->select_table_funcionario_id("1");
    // repo->select_init_animal();
    // animais = repository::animais;
    for(auto i : animais){
        cout<< i.nome_animal << endl;
    }

    return 0;
}
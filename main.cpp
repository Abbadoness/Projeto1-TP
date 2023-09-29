///Usar compilador C++11.


#include <iostream>
#include <vector>
#include <string>


#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;
int main()
{


    cout << "TESTES DOMINIOS\n" << endl;

    TUCapacidade teste;
    switch(teste.run()){
        case TUCapacidade::SUCESSO: cout << "SUCESSO - CAPACIDADE" << endl;
                                    break;
        case TUCapacidade::FALHA  : cout << "FALHA   - CAPACIDADE" << endl;
    }

    TUCargo teste_cargo;
    switch(teste_cargo.run()){
        case TUCargo::SUCESSO: cout << "SUCESSO - CARGO" << endl;
                               break;
        case TUCargo::FALHA  : cout << "FALHA   - CARGO" << endl;
    }

    TUClassificacao teste_classificacao;
    switch(teste_classificacao.run()){
        case TUClassificacao::SUCESSO: cout << "SUCESSO - CLASSIFICACAO" << endl;
                                       break;
        case TUClassificacao::FALHA  : cout << "FALHA   - CLASSIFICACAO" << endl;
                                       break;
    }

    TUTipo teste_tipo;
    switch(teste_tipo.run()){
        case TUTipo::SUCESSO: cout << "SUCESSO - TIPO" << endl;
                              break;
        case TUTipo::FALHA  : cout << "FALHA   - TIPO" << endl;
    }

    TUCodigo teste_codigo;
    switch(teste_codigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }

    TUHorario teste_horario;
    switch(teste_horario.run()){
        case TUHorario::SUCESSO: cout << "SUCESSO - HORARIO" << endl;
                                 break;
        case TUHorario::FALHA  : cout << "FALHA   - HORARIO" <<endl;
                                 break;
    }

    TUMatricula teste_matricula;
    switch(teste_matricula.run()){
        case TUMatricula::SUCESSO: cout << "SUCESSO - MATRICULA" << endl;
                                   break;
        case TUMatricula::FALHA  : cout << "FALHA   - MATRICULA" << endl;
                                   break;
    }

    TUNome teste_nome;
    switch(teste_nome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - NOME" << endl;
                              break;
        case TUNome::FALHA  : cout << "FALHA   - NOME" << endl;
                              break;
    }

    TUSenha teste_senha;
    switch(teste_senha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                               break;
        case TUSenha::FALHA  : cout << "FALHA   - SENHA" << endl;
                               break;
    }

    TUTelefone teste_telefone;
    switch(teste_telefone.run()){
        case TUTelefone::SUCESSO: cout << "SUCESSO - TELEFONE" << endl;
                                  break;
        case TUTelefone::FALHA  : cout << "FALHA   - TELEFONE" << endl;
                                  break;
    }

    TUData teste_data;
    switch(teste_data.run()){
        case TUData::SUCESSO: cout << "SUCESSO - DATA" << endl;
                              break;
        case TUData::FALHA  : cout << "FALHA   - DATA" << endl;
                              break;
    }

    TUEmail teste_email;
    switch(teste_email.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
                               break;
        case TUEmail::FALHA  : cout << "FALHA   - EMAIL" << endl;
                               break;
    }

    cout << "\nTESTES ENTIDADES\n" << endl;

    TUParticipante teste_participante;
    switch(teste_participante.run()){
        case TUParticipante::SUCESSO: cout << "SUCESSO - PARTICIPANTE" << endl;
                                      break;
        case TUParticipante::FALHA  : cout << "FALHA   - PARTICIPANTE" << endl;
                                      break;
    }

    TUPeca teste_peca;
    switch(teste_peca.run()){
        case TUPeca::SUCESSO: cout << "SUCESSO - PECA" << endl;
                              break;
        case TUPeca::FALHA  : cout << "FALHA   - PECA" << endl;
                              break;
    }

    TUSessao sessao;
    switch(sessao.run()){
        case TUSessao::SUCESSO: cout << "SUCESSO - SESSAO" << endl;
                                break;
        case TUSessao::FALHA  : cout << "FALHA   - SESSAO" << endl;
                                break;
    }

    TUSala sala;
    switch(sala.run()){
        case TUSala::SUCESSO: cout << "SUCESSO - SALA" << endl;
                              break;
        case TUSala::FALHA  : cout << "FALHA   - SALA" << endl;
                              break;
    }

    return 0;
}

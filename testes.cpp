#define MATRICULA_VALIDA "01234"
#define NOME_VALIDO "Erasia Selma"
#define EMAIL_VALIDO "parte-local@dominio"
#define TELEFONE_VALIDO "(99)-987654321"
#define SENHA_VALIDA "Z9@abc23"
#define TIPO_VALIDO "melodrama"
#define HORARIO_VALIDO "18:30"
#define DATA_VALIDA "01/01/2000"
#define CODIGO_VALIDO "AA0000"
#define CLASSIFICACAO_VALIDA "18"
#define CARGO_VALIDO "ator"
#define CAPACIDADE_VALIDA "100"

#define Capacidade_INVALIDO "99"
#define Cargo_INVALIDO "proplayer"
#define Classificacao_INVALIDO "15"
#define Codigo_INVALIDO "aaBBBB"
#define Data_INVALIDO "29/02/2022"
#define Email_INVALIDO ".parte..local@dominio."
#define Horario_INVALIDO "23:46"
#define Matricula_INVALIDO "01123"
#define Nome_INVALIDO "carlos  cassiano"
#define Senha_INVALIDO "a2399#!@"
#define Telefone_INVALIDO "(10)-123456789"
#define Tipo_INVALIDO "musica"



#include "testes.h"
#include <string>
void TUCapacidade::setUp(){
    capacidade = new Capacidade();
    estado = SUCESSO;
}

void TUCapacidade::tearDown(){
    delete capacidade;
}

void TUCapacidade::testarCenarioSucesso(){
    try{
        capacidade->setValor(CAPACIDADE_VALIDA);
        if(capacidade->getValor() != CAPACIDADE_VALIDA){
            estado = FALHA;
        }
    }catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCapacidade::testarCenarioFalha(){
    try{
        capacidade->setValor(Capacidade_INVALIDO);
        estado = FALHA;
    }catch(invalid_argument &excecao){
        if(capacidade->getValor() == Capacidade_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUCapacidade::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUCargo::setUp(){
    cargo = new Cargo();
    estado = SUCESSO;
}

void TUCargo::tearDown(){
    delete cargo;
}

void TUCargo::testarCenarioSucesso(){
    try{
        cargo->setValor(CARGO_VALIDO);
        if(cargo->getValor() != CARGO_VALIDO){
            estado = FALHA;
        }
    }catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCargo::testarCenarioFalha(){
    try{
        cargo->setValor(Cargo_INVALIDO);
        estado = FALHA;
    }catch(invalid_argument &excecao){
        if(cargo->getValor() == Cargo_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUCargo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUClassificacao::setUp(){
    classificacao = new Classificacao;
    estado = SUCESSO;
}

void TUClassificacao::tearDown(){
    delete classificacao;
}

void TUClassificacao::testarCenarioSucesso(){
    try{
        classificacao->setValor(CLASSIFICACAO_VALIDA);
        if(classificacao->getValor() != CLASSIFICACAO_VALIDA){
            estado = FALHA;
        }
    }catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUClassificacao::testarCenarioFalha(){
    try{
        classificacao->setValor(Classificacao_INVALIDO);
        estado = FALHA;
    }catch(invalid_argument &excecao){
        if(classificacao->getValor() == Classificacao_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUClassificacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


void TUTipo::setUp(){
    tipo = new Tipo;
    estado = SUCESSO;
}

void TUTipo::tearDown(){
    delete tipo;
}

void TUTipo::testarCenarioSucesso(){
    try{
        tipo->setValor(TIPO_VALIDO);
        if(tipo->getValor() != TIPO_VALIDO){
            estado = FALHA;
        }
    }catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTipo::testarCenarioFalha(){
    try{
        tipo->setValor(Tipo_INVALIDO);
        estado = FALHA;
    }catch(invalid_argument &excecao){
        if(tipo->getValor() == Tipo_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUTipo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setValor(CODIGO_VALIDO);
        if(codigo->getValor() != CODIGO_VALIDO){
            estado = FALHA;
        }
    }catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setValor(Codigo_INVALIDO);
        estado = FALHA;
    }catch(invalid_argument &excecao){
        if(codigo->getValor() == Codigo_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUHorario::setUp(){
    horario = new Horario();
    estado = SUCESSO;
}

void TUHorario::tearDown(){
    delete horario;
}

void TUHorario::testarCenarioSucesso(){
    try{
        horario->setValor(HORARIO_VALIDO);
        if(horario->getValor() != HORARIO_VALIDO){
            estado = FALHA;
        }
    }catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUHorario::testarCenarioFalha(){
    try{
        horario->setValor(Horario_INVALIDO);
        estado = FALHA;
    }catch(invalid_argument &excecao){
        if(horario->getValor() == Horario_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUHorario::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUMatricula::setUp(){
    matricula = new Matricula;
    estado = SUCESSO;
}

void TUMatricula::tearDown(){
    delete matricula;
}

void TUMatricula::testarCenarioSucesso(){
    try{
        matricula->setValor(MATRICULA_VALIDA);
        if(matricula->getValor() != MATRICULA_VALIDA){
            estado = FALHA;
        }
    }catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUMatricula::testarCenarioFalha(){
    try{
        matricula->setValor(Matricula_INVALIDO);
        estado = FALHA;
    }catch(invalid_argument &excecao){
        if(matricula->getValor() == Matricula_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUMatricula::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUNome::setUp(){
    nome = new Nome;
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setValor(NOME_VALIDO);
        if(nome->getValor() != NOME_VALIDO){
            estado = FALHA;
        }
    }catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setValor(Nome_INVALIDO);
        estado = FALHA;
    }catch(invalid_argument &excecao){
        if(nome->getValor() == Nome_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUSenha::setUp(){
    senha = new Senha;
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setValor(SENHA_VALIDA);
        if(senha->getValor() != SENHA_VALIDA){
            estado = FALHA;
        }
    }catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setValor(Senha_INVALIDO);
        estado = FALHA;
    }catch(invalid_argument &excecao){
        if(senha->getValor() == Senha_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUTelefone::setUp(){
    telefone = new Telefone;
    estado = SUCESSO;
}

void TUTelefone::tearDown(){
    delete telefone;
}

void TUTelefone::testarCenarioSucesso(){
    try{
        telefone->setValor(TELEFONE_VALIDO);
        if(telefone->getValor() != TELEFONE_VALIDO){
            estado = FALHA;
        }
    }catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha(){
    try{
        telefone->setValor(Telefone_INVALIDO);
        estado = FALHA;
    }catch(invalid_argument &excecao){
        if(telefone->getValor() == Telefone_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUTelefone::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->setValor(DATA_VALIDA);
        if(data->getValor() != DATA_VALIDA){
            estado = FALHA;
        }
    }catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setValor(Data_INVALIDO);
        estado = FALHA;
    }catch(invalid_argument &excecao){
        if(data->getValor() == Data_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}




void TUEmail::setUp(){
    email = new Email;
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete email;
}

void TUEmail::testarCenarioSucesso(){
    try{
        email->setValor(EMAIL_VALIDO);
        if(email->getValor() != EMAIL_VALIDO){
            estado = FALHA;
        }
    }catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha(){
    try{
        email->setValor(Email_INVALIDO);
        estado = FALHA;
    }catch(invalid_argument &excecao){
        if(email->getValor() == Email_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//ENTIDADES

void TUParticipante::setUp(){
    participante = new Participante();
    estado = SUCESSO;
}

void TUParticipante::tearDown(){
    delete participante;
}

void TUParticipante::testarCenarioSucesso(){

    Matricula matricula;
    matricula.setValor(MATRICULA_VALIDA);
    participante->setMatricula(matricula);
    if(participante->getMatricula().getValor() != MATRICULA_VALIDA){
        estado = FALHA;
    }


    Nome nome;
    nome.setValor(NOME_VALIDO);
    participante->setNome(nome);
    if(participante->getNome().getValor() != NOME_VALIDO){
        estado = FALHA;
    }


    Nome sobrenome;
    sobrenome.setValor(NOME_VALIDO);
    participante->setSobrenome(sobrenome);
    if(participante->getSobrenome().getValor() != NOME_VALIDO){
        estado = FALHA;
    }


    Email email;
    email.setValor(EMAIL_VALIDO);
    participante->setEmail(email);
    if(participante->getEmail().getValor() != EMAIL_VALIDO){
        estado = FALHA;
    }


    Telefone telefone;
    telefone.setValor(TELEFONE_VALIDO);
    participante->setTelefone(telefone);
    if(participante->getTelefone().getValor() != TELEFONE_VALIDO){
        estado = FALHA;
    }


    Senha senha;
    senha.setValor(SENHA_VALIDA);
    participante->setSenha(senha);
    if(participante->getSenha().getValor() != SENHA_VALIDA){
        estado = FALHA;
    }

    Cargo cargo;
    cargo.setValor(CARGO_VALIDO);
    participante->setCargo(cargo);
    if(participante->getCargo().getValor() != CARGO_VALIDO){
        estado = FALHA;
    }
}

int TUParticipante::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

void TUPeca::setUp(){
    peca = new Peca;
    estado = SUCESSO;
}

void TUPeca::tearDown(){
    delete peca;
}

void TUPeca::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setValor(CODIGO_VALIDO);
    peca->setIdentificador(codigo);
    if(peca->getIdentificador().getValor() != CODIGO_VALIDO){
        estado = FALHA;
    }

    Nome nome;
    nome.setValor(NOME_VALIDO);
    peca->setNome(nome);
    if(peca->getNome().getValor() != NOME_VALIDO){
        estado = FALHA;
    }

    Tipo tipo;
    tipo.setValor(TIPO_VALIDO);
    peca->setTipo(tipo);
    if(peca->getTipo().getValor() != TIPO_VALIDO){
        estado = FALHA;
    }

    Classificacao classificacao;
    classificacao.setValor(CLASSIFICACAO_VALIDA);
    peca->setClassificacao(classificacao);
    if(peca->getClassificacao().getValor() != CLASSIFICACAO_VALIDA){
        estado = FALHA;
    }
}

int TUPeca::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

void TUSessao::setUp(){
    sessao = new Sessao;
    estado = SUCESSO;
}

void TUSessao::tearDown(){
    delete sessao;
}

void TUSessao::testarCenarioSucesso(){
    Codigo identificador;
    identificador.setValor(CODIGO_VALIDO);
    sessao->setIdentificador(identificador);
    if(sessao->getIdentificador().getValor() != CODIGO_VALIDO){
        estado = FALHA;
    }

    Data data;
    data.setValor(DATA_VALIDA);
    sessao->setData(data);
    if(sessao->getData().getValor() != DATA_VALIDA){
        estado = FALHA;
    }

    Horario horario;
    horario.setValor(HORARIO_VALIDO);
    sessao->setHorario(horario);
    if(sessao->getHorario().getValor() != HORARIO_VALIDO){
        estado = FALHA;
    }
}

int TUSessao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

void TUSala::setUp(){
    sala = new Sala;
    estado = SUCESSO;
}

void TUSala::tearDown(){
    delete sala;
}

void TUSala::testarCenarioSucesso(){
    Codigo identificador;
    identificador.setValor(CODIGO_VALIDO);
    sala->setIdentificador(identificador);
    if(sala->getIdentificador().getValor() != CODIGO_VALIDO){
        estado = FALHA;
    }

    Nome nome;
    nome.setValor(NOME_VALIDO);
    sala->setNome(nome);
    if(sala->getNome().getValor() != NOME_VALIDO){
        estado = FALHA;
    }

    Capacidade capacidade;
    capacidade.setValor(CAPACIDADE_VALIDA);
    sala->setCapacidade(capacidade);
    if(sala->getCapacidade().getValor() != CAPACIDADE_VALIDA){
        estado = FALHA;
    }
}

int TUSala::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}


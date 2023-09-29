#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

class TUCapacidade{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Capacidade *capacidade;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};



class TUCargo{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Cargo *cargo;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();
};



class TUClassificacao{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Classificacao *classificacao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};



class TUCodigo{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Codigo *codigo;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO = 0;
    const static int FALHA   = -1;
    int run();
};



class TUData{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Data *data;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO = 0;
    const static int FALHA   = -1;
    int run();
};



class TUEmail{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Email *email;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};



class TUHorario{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Horario *horario;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

//const string TUHorario::VALOR_VALIDO = "18:30";
//const string TUHorario::VALOR_INVALIDO = "23:46";

class TUMatricula{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Matricula *matricula;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

//const string TUMatricula::VALOR_VALIDO = "01234";
//const string TUMatricula::VALOR_INVALIDO = "01123";

class TUNome{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Nome *nome;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

//const string TUNome::VALOR_VALIDO = "Erasia Selma";
//const string TUNome::VALOR_INVALIDO = "Carlos  Cassiano";

class TUSenha{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Senha *senha;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

//const string TUSenha::VALOR_VALIDO = "z9@abc23";
//const string TUSenha::VALOR_INVALIDO = "senha100";

class TUTelefone{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Telefone *telefone;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

//const string TUTelefone::VALOR_VALIDO = "(99)-987654321";
//const string TUTelefone::VALOR_INVALIDO = "(50)-000000000";

class TUTipo{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Tipo *tipo;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

//const string TUTipo::VALOR_VALIDO = "melodrama";
//const string TUTipo::VALOR_INVALIDO = "musica";

///Classes para testes de unidades de classes entidades.

class TUParticipante{
private:
    Participante *participante;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUPeca{
private:
    Peca *peca;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUSessao{
private:
    Sessao *sessao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUSala{
private:
    Sala *sala;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

#endif // TESTES_H_INCLUDED

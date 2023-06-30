
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your
// favorite browser

#include <iostream>

using namespace std;

class pessoa {
private:
  string nome;
  int idade;
  int cpf;

public:
  pessoa() {}
  pessoa(string nome, const int idade, const int cpf) {
    this->nome = nome;
    this->idade = idade;
    this->cpf = cpf;
  }
  string getnome() { return this->nome; }
};

class aluno : public pessoa {
private:
  int ano_ingresso;
  int periodo;

public:
  aluno() {}
  aluno(string nome, const int idade, const int cpf, const int ano_ingresso,
        const int periodo)
      : pessoa(nome, idade, cpf) {
    this->ano_ingresso = ano_ingresso;
    this->periodo = periodo;
  }
};

class professor : public pessoa {
private:
  string dpt;

public:
  professor() {}
  professor(string nome, const int idade, const int cpf, string dpt)
      : pessoa(nome, idade, cpf) {
    this->dpt = dpt;
  }
};

struct lista {
  string disciplina;
  aluno al;
  professor prof;
  struct lista *prox;
};

void imprimirAlunoPorDisciplina(struct lista *pLista, string disciplina) {
  for (struct lista *listaAluno = pLista; listaAluno != nullptr;
       listaAluno = listaAluno->prox) {
    if (listaAluno->disciplina == disciplina) {
      std::cout << disciplina << " , " << listaAluno->al.getnome() << std::endl;
    }
  }
}

void imprimirDisciplinaPorAluno(struct lista *pLista, string nome) {
  for (struct lista *listaAluno = pLista; listaAluno != nullptr;
       listaAluno = listaAluno->prox) {
    if (listaAluno->al.getnome() == nome) {
      std::cout << listaAluno->disciplina << " , " << listaAluno->al.getnome()
                << std::endl;
    }
  }
}

int main() {
  aluno a1 = aluno("Leopoldo Teixeira", 38, 345, 2019, 4);
  aluno a2 = aluno("Henrique Rebelo", 39, 123, 2023, 1);
  aluno a3 = aluno("Adiel Bastos", 20, 323, 2021, 5);
  aluno a4 = aluno("Ramos R", 30, 125, 2020, 6);

  struct lista l1, l2, l3, l4, l5, l6, l7, l8;
  struct lista *resultado, *lista = &l1;

  l1.disciplina = "P1";
  l1.al = a1;
  l2.disciplina = "P1";
  l2.al = a2;
  l3.disciplina = "P1";
  l3.al = a3;

  l4.disciplina = "P2";
  l4.al = a4;

  l5.disciplina = "TAES";
  l5.al = a3;
  l6.disciplina = "TAES";
  l6.al = a4;

  l7.disciplina = "TALP";
  l7.al = a1;
  l8.disciplina = "TALP";
  l8.al = a2;

  l1.prox = &l2;
  l2.prox = &l3;
  l3.prox = &l4;
  l4.prox = &l5;
  l5.prox = &l6;
  l6.prox = &l7;
  l7.prox = &l8;
  l8.prox = (struct lista *)0;

  imprimirAlunoPorDisciplina(lista, "P1");
  imprimirDisciplinaPorAluno(lista, "Ramos R");

  return 0;
}
#ifndef __LISTA_HPP
#define __LISTA_HPP
#include <string>
#define MAXTAM 100
using namespace std;

struct Valor
{
  int v;
};


class Lista
{
public:
  Valor vet[MAXTAM];
  void create ();
  int inicio;
  int final;
  int SomaMaxima (Lista l, int a, int b);

};

#endif

#include <iostream>
#include <ctime>
#include "Lista.hpp"

using namespace std;



void
Lista::create ()
{
  srand (time (NULL));
  for (int i = 0; i < 100; i++)
    {
      vet[i].v = rand () % 200 -100;

    }
}

int
Lista::SomaMaxima (Lista l, int a, int b)
{
  if (a == b)
    {
      return l.vet[a].v;
    }

  int meio = (a + b) / 2;
  int direita = SomaMaxima (l, a, meio);
  int esquerda = SomaMaxima (l, meio + 1, b);

  int somaD = l.vet[meio].v;
  int auxD = l.vet[meio].v;
  for (int i = meio - 1; i > 0; i--)
    {
      somaD = somaD + l.vet[i].v;
      auxD = (auxD > somaD) ? auxD : somaD;
    }

  int somaE = l.vet[meio + 1].v;
  int auxE = l.vet[meio + 1].v;
  for (int i = meio + 2; i < b; i++)
    {
      somaE = somaE + l.vet[i].v;
      auxE = (auxE > somaE) ? auxE : somaE;
    }
  int resposta = (direita > esquerda) ? direita : esquerda;
  resposta = (resposta > (auxE + auxD)) ? resposta : (auxD + auxE);
  return resposta;

}

 
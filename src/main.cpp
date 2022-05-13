#include <iostream>
#include <string>
#include "Lista.hpp"
using namespace std;
int
main ()
{
  Lista l;
  int i, resultado;
  

  l.create ();			//cria a lista aleatoria
  cout << "O vetor aleatorio a ser analizado e:  " << endl;

  for (i = 0; i < 100; i++) //ate 99 para o ultimo membro nao ter virgula
    {
      cout << l.vet[i].v << ", ";	//imprime os valores de cada posicao na lista
    }
  
  resultado = l.SomaMaxima (l, 1, 99);

  cout << "\n===============================" << endl;
  cout << "a soma maxima e: " << resultado << endl;

  return 0;
}

#include "Ente.h"
int Ente::cont=0;
Ente::Ente()
  :pGG(NULL),
  id(cont),
  pFig(NULL)
{
  cont++;
};
Ente::~Ente():
{
  int id=-1;
};
Ente::desenhar()
{  
  //chamar gerenciador gráfico
};
Ente::setGG(GGrafico* pG):
{
   pGG=pG;
};

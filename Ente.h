#include<iostream>
//DAR INCLUDE EM GERENCIADOR GRÁFICO E FIGURA QUANDO PRONTOS
class GerenciadorGrafico{
  //implementar
};
class Figura{
  //implementar
};
class Ente
{
protected:
  int id;
  static int cont;
  GerenciadorGrafico* pGG;
  Figura* pFig;
public:
  Ente();
  virtual ~Ente();
  virtual void executar()=0;
  void desenhar();//analisar a possibilidade de tornar o método em virtual
  static void setGG(GerenciadorGrafico* pGG);
}
int Ente::cont=0;
//vincular nas outras classes derivadas

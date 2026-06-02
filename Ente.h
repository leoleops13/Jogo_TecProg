#pragma once
//DAR INCLUDE EM GERENCIADOR GRÁFICO E FIGURA QUANDO PRONTOS
class GGrafico;//gerenciadoGrafico
class Figura;
class Ente
{
protected:
  int id;
  static int cont;
  static GGrafico* pGG;
  Figura* pFig;
public:
  Ente();
  virtual ~Ente();
  virtual void executar()=0;
  void desenhar();//analisar a possibilidade de tornar o método em virtual
  static void setGG(GGrafico* pGG);
};
//vincular nas outras classes derivadas

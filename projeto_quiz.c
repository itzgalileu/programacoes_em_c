#include <stdio.h>

int main (void){

int pergunta, resposta, resposta2;
float pontuacao;
char nome[9];
for(int indice = 0; indice < 1; indice++){
 printf("Insira seu nome: ");
 scanf("%s", &nome[indice]);
}
printf("\nOlá, %s", nome);
printf("\nSeja bem-vindo ao programa no qual iremos abordar algumas questões de projeções cônicas e ortogonais com o professor Erberto.");
printf("\nAo responder as perguntas, insira 1 para SIM, e 2 para NÃO.");

printf("\nErberto: Oi! %s", nome);
printf("\nErberto: Tudo bem? Espero que sim!");

printf("\nErberto: Você tem dúvidas em relação ao conteúdo de projeções cônicas e ortogonais? \n(digite 1 para SIM, ou 2 para NÃO): ");
scanf("%i", &resposta);
if (resposta == 1){
  printf("\nErberto: Vou lhe explicar alguns conceitos em relação à PROJEÇÕES CÔNICAS E ORTOGONAIS! ;D");
  printf("\n");
  printf("\nErberto: Primeiro irei falar sobre a projeção cônica");
  printf("\nErberto: Projeção cônica é um tipo de projeção cartográfica em que a superfície da Terra é representada, sobre um cone imaginário, que está em contato com a esfera em determinado paralelo.");
  printf("\nErberto: \nos cinco elementos que compõem tanto a PROJEÇÃO CÔNICA como a ORTOGONAL são: \n *O OBJETO a ser projetado; \n *o PLANO PROJETANTE onde vai ser projetado o objeto; \n *o CENTRO DE PROJEÇÃO, de onde sairá os segmentos projetantes; \n *RETAS PROJETANTES as quais ligam o centro da projeção ao plano; \n *e a PROJEÇÃO, imagem formada no plano de projeção pela interseção das projetantes com esse plano.");
  printf("\n");
  printf("\nErberto: Entendido? %s", nome);
  printf("\ndigite 1 para SIM, ou 2 para NÃO: ");
  scanf("%i", &resposta2);
  if (resposta2 == 1){
    printf("\nErberto: Que bom, %s", nome);
    printf("\nEntão, vamos dar seguimento!");
    printf("\n");
    printf("\nErberto: Agora irei falar sobre a projeção ortogonal! ;D");
  printf("\nErberto: \nProjeções ortogonais são as figuras formadas no plano que resultam da projeção de todos os pontos de outra figura fora dele. Uma projeção ortogonal, portanto, pode ser imaginada como a sombra de uma figura geométrica em um plano sob o sol do meio-dia.");
  }else{
    printf("\nErberto: Veja, %s",nome);
    printf("\n");
    printf("\nErberto: O que faz a projeção cônica ser chamada de CÔNICA, é justamente as suas retas projetantes, por exemplo, em um cinema podemos dizer que a imagem projetada na tela sai de um centro de luz do projetor e forma a imagem que vemos, mais especificamente, um retângulo");

  }
  printf("\n");
  printf("\nErberto: Agora irei falar sobre a projeção ortogonal! ;D");
  printf("\nErberto: Projeções ortogonais são as figuras formadas no plano que resultam da projeção de todos os pontos de outra figura fora dele. Uma projeção ortogonal, portanto, pode ser imaginada como a sombra de uma figura geométrica em um plano sob o sol do meio-dia.");

}else{
 printf("\nErberto: Vamos para as perguntas, %s", nome);
}

   printf("\nErberto: De 1  a  5 escolha uma questão: ");
   scanf("%i", &pergunta);
 
switch(pergunta){
 
 case 1:
  //QUESTÃO 1
  printf("\nErberto: As retas projetantes da projeção cônica são paralelas? ");

  printf("\nErberto: Digite a resposta ");
  printf("\nDigite 1 para SIM, ou 2 para NÃO: ");
  scanf("%i", &resposta);

  if (resposta == 2){
  pontuacao = pontuacao + 2;
  printf("\nErberto: Resposta correta! Parabéns, %s", nome);
  }else{
  pontuacao = pontuacao + 0;
  printf("\nErberto: Resposta incorreta, %s", nome);
  }
  printf("\nErberto: Veja sua pontuação atual: %f", pontuacao);

  printf("\n||||||||||||||||||||||||||||||||||||||||||||||");

 case 2:
 //QUESTÃO 2
  printf("\nErberto: As retas projetantes da projeção ortogonal são distintas? ");
  
  printf("\nErberto: Digite a resposta ");
  printf("\nDigite 1 para SIM, ou 2 para NÃO: ");
  scanf("%i", &resposta);

  if (resposta == 2){
  pontuacao = pontuacao + 2;
  printf("\nErberto: Resposta correta! Parabéns %s", nome);
  }else{
  pontuacao = pontuacao + 0;
  printf("\nResposta incorreta %s", nome);
  }
  printf("\nVeja sua pontuação atual: %f", pontuacao);

  printf("\n||||||||||||||||||||||||||||||||||||||||||||||");

 case 3:
 //QUESTÃO 3
  printf("\nErberto: Imagine um paralelepípedo na vertical(em pé) amarrado ao uma corda ao meio dia. Será projetado um quadrado no plano(chão)? ");
  
  printf("\nErberto: Digite a resposta ");
  printf("\nDigite 1 para SIM, ou 2 para NÃO: ");
  scanf("%i", &resposta);

  if (resposta == 1){
  pontuacao = pontuacao + 2;
  printf("\nErberto: Resposta correta! Parabéns %s", nome);
  }else{
  pontuacao = pontuacao + 0;
  printf("\nErberto: Resposta incorreta %s", nome);
  }
  printf("\nErberto: Veja sua pontuação atual: %f", pontuacao);

  printf("\n||||||||||||||||||||||||||||||||||||||||||||||");

 case 4:
 //QUESTÃO 4
  printf("\nErberto: Em um cinema há técnicas e processos utilizados para captar e projetar numa tela imagens estáticas sequenciais (fotogramas) obtidas com uma câmera especial, dando impressão ao espectador de estarem em movimento. Dito isso, é perceptível que o cinema utiliza da PROJEÇÃO ORTOGONAL? ");
  
  printf("\nErberto: Digite a resposta ");
  printf("\nDigite 1 para SIM, ou 2 para NÃO: ");
  scanf("%i", &resposta);

  if (resposta == 2){
  pontuacao = pontuacao + 2;
  printf("\nErberto: Resposta correta! Parabéns, %s", nome);
  }else{
  pontuacao = pontuacao + 0;
  printf("\nErberto: Resposta incorreta %s", nome);
  }
  printf("\nErberto: Veja sua pontuação atual: %f", pontuacao);

  printf("\n||||||||||||||||||||||||||||||||||||||||||||||");

 case 5:
 //QUESTÃO 5
  printf("\nErberto: Ao imaginarmos um prisma triangular na horizontal (deitado) projetado às 5 horas da manhã, pode-se concluir que será projetado um TRIÂNGULO no plano(chão)?");
  
  printf("\nErberto: Digite a resposta ");
  printf("\nDigite 1 para SIM, ou 2 para NÃO: ");
  scanf("%i", &resposta);

  if (resposta == 2){
  pontuacao = pontuacao + 2;
  printf("\nErberto: Resposta correta! Parabéns %s", nome);
  }else{
  pontuacao = pontuacao + 0;
  printf("\nErberto: Resposta incorreta %s", nome);
  }
  printf("\nErberto: Veja sua pontuação atual: %f", pontuacao);

  printf("\n||||||||||||||||||||||||||||||||||||||||||||||");
break;
} 

  return 0;
}

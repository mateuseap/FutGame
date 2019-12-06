# FutGame
Jogo de Futebol 2D que estou desenvolvendo utilizando SFML e C++

Como executar o game (no terminal do Linux):

  Primeiramente, caso nao tenha a biblioteca SFML instalada no seu computador, é necessário que execute a instalacão da mesma para poder executar este algoritmo.  ̃

—— https://saulo.arisa.com.br/wiki/index.php/Instala

    O link acima mostra como efetuar, passo a passo, a instalacão dessa biblioteca. Agora, com o SFML instalado na sua máquina, para utilizar este algoritmo que foi implementado e criado utilizando C++ e uma biblioteca gráfica chamada SFML, basta seguir esses passos sequencialmente:
  
 Antes de tudo é necessário que você tenha o g++ instalado, caso já tenha pule esse passo, caso não, execute:
 
 0 - sudo apt-get install g++
 
 Agora utilize esses 3 comandos, nessa ordem:
  
 1 - g++ -c minisamico.cpp
 2 - g++ minisamico.cpp -o exec -lsfml-system -lsfml-graphics -lsfl-window
 3 - ./exec
  
 --
 
 Deixe o arquivo .cpp do game junto com a fonte ASMAN na mesma pasta!
 
 --

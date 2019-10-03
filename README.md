# VSSS ERUS

Projeto de VSSS (Very Small Sized Soccer) da ERUS, desenvolvido em C++.


# Instala��o de depend�ncias

Para compilar o projeto e utilizar o simulador, � necess�rio instalar a seguinte lista de pacotes:

`g++ cmake libxmu-dev libxi-dev protobuf-compiler libprotobuf-dev pkg-config libzmq5 libzmq3-dev libboost-all-dev libbullet-dev freeglut3 freeglut3-dev`

Caso o pacote `pkg-config` esteja indispon�vel, instale o `pkgconf`.

Utilize o gerenciador de pacotes da sua distribui��o, como `apt` ou `pacman`, para  instalar os pacotes listados.

Adicionalmente, � necess�rio compilar os subprojetos do simulador, o que pode ser feito por meio do script `vss-simulator/instalador.sh`. **Certifique-se de que todas as depend�ncias de pacotes foram instaladas antes de rodar os scripts, ou voc� TER� erros de compila��o**!

# Compila��o

Para compilar o projeto, basta executar o script bash `compile.sh`. Ele utiliza o CMAKE para compilar o c�digo fonte.

# Padr�es de c�digo

Primeiro coment�rio do arquivo

    /*
     * Nome do m�dulo
     * Ano de cria��o:
     * Descri��o do m�dulo:
     * Vers�o:
     * Pr�-requisitos (arquivos e bibliotecas necess�rias para compilar)
     * Membros:
     */



 Coment�rio de prot�tipo de fun��es (.h)

    /*
     * Nome da fun��o
     * Inten��o da fun��o:
     * Pr�-requisitos:
     * Efeitos colaterais:
     * Par�metros:
     * Retorno:
     */

**IMPORTANTE**: Coment�rios adicionais devem ser feitos no arquivo de implementa��o (.cpp) detalhando a implementa��o do c�digo.

# Dados da Equipe:
O VSSS-ERUS � uma equipe dedicada a implementa��o do desafio Very Small Size Soccer para competi��es. � um projeto da ERUS - Equipe de Rob�tica da UFES, e diversos documentos sobre o projeto podem ser encontrados no site da equipe.
- Site da ERUS : erus.ufes.br/
- E-mail da ERUS : erus@inf.ufes.br
- E-mail do VSSS-ERUS : vssserus@gmail.com

## Membros Atuais
- Gabriel Pietroluongo
    - gabrielpietroluongo@gmail.com
- Gabriel Valdino
    - gvaldino@yahoo.com
- Mayke Wallace
    - mayke.ace@hotmail.com
- Lara de Luca
    - lara2058@hotmail.com
- Lorena Bassani
    - lorenabassani12@gmail.com

## Membros Antigos
- Ricardo Ramos
    - ricardobraun20006@gmail.com
- Victor de Oliveira
    - makkakie97@gmail.com

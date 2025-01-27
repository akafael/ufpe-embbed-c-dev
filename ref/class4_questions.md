Instrucoes:
- ler as cinco questoes abaixo e suas respectivas descricoes da saida e implemente os programas em C correspondentes
- uma vez concluido as atividades, anexar aqui e submeter
- marcar essa task como concluida

Obs: podem submeter o codigo de cada questao como texto em comentario privado mesmo!
Obs: podem submeter como arquivo arquivo em .c ou unico com todas as questoes ou para cada questao... porem, no formato .txt, .doc, .pdf

(1) Faça o design de uma função "maior" que receba dois números [inteiros e positivos] e retorne o maior deles. Caso eles sejam iguais, deve-se mostrar a mensagem "Os números são iguais".

* Exemplo de execução – Exercício 1 - Caso de teste 1
Insira o primeiro número:
1
Insira o segundo número:
2
O maior é: 2

* Exemplo de execução – Exercício 1 - Caso de teste 2
Insira o primeiro número:
1
Insira o segundo número:
1
Os números são iguais

(2) Faça o design de uma função "isFirstGreater" que receba três números. No final o programa deve imprimir "Condição satisfeita", na tela, caso o primeiro dado inserido seja maior do que os outros dois (o primeiro não pode ser igual a nenhum). Caso contrário, deve ser impressa a mensagem: "Erro". OBS: use vetor/array de 3 posicoes para armazenar os numeros lidos.

*Exemplo de execução – Exercício 2 - Caso de teste 1
Insira o primeiro número:
3
Insira o segundo número:
2
Insira o terceiro número:
1
Condição satisfeita
*Exemplo de execução – Exercício 2 - Caso de teste 2
Insira o primeiro número:
2
Insira o segundo número:
3
Insira o terceiro número:
1
Erro

*Exemplo de execução – Exercício 2 - Caso de teste 3
Insira o primeiro número:
2
Insira o segundo número:
2
Insira o terceiro número:
1
Erro

(3) Faça o design de uma função "parImpar" que receba um número inteiro e verifique se esse número é par ou ímpar.

*Exemplo de execução – Exercício 3 - Caso de teste 1
Insira um número:
2
2 é par.

*Exemplo de execução – Exercício 3 - Caso de teste 2
Insira um número:
3
3 é impar.

(4) Desenvolva um algoritmo que peça ao usuário que preencha os dados de um vetor de 5 posições com valores reais quaisquer, desde que estejam compreendidos entre 1 e 100 (suponha que o usuário irá respeitar o enunciado). Depois, faça o design de uma função "dividir100" que divide o conteúdo de cada posição do vetor por 100. Ao final, o programa deve mostrar, na tela, o conteúdo de cada posição do vetor, dividido por 100.
* Exemplo de execução – Exercício 4 - Caso de teste
Insira o dado da posição  1:
10
Insira o dado da posição  2:
20
Insira o dado da posição  3:
30
Insira o dado da posição  4:
40
Insira o dado da posição  5:
50
Conteúdo dividido por 100:
 0.1
 0.2
 0.3
 0.4
 0.5

(5) Desenvolva um algoritmo que preencha um vetor numérico de 5 posições. Após preencher todo o vetor, o usuário deve inserir uma chave de busca X. Caso exista algum número igual a X, dentro do vetor, o algoritmo deve mostrar, na tela, o índice da primeira posição na qual X foi encontrado. Caso contrário, o algoritmo deve se encerrar com uma única mensagem, dizendo "Chave não encontrada.".

OBS: para essa questão nao é obrigatório usar uma função...

* Exemplo de execução – Exercício 5 - Caso de teste 1
Insira o dado da posição  1:
11
Insira o dado da posição  2:
12
Insira o dado da posição  3:
13
Insira o dado da posição  4:
14
Insira o dado da posição  5:
15
Insira a chave de busca:
15
Chave encontrada na posição:  5

* Exemplo de execução – Exercício 5 - Caso de teste 2
Insira o dado da posição  1:
11
Insira o dado da posição  2:
12
Insira o dado da posição  3:
13
Insira o dado da posição  4:
14
Insira o dado da posição  5:
15
Insira a chave de busca:
20
Chave não encontrada!

(6) Faça um programa que carregue dois vetores de dez elementos numéricos cada um e mostre um vetor resultante da intercalação desses dois vetores.                     
                 *Exemplo de execução – Exercício 6 - Caso de teste 1
Insira o dado vet1[0]:
10
Insira o dado vet1[1]:
20
Insira o dado vet1[2]:
30
Insira o dado vet1[3]:
40
Insira o dado vet1[4]:
50
Insira o dado vet1[5]:
60
Insira o dado vet1[6]:
70
Insira o dado vet1[7]:
80
Insira o dado vet1[8]:
90
Insira o dado vet1[9]:
100
Insira o dado vet2[0]:
11
Insira o dado vet2[1]:
12
Insira o dado vet2[2]:
13
Insira o dado vet2[3]:
14
Insira o dado vet2[4]:
15
Insira o dado vet2[5]:
16
Insira o dado vet2[6]:
17
Insira o dado vet2[7]:
18
Insira o dado vet2[8]:
19
Insira o dado vet2[9]:
20

Vetor resultante:
10  11  20  12  30  13  40  14  50  15  60  16  70  17  80  18  90  19  100  20

(7) Faça um programa que carregue um vetor com oito números inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante deve conter os números positivos. O segundo vetor resultante deve conter os números negativos. Cada vetor resultante vai ter no máximo oito posições, sendo que nem todas devem obrigatoriamente ser utilizadas. Imprima o conteúdo dos vetores resultantes, sem que sejam impressos "lixos de memória".

*Exemplo de execução – Exercício 7 - Caso de teste 1
Insira o dado vet1[0]:
1
Insira o dado vet1[1]:
-1
Insira o dado vet1[2]:
2
Insira o dado vet1[3]:
-2
Insira o dado vet1[4]:
3
Insira o dado vet1[5]:
-3
Insira o dado vet1[6]:
4
Insira o dado vet1[7]:
-4

Vetor de positivos:
1  2  3  4
Vetor de negativos:
-1  -2  -3  -4
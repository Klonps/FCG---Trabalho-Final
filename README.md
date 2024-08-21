# Relatório do Trabalho de Computação Gráfica

## Descrição Geral do Trabalho

Este trabalho teve como objetivo desenvolver uma aplicação de Computação Gráfica utilizando OpenGL. A aplicação implementa diversos conceitos estudados em sala de aula, como modelagem 3D, shaders, iluminação, e movimentação de câmera. A seguir, detalhamos as contribuições de cada membro da dupla, o processo de desenvolvimento e como os conceitos de Computação Gráfica foram aplicados na prática.

## Contribuições da Dupla

- **Bruno:** Instanciação dos zumbis e mapeamento de texturas dos zumbis, além de ser responsável pela implementação dos modelos de iluminação nos shaders, incluindo os cálculos de iluminação difusa e Blinn-Phong. Também foi responsável pela implementação das curvas de Bézier e movimentação dos zumbis.
  
- **João:** Implementou a renderização do cenário e personagem, aplicou texturas, além de ter trabalhado na movimentação da câmera e integração dos controles de navegação e foi responsável pela documentação e elaboração deste relatório.


## Desenvolvimento e Aplicação dos Conceitos de Computação Gráfica

Durante o desenvolvimento, aplicamos os seguintes conceitos de Computação Gráfica:

1. **Modelagem 3D:** Criamos modelos de objetos representados através de malhas poligonais complexas, como o personagem e os zumbis, e os renderizamos na cena.
2. **Shaders GLSL:** Implementamos shaders customizados para controlar a iluminação dos objetos.
3. **Iluminação:** Aplicamos o modelo de iluminação de Phong para simular a iluminação difusa, especular e ambiente.
4. **Câmera:** Implementamos uma câmera do tipo 'free camera' que permite navegação do personagem na cena, além de uma cãmera do tipo 'Look-At'.
5. **Texturização:** Aplicamos texturas às superfícies dos objetos para adicionar detalhes visuais.
6. **Movimentação e Interação:** Configuramos a movimentação da câmera e a interação com os objetos usando o teclado e o mouse.

## Imagens do Funcionamento da Aplicação

![imagem 1](https://github.com/Klonps/FCG---Trabalho-Final/blob/main/Laboratorio_5_Codigo_Fonte/data/imagem(1).png)

![imagem 2)](https://github.com/Klonps/FCG---Trabalho-Final/blob/main/Laboratorio_5_Codigo_Fonte/data/imagem(2).png)

## Manual de Utilização

- **WASD:** Movimenta o personagem para frente, trás, esquerda e direita.
- **Mouse:** Controla a rotação da câmera(segurando botão esquerdo).
- **Tecla C:** Troca de cãmera Free para Look-At e vice-versa.
- **Tecla ESC:** Fecha a aplicação.

## Passos para Compilação e Execução

1. **Pré-requisitos:** 
   - Certifique-se de ter o **Code::Blocks** instalado, juntamente com os compiladores e bibliotecas necessárias, como **GLFW** e **GLEW**.

2. **Abrir o Projeto:**
   - Abra o Code::Blocks.
   - Vá para **File** > **Open...** e selecione o arquivo do projeto (`.cbp` ou o diretório onde o projeto está localizado).

3. **Compilar o Projeto:**
   - Com o projeto aberto, clique em **Build** > **Build** (ou pressione `F9`).
   - O Code::Blocks irá compilar o código automaticamente.

4. **Executar a Aplicação:**
   - Após a compilação bem-sucedida, clique em **Build** > **Run** (ou pressione `Ctrl + F10`) para executar a aplicação diretamente no Code::Blocks.
   - A aplicação será aberta em uma janela separada.

5. **Resolução de Problemas:**
   - Se houver problemas na compilação ou execução, verifique se todas as bibliotecas necessárias estão corretamente configuradas no Code::Blocks.
   - Revise as configurações do projeto em **Project** > **Build Options** para garantir que tudo está apontando para os diretórios corretos.

// MathLibrary.h - Contains declarations of math functions
#pragma once

/*
Quando a macro MATHLIBRARY_EXPORTS � definida, 
a macro MATHLIBRARY_API define o modificador __declspec(dllexport) nas declara��es da fun��o.
Esse modificador instrui o compilador e o vinculador a exportar uma fun��o ou vari�vel da DLL para uso por outros aplicativos.

Quando MATHLIBRARY_EXPORTS est� indefinido, 
por exemplo, quando o arquivo de cabe�alho � inclu�do por um aplicativo cliente, 
MATHLIBRARY_API aplica o modificador __declspec(dllimport) �s declara��es.
*/
#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)
#endif

extern "C" MATHLIBRARY_API int somar(
    const int a, const int b);


extern "C" MATHLIBRARY_API int multiplicar(
    const int a, const int b);

 #pragma once

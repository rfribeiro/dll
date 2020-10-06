// MathLibrary.h - Contains declarations of math functions
#pragma once

/*
Quando a macro MATHLIBRARY_EXPORTS é definida, 
a macro MATHLIBRARY_API define o modificador __declspec(dllexport) nas declarações da função.
Esse modificador instrui o compilador e o vinculador a exportar uma função ou variável da DLL para uso por outros aplicativos.

Quando MATHLIBRARY_EXPORTS está indefinido, 
por exemplo, quando o arquivo de cabeçalho é incluído por um aplicativo cliente, 
MATHLIBRARY_API aplica o modificador __declspec(dllimport) às declarações.
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

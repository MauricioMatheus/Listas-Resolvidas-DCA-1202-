/* Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de
atribuição são ilegais? */


    int i, j;
    int *p, *q;
    p = i; // Inválido (Programa ainda compila)
    q = &j; // Correto
    p = &*&i; // Correto
    i = (*&)j; // Inválido (Programa não compila)
    i = *&j; // Correto
    i = *&*&j; // Correto
    q = *p; // Inválido (Programa ainda compila)
    i = (*p)++ + *q; // Correto
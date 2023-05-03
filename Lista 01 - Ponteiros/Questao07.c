/*Considerando a declaração int mat[4], *p, x;, quais das seguintes expressões são válidas?
Justifique.*/

p = mat + 1; // Válido. p está sendo definido como um ponteiro para mat + 1, ou mat[5];

p = mat++; /* Inválido. Não é possivel fazer incrementação de tipo int ao ponteiro; */

p = ++mat; // Notação inválida.

x = (*mat)++; // Válido. O resultado seria o endereço em mat[0] incrementado em 1.

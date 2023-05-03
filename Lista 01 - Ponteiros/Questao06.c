/* Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam o
valor do terceiro elemento do vetor?*/

*(pulo + 2); // ALTERNATIVA CORRETA. Referencia o valor do terceiro elementro do vetor, pulo[2];
*(pulo + 4);// Fornece o valor do quinto elemento do vetor, pulo[4];
pulo + 4; // Fornece o endereço do quinto elemento do vetor, &pulo[4];
pulo + 2; // Formece o endereço do terceiro elemento do vetor, &pulo[2].
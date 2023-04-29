/*. Suponha que as seguintes declarações tenham sido realizadas:*/

float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;

/*Identifique quais dos seguintes comandos é válido ou inválido:*/

aloha[2] = value; // Válido.
scanf("%f", &aloha); // Válido.
aloha = value; // Inválido.
printf("%f", aloha); // Válido.
coisas[4][4] = aloha[3]; // Teoricamente é válido, no entanto, não há um valor definido para aloha[3].
coisas[5] = aloha; // Inválido.
pf = value; // Inválido.
pf = aloha; // Válido.


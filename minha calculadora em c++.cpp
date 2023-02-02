#include <stdio.h>
 int soma (int num1, int num2){
 	
return num1 + num2;
}
int subtracao (int num1, int num2){
	return num1 - num2;
	
}
int multiplicacao (int num1, int num2){
	return num1 * num2;
}
int divisao ( int num1, int num2){
return num1 / num2;
	
}
int main(){
	int escolha;
int num1, num2;
printf ("Minha calculadora em C++ \n");
printf ("Escolha uma operacao: \n ");
printf("1 = soma. 2 = subtracacao. 3 = multiplicacao. 4 = divisao: \n");
printf ("Escolha: \n");
scanf("%d",& escolha);
printf("digite os numeros: ");
scanf ("%d",& num1);
printf("digite outro: ");
scanf ("%d", & num2);

switch (escolha){


case 1:
printf ("A soma e: %d\n", soma(num1,num2));
	break;
	
	case 2:
printf ("A subtracao e: %d\n", subtracao(num1,num2));
	break;
	case 3:
printf ("A multiplicacao e: %d\n", multiplicacao(num1,num2));
break;

	case 4:
printf ("A divisao e: %d\n", divisao(num1,num2));

case 5:

return 0;
}

}

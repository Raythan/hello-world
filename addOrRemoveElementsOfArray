#include <stdlib.h>
#include <stdio.h>

int main() {
// Acrescentar ou remover números dentro de um vetor de inteiros
	int decision = 0, newVet = 0, n, i, d, add, aux, ind;
	char autor[] = ("\n\nClosing software down!\nThis software have been produced and distribuited for\nRaythan Padovani Abreu Machado.");
	{
		int vet[n];
		while(decision==0){
			char rollback[] = ("Do you want to exit?\n(1) - Yes.\n(2) - No."), // Finalização do software
			option1[] = ("1 - Increase elements on N position of a N size vector.\n"), // Operação de adcionar elementos
			option2[] = ("2 - Decrease elements of N position of a N size vector.\n"), // Operação de eliminar elementos
			option3[] = ("3, 0 - Exit!\n"), // Questionamento de finalização do algoritmo
			option4[] = ("Do you want to use the same vector?\n(1) - Yes.\n(2) - No."); // Questionamento para saber se utilizará o mesmo vetor ou não
			system("cls");
			if(newVet==0){
				printf("This software make 2 operations.\n");
			}
			printf("Please info what you want to do.\n");
			printf(option1); printf(option2); printf(option3);
			scanf("%d", &d);
			system("cls");
			{
				if((newVet==0 && d==1) || (newVet==0 && d==2)){ // Vector building
					printf("Plase info the vector size: \n");
					scanf("%d", &n);
					system("cls");
					printf("Plase input the vector elements: \n");
					for(i=0;i<n;i++){
						printf("\nInput the value on index[%d]: ", (i+1));
						scanf("%d", &vet[i]);
					}
				}
				system("cls");
				printf("\n +--------------------+\n| This is your vector! |\n +--------------------+\n ");
				for(i=0;i<n;i++){
					printf("-------");
				}
				printf("\n|");
				for(i=0;i<n;i++){
					printf(" [ %d ] ", vet[i]);
				}
				printf("|\n ");
				for(i=0;i<n;i++){
					printf("-------");
				}
				printf("\n");
				if(d==1){
					// Inserting elements where pointed by user
					printf("\nPlease info where did you want to add a number? 1 - %d\n", (n + 1));
					scanf("%d", &ind);
					printf("Please info what number do you want to add:\n");
					scanf("%d", &add);
					ind--;
					n++;
					for(i=ind;i<n;i++){
						aux = vet[i]; vet[i] = add; add = aux;
					}
					system("cls");
					printf("\n +------------------------+\n| Now this is your vector! |\n +------------------------+\n ");
					// Vector print
					for(i=0;i<n;i++){
						printf("-------");
					}
					printf("\n|");
					for(i=0;i<n;i++){
						printf(" [ %d ] ", vet[i]);
					}
					printf("|\n ");
					for(i=0;i<n;i++){
						printf("-------");
					}
					printf("\n\n%s\n", rollback); //Decisão se continuar ou não
					scanf("%d", &decision);
					if(decision==2){
						decision = 0;
						printf("\n%s\n", option4);
						scanf("%d", &newVet);
						if(newVet==2){
							newVet = 0;
						}
					}else{
						printf(autor);
						decision = 1;
					}
				}else if(d==2){
					printf("\nPlease info where did you want to remove a number? 1 - %d\n", n);
					scanf("%d", &ind);
					ind--;
					for(i=ind;i<(n-1);i++){
						vet[i] = vet[(i+1)];
					}
					n--;
					system("cls");
					printf("\n +------------------------+\n| Now this is your vector! |\n +------------------------+\n ");
					// Vector print
					for(i=0;i<n;i++){
						printf("-------");
					}
					printf("\n|");
					for(i=0;i<n;i++){
						printf(" [ %d ] ", vet[i]);
					}
					printf("|\n ");
					for(i=0;i<n;i++){
						printf("-------");
					}
					printf("\n\n%s\n", rollback); //Decisão se continuar ou não
					scanf("%d", &decision);
					if(decision==2){
						decision = 0;
						printf("\n%s\n", option4);
						scanf("%d", &newVet);
					if(newVet==2){
						newVet = 0;
					}
					}else{
						printf(autor);
						decision = 1;
					}
				}else{
					system("cls");
					printf(autor);
					decision = 1;
				}
			}
		}
	}
	return 0;
}

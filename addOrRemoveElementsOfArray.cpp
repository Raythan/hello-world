// Mixar 2 matrizes
// Multiplicação de matrizes
// Lista de compradores e produtos

#include <stdlib.h>
#include <stdio.h>

void printVector(int n, int vet[]){
	int i = 0;
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
}

void printVector2(int n, int vet[]){
	int i = 0;
	printf("\n +------------------------+\n| Now this is your vector! |\n +------------------------+\n ");
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
}

int main() {
	//Add or remove numbers inside an array of integer
	int decision = 0, // Decision for loop the architecture while the user wants
	decision2 = 0, // Decision for avoid invalid input on insert elements on array
	newVet = 0, 
	n = 0, 
	i, 
	d, 
	add, 
	aux, 
	ind;
	char autor[] = ("\n\nClosing software down!\nThis software have been produced and distribuited for\nRaythan Padovani Abreu Machado.");
	{
		int vet[n];
		while(decision==0){
			int decision3 = 3; // Decision for avoid invalid input on rollback and decision
			char rollback[] = ("Do you want to exit?\n(1) - Yes.\n(2) - No."), // Finalização do software
			option1[] = ("1 - Increase elements on N position of a N size vector.\n"), // Operation for input elements
			option2[] = ("2 - Decrease elements of N position of a N size vector.\n"), // Operation for remove elements
			option3[] = ("3, 0 - Exit!\n"), // Query for exit script
			option4[] = ("Do you want to use the same vector?\n(1) - Yes.\n(2) - No."); // Query for use the same vector
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
					while(n==0){
						//void lerVetor(int n, int i, int vet[]);
						printf("Plase info the vector size: \n");
						scanf("%d", &n);
						system("cls");
						for(i=0&&n!=0;i<n;i++){
							printf("\nInput the value on index[%d]: ", (i+1));
							scanf("%d", &vet[i]);
						}
					}
				}
				system("cls");
				
				printVector(n, vet);
				
				if(d==1){
					while(decision2!=n){ // loop for avoid mistake
						// Inserting elements where pointed by user
						printf("\nPlease info where did you want to add a number? 1 - %d\n", (n + 1));
						scanf("%d", &ind); 
						decision2 = ind; // Increased rule 15-08
						if(decision2 > (n+1) || decision2 == 0){
							printf("\nPlease input a valid number!!\n");
							scanf("%d", &ind); 
							decision2 = ind; // Increased rule 15-08
							if(decision2 > (n+1) || decision2 == 0){
								system("cls");
							}
						}else if(decision2 <= (n+1)){
							decision2 = n;
						}
					}
					printf("Please info what number do you want to add:\n");
					scanf("%d", &add);
					ind--;
					n++;
					for(i=ind;i<n;i++){
						aux = vet[i]; vet[i] = add; add = aux;
					}
					system("cls");
					
					printVector2(n, vet);
				
					while(decision3>2){ // loop for avoid mistake // Loop for avoid mistake
						printf("\n\n%s\n", rollback); //Decision for continue or not
						scanf("%d", &decision);
						if(decision==2){
							decision = 0;
							printf("\n%s\n", option4);
							scanf("%d", &newVet);
							decision3 = 1;
							if(newVet==2){
								newVet = 0; n = 0;
							}
						}else{
							printf(autor);
							decision = 1;
							decision3 = 1;
						}
					}
				}else if(d==2&&n>1){
					printf("\nPlease info where did you want to remove a number? 1 - %d\n", n);
					scanf("%d", &ind);
					ind--;
					for(i=ind;i<(n-1);i++){
						vet[i] = vet[(i+1)];
					}
					n--;
					system("cls");
					
					printVector2(n, vet); // Print Vector
					
					printf("\n\n%s\n", rollback); //Decision for continue or not
					scanf("%d", &decision);
					if(decision==2){
						decision = 0;
						printf("\n%s\n", option4);
						scanf("%d", &newVet);
					if(newVet==2){
						newVet = 0; n = 0;
					}
					}else{
						printf(autor);
						decision = 1;
					}
				}else if(d==2&&n<2){
					printf("\n\n------This vector is too small for delete elements.------\n");
					printf("\n\n%s\n", rollback); //Decision for continue or not
					scanf("%d", &decision);
					if(decision==2){
						decision = 0;
						printf("\n%s\n", option4);
						scanf("%d", &newVet);
					if(newVet==2){
						newVet = 0; n = 0;
					}
					}else{
						printf(autor);
						decision = 1;
					}
				}
				else{
					system("cls");
					printf(autor);
					decision = 1;
				}
			}
		}
	}
	return 0;
}

void readVector(int tam, int count, int vetor[]){
	
}


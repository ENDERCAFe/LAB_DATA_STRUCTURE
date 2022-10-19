#include <stdio.h>
#include <stdbool.h>

// function prototype
void MainMenu();
int inputChoice();
void array_1D();
void SelectArray_2D();
void array_2DROW();
void array_2DCOLUMN();



void main(){  //Main function
	while(true){
		MainMenu();
		int choice = inputChoice();
		switch(choice){
			case 1:
				array_1D();
				break;
			case 2:
				SelectArray_2D();
				break;
			case 3:
				printf("<------------------>\n");
				return ;
		}
	}
}

int inputChoice(){  //InputChoice function
		int input;
		scanf("%d", & input);
		return input;
}

void MainMenu(){  //MainMenu function
		printf("<------------------>\n");
		printf("Program Array\n");
		printf("1. Array 1D\n");
		printf("2. Array 2D\n");
		printf("3. Exit\n");
		printf("Enter > ");
}

void array_1D(){  //Calculate Array 1D function
		int L0, i, L, C;
		int LOC;
			printf("<------------------>\n");
			printf("input L0: ");
			scanf("%d", &L0);
			printf("input i: ");
			scanf("%d", &i);
			printf("input L: ");
			scanf("%d", &L);
			printf("input C: ");
			scanf("%d", &C);
			LOC = L0 + (i-L) * C;
			printf("\n");
			printf("Ans -> %d\n", LOC);
			printf("<------------------>\n");
			printf("\n");

	return;
}

void Array_2D_Menu(){  //Array_2D_Menu function
		printf("<------------------>\n");
		printf("Array2D Select\n");
		printf("1. Array 2DROW\n");
		printf("2. Array 2DCOLUM\n");
		printf("3. Exit\n");
		printf("Enter > ");
}

void SelectArray_2D(){  //Select Type To Calculate Array_2D function
		Array_2D_Menu();
		int choice = inputChoice();
		switch(choice){
			case 1:
				array_2DROW();
				break;
			case 2:
				array_2DCOLUMN();
				break;
			case 3:
				printf("<------------------>\n");
				return;
		}
}

void array_2DROW(){  //Calculate Array 2D By Row function
	int L0, L1, L2,  U2, i, J, C ;
		int LOC;
			printf("<------------------>\n");
			printf("inputarray 2D\n");
			printf("input L0: ");
			scanf("%d", &L0);
			printf("input L1: ");
			scanf("%d", &L1);
			printf("input L2: ");
			scanf("%d", &L2);
			printf("input U2: ");
			scanf("%d", &U2);
			printf("input i: ");
			scanf("%d", &i);
			printf("input J: ");
			scanf("%d", &J);
			printf("input C: ");
			scanf("%d", &C);
			LOC = L0 + ((L1 - L2) + C * (U2 - L2 + 1 ) * (i - L1) + C * (J - L2));
			printf("\n");
			printf("Ans -> %d\n", LOC);
			printf("<------------------>\n");
			printf("\n");
	return;
}

void array_2DCOLUMN(){  //Calculate Array 2D By Column function
	int L0, L1, L2, U1, i, J, C ;
		int LOC;
			printf("<------------------>\n");
			printf("inputarray 2D\n");
			printf("input L0: ");
			scanf("%d", &L0);
			printf("input L1: ");
			scanf("%d", &L1);
			printf("input L2: ");
			scanf("%d", &L2);
			printf("input U1: ");
			scanf("%d", &U1);
			printf("input i: ");
			scanf("%d", &i);
			printf("input J: ");
			scanf("%d", &J);
			printf("input C: ");
			scanf("%d", &C);
			LOC = L0 + ((L1 - L2) + C * (U1 - L1 + 1 ) * (J - L2) + C * (i - L1));
			printf("\n");
			printf("Ans -> %d\n", LOC);
			printf("<------------------>\n");
			printf("\n");
	return;
}

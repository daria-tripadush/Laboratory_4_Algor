#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "ua");

	int a,t;
	

	printf("Введiть номер завдання: (1-4)");
	scanf("%d", &a);

	if(a == 1) 
	{
		 exerciceOne();
		
	}
	else if (a == 2) 
	{
		printf("Введiть тип завдання: (1-3)");
		scanf("%d", &t);
		if(t == 1) {
			exerciceOTwoA();
		}
		else if(t == 2) {
			exerciceTwoB();
		}
		else if(t == 3) {
			exerciceTwoC();
		}
		else {
			printf("Такого типу завдання 2 немає!");
		}
		
	} 
	else if (a == 3) 
	{
		exerciceThree();
	}
	else if (a == 4) 
	{
		exerciceFour();
	}	
	else {
		printf("Такого завдання немає! \n\n\n\n");
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}

int exerciceOne() {
	int x;
    int y;
	int z;
    float a;
 
    printf("Введiть значення x= ");
	scanf("%d",&x);
	printf("Введiть значення y= ");
	scanf("%d",&y);
	printf("Введiть значення y= ");
	scanf("%d",&z);

	while((pow(x,2)*y-z) < 0) {
		printf("Помилка! Корень з від'ємного числа!");
		printf("Введiть значення x= ");
		scanf("%d",&x);
		printf("Введіть значення y= ");
		scanf("%d",&y);
		printf("Введiть значення y= ");
		scanf("%d",&z);
		
	}
	while((x+y+z) <= 0) {
		printf("Помилка! Логарифм з 0, з від'ємного числа!");
		printf("Введiть значення x= ");
		scanf("%d",&x);
		printf("Введіть значення y= ");
		scanf("%d",&y);
		printf("Введiть значення y= ");
		scanf("%d",&z);
		
	}	
	a =  sqrt(pow(x,2)*y-z)+log2(x+y+z);
	printf("%f", a);
	return 0;
}
int exerciceOTwoA() {
	
	long long int multiplication = 0;
	
	for(int i = 1 ; i <= 100; i++) {
		if((i%2) == 0) {
			multiplication += i; 
		}
	}
	printf("%d\n", multiplication);
	return 0;
}
int exerciceTwoB() {
	// з використанням циклу з передумовою
	

	long long int multiplication = 0;

	int i = 1;
	while(i<=100) {
		
		if((i%2) == 0) {
			multiplication += i; 
			
		}
		i++;
	}
	printf("%d\n", multiplication);
	return 0;
}

int exerciceTwoC() {
	//  з використанням циклу з післяумовою

	long long int multiplication = 0;
	
	
	int i = 1;
	do {
		if (i % 2 == 0 ) {
			multiplication += i;
		}
		i++;
	} while (i <= 100);
	printf("%d\n", multiplication);

}
int exerciceThree() {
	int n,x;

	printf("Введіть натуральне число n (1-9)");
	scanf("%d",&n);
	while(n == 0 || n > 9) {
		
		printf("Натуральне число (1-9) \nВведіть натуральне число (1-9)");
		scanf("%d",&n);
	}
	printf("Введіть ціле число x ");
	scanf("%d",&x);
		
	int j, i, s, p = 0;
	for (i = 1; i <= n; i++){ 
		for (s = 1, j = 2;j <= n; j++) s += x+i+j;
		p += s;
	}
	printf("p=%d\n", p);
	return 0;
}
int exerciceFour() {
	double a = 3,b = 6,dx=0.05, y,x;
	printf("\t   x\t\t|\t  y=f(x)\n\n");
	
	while(a<=b) {
		x = a;
		y = exp(pow(2*x,1/2))*pow(x,2);
		printf("\t%f\t|\ty=%f\n",x,y);
		a +=dx;
	}
	return 0;
}


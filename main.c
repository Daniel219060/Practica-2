

int main(int argc, char** argv) {
	srand(time(0));
	int op, n, sumaU=0, sumaD=0;
	do{
		n=1+rand()%(11-2+1);
		if(n==11 || n==1){
			printf("A\t");
		}
		if(n==10){
			printf("K, Q, J, 10\t");
		}
		else{
			printf("%d\t", n);
		}
		sumaU=sumaU+n;
		if(sumaU>21){
			printf("Perdiste!!!");
			break;
		}
		printf("Presiona 1 para otra carta, 0 para acabar turno");
		scanf("%d", &op);
	}while(op!=0);
	
	do{
		n=1+rand()%(11-2+1);
		if(n==11 || n==1){
			printf("A\t");
		}
		if(n==10){
			printf("K, Q, J, 10\t");
		}
		else{
			printf("%d\t", n);
		}
		sumaD=sumaD+n;
	}while(sumaD>sumaU);
	
	if(sumaD<sumaU && sumaU<=21){
		printf("Tu=%d vs Dealer=%d\n", sumaU, sumaD);
		printf("GANASTE!!!");
	}
	if(sumaD<sumaU && sumaD<=21){
		printf("Tu=%d vs Dealer=%d\n", sumaU, sumaD);
		printf("Perdiste!!!");
	}
	return 0;
}

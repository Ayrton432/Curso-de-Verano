bool esPrimo(int num) {
	int divisor = 1, divisores = 0;
	do {
		if (num % divisor == 0) {
			divisores++;
		}
		divisor++;
	} while (divisor <= num);
	if (divisores == 2) {
		return true;
	}
	else {
		return false;
	}
}



/ programa que indique si es primo o no
	
bool es_primo(int num){
	for (int i = 1; i <= num/2; i++) {
		if (num == 1) {
			return true;
		}
		if (num % i == 0) {
			if (i == num/2) {
				return false;
			}
		continue;
		}
		else if ((num % i != 0) && (i == num / 2)) {
			return true;
		}
	}}

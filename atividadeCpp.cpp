
#include <iostream>
using namespace std;


int main() {
	char repetir;
	int atv;
	do {
		cout << "\n===== MENU DE ATIVIDADES =====\n";
    cout << "1 - Soma de dois numeros\n";
    cout << "2 - Verificar se e par ou impar\n";
    cout << "3 - Contador ate 10\n";
    cout << "4 - Tabuada\n";
    cout << "5 - Soma ate digitar 0\n";
    cout << "6 - Maior e menor entre cinco numeros\n";
    cout << "7 - Calculadora com 4 operacoes\n";
    cout << "Escolha uma atividade (1 a 7): ";
		cin >> atv;
		if(atv == 1) {
			int soma1, soma2, soma;

			cout << "Digite um numero\n";
			cin >> soma1;

			cout << "\ndigite outro numero\n";
			cin >> soma2;

			soma = soma1 + soma2;
			cout << soma1 << " + " << soma2 << " = " << soma;
		}

		if(atv == 2) {
			int nume, rest;

			cout << "Digite um numero para verificar se ele e impar ou par: ";
			cin >> nume;

			rest = nume % 2;

			if(rest > 0) {
				cout << "Este numero e impar.";
			}
			else {
				cout << "Este numero e par.";
			}

		}

		if(atv == 3){
		cout << "contador ate o 10\n";
		for(int i = 1; i < 11; i++) {
			cout << i << endl;
		}
		}

	if(atv == 4) {
		int numt, tabuada;

		cout << "Digite um numero para ver a tabuada: ";
		cin >> numt;

		for(int i = 1; i < 11; i++) {
			tabuada = numt * i;
			cout << numt << " x " << i << " = " << tabuada << endl;
		}
	}

	if(atv == 5){
		int adv, soma5 = 0;

	do {
		cout << "Digite um numero ate acertar: ";
		cin >> adv;
		soma5 = soma5 + adv;

	} while(adv != 0);
	cout << "\nacertou!\n a soma de todos os numeros e: " << soma5;
}

if(atv == 6){
	int num, num2, num3, num4, num5;

cout << "Digite cinco numeros para compara-los\n";
cin >> num;
cin >> num2;
cin >> num3;
cin >> num4;
cin >> num5;

// verificaC'C#o do maior

if(num > num2 && num > num3 && num > num4 && num > num5) {
	cout << num << " e o maior numero";
}
if(num2 > num && num2 > num3 && num2 > num4 && num2 > num5) {
	cout << num2 << " e o maior numero";
}
if(num3 > num && num3 > num2 && num3 > num4 && num3 > num5) {
	cout << num3 << " e o maior numero";
}
if(num4 > num && num4 > num2 && num4 > num3 && num4 > num5) {
	cout << num4 << " e o maior numero";
}
if(num5 > num && num5 > num2 && num5 > num3 && num5 > num4) {
	cout << num5 << " e o maior numero";
}

// verificaC'C#o do menor

if(num < num2 && num < num3 && num < num4 && num < num5) {
	cout << endl << num << " e o menor numero";
}
if(num2 < num && num2 < num3 && num2 < num4 && num2 < num5) {
	cout << num2 << " e o menor numero";
}
if(num3 < num && num3 < num2 && num3 < num4 && num3 < num5) {
	cout << num3 << " e o menor numero";
}
if(num4 < num && num4 < num2 && num4 < num3 && num4 < num5) {
	cout << num4 << " e o menor numero";
}
if(num5 < num && num5 < num2 && num5 < num3 && num5 < num4) {
	cout << num5 << " e o menor numero";
}
}

if(atv == 7) {
	int escolha;
	float numo1, numo2;

	cout << "escolha uma das opcoes apos inserir os dois numeros: \n ";
	cout << "1 para soma\n 2 para subtracao\n 3 para multiplicacao\n 4 para divisao: \n";
	cin >> numo1;
	cin >> numo2;
	cin >> escolha;


	if(escolha == 1) {
		float soma = numo1 + numo2;
		cout << numo1 << " + " << numo2 << " = " << soma;
	}

	else if(escolha == 2) {
		float sub = numo1 - numo2;
		cout << numo1 << " - " << numo2 << " = " << sub;
	}
	else if(escolha == 3) {
		float multi = numo1 * numo2;
		cout << numo1 << " x " << numo2 << " = " << multi;
	}
	else if(escolha == 4) {
		float divs = numo1 / numo2;
		cout << numo1 << " / " << numo2 << " = " << divs;
	}
	else {
		cout << "Escolha somente de 1 a 4.";
	}

}
cout << "\nDeseja escolher uma atividade?";
cin >> repetir;
} while (repetir == 's' || repetir == 'S');
	return 0;
}








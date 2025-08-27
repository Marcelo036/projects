#include <iostream>
using namespace std;

int main()
{
	int escolha;

	cout << "Escolha qual das atividades voce quer acessar.\n 1 Maior e menor\n 2 Submenu para tabuada\n 3 Historico de operacoes\n";
	cin >> escolha;

	if(escolha == 1) {
		int numeros[10];
		int maior, menor;

		cout << "Digite 10 numeros: ";

		for(int i = 0; i < 10; i++) {
			cin >> numeros[i];
		}

		maior = numeros[0];
		menor = numeros[0];

		for(int i = 1; i < 10; i++) {
			if(numeros[i] > maior) {
				maior = numeros[i];
			}

			if(numeros[i] < menor) {
				menor = numeros[i];
			}
		}

		cout << "Numero maior: " << maior << endl;
		cout << "Numero menor: " << menor;
	}

	else if(escolha == 2) {
		int opcao;

		cout << "Escolha uma das opcoes: \n1 para tabuada normal (1 a 10).\n2 para tabuada com limite escolhido.\n3 para todas as tabuadas de 1 a 10.\n";
		cin >> opcao;

		switch (opcao) {
		case 1:
			int num;
			cout << "Escolha um numero para exbir a tabuada de 1 a 10\n";
			cin >> num;
			for(int i = 1; i <= 10; i++) {
				int calc = num * i;
				cout << num << " x " << i << " = " << calc << endl;
			}
			break;
		case 2:
			int ent1, ent2;
			cout << "Digite o valor da tabuada desejada: ";
			cin >> ent1;
			cout<< "Digite ate qual numero deseja que a tabuada va: ";
			cin >> ent2;

			for(int i = 1; i <= ent2; i++) {
				int calc = i * ent1;
				cout << ent1 << " x " << i << " = " << calc << endl;
			}
			break;
		case 3:
			for(int i = 1; i <= 10; i++) {
				for(int c = 1; c <= 10; c++) {
					int calc = i * c;
					cout << i << " x " << c << " = " << calc << endl;
				}
			}
			break;
		default:
			cout << "opcao invalida.";
			break;
		}
	}

	else if(escolha == 3) {
		int i, opcao, opIn, historico[50], num[2], result;
		char op;
		string operacoes[4] = {"+", "-", "*", "/"};
        
        do {
		    cout << "\nCalculadora com historico, faca seu calculo\n digite 1 para calculo, 2 para historico e 3 para sair: \n";
		    cin >> opcao;

			if(opcao == 1) {
				cout << "Digite o primeiro numero: ";
                cin >> num[0];
                cout << "Digite o operador (+, -, *, /): ";
                cin >> op;
                cout << "Digite o segundo numero: ";
                cin >> num[1];

                int opIn = -1;
				for(int j = 0; j < 4; j++) {
					if(op == operacoes[j][0]) {
						opIn = j;
						break;
					}
				}

				switch(opIn) {
				case 0:
					result = num[0] + num[1];
					cout << num[0] << " + " << num[1] << " = " << result << endl;
					historico[i++] = result;
					break;
				case 1:
					result = num[0] - num[1];
					cout << num[0] << " - " << num[1] << " = " << result << endl;
					historico[i++] = result;
					break;
				case 2:
					result = num[0] * num[1];
					cout << num[0] << " * " << num[1] << " = " << result << endl;
					historico[i++] = result;
					break;
				case 3:
					if (num[1] != 0) {
                            result = num[0] / num[1];
                            cout << num[0] << " / " << num[1] << " = " << result << endl;
                            historico[i++] = result;
                        } else {
                            cout << "Erro: Divisao por zero!" << endl;
                        }
					break;
				default:
					cout << "Operacao invalida.";
				}
			}

			else if (opcao == 2) {
                cout << "Historico de operacoes:\n";
                if (i == 0) {
                    cout << "Nenhuma operacao realizada.\n";
                } else {
                    for (int j = 0; j < i; j++) {
                        cout << historico[j] << endl;
                    }
                }
            }
			
			else if(opcao == 3){
			    cout << "Saindo...\n";
			}
		} while(opcao != 3);
	}
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int escolha;
    
    cout << "Escolha qual das atividades voce quer acessar.\n 1 Maior e menor\n 2 Submenu para tabuada\n 3 Historico de operacoes\n";
    cin >> escolha;
    
    if(escolha == 1){
        int numeros[10];
        int maior, menor;
        
        cout << "Digite 10 numeros: ";
        
        for(int i = 0; i < 10; i++){
            cin >> numeros[i];
        }
        
        maior = numeros[0];
        menor = numeros[0];
        
        for(int i = 1; i < 10; i++){
            if(numeros[i] > maior){
                maior = numeros[i];
            }
            
            if(numeros[i] < menor){
                menor = numeros[i];
            }
        }
        
        cout << "Numero maior: " << maior << endl;
        cout << "Numero menor: " << menor;
        }
        
        else if(escolha == 2){
            int opcao;
            
            cout << "Escolha uma das opcoes: \n1 para tabuada normal (1 a 10).\n2 para tabuada com limite escolhido.\n3 para todas as tabuadas de 1 a 10.\n";
            cin >> opcao;
            
            switch (opcao){
                case 1:
                int num;
                    cout << "Escolha um numero para exbir a tabuada de 1 a 10\n";
                    cin >> num;
                    for(int i = 1; i <= 10; i++){
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
                    
                    for(int i = 1; i <= ent2; i++){
                        int calc = i * ent1;
                        cout << ent1 << " x " << i << " = " << calc << endl;
                    }
                    break;
                case 3:
                    for(int i = 1; i <= 10; i++){
                        for(int c = 1; c <= 10; c++){
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
        
        else if(escolha == 3){
            int opIn, historico[50], num[2], result;
            char op;
            string operacoes[4] = {"+", "-", "*", "/"};
            
            cout << "Calculadora com historico, faca seu calculo: \n";
            cin << num[1];
            cin << operacao;
            cin >> num[2];
            
            for(int i = 0; i < 4; i++){
                if(op == operacoes[i][0]){
                    opIn = i;
                    break;
                }
            }
            
            switch(opIn){
                case 0: result = num[1] + num[2]; break;
                case 1: result = num[1] - num[2]; break;
                case 2: result = num[1] * num[2]; break;
                case 3: result = num[1] / num[2]; break;
                default:
                    cout << "Operacao invalida.";
            }
        }
    return 0;
}

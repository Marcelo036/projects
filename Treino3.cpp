#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int escolha;
    
    
    do{
        cout << "\n\nEscolha entre os exercicios 1, 2, 3, 4 e 5\npara sair 6:\n";
        cin >> escolha;
           if(escolha == 1){                              //1. Somar todos os elementos

                                                          //Crie um programa que:

                                                          //Leia n números do usuário e guarde num vector<int>.

                                                          //Some todos os valores e mostre o resultado.
            int n, valor, result;
            vector<int> numeros;
            result = 0;
            
            cout << "Digite a quantidade de números que você deseja somar: ";
            cin >> n;
            
            for(int i = 0; i < n; i++){
                cout << "Digite o número " << i << ": " << endl;
                cin >> valor;
                numeros.push_back(valor);
            }
            
            
            for(int i = 0; i < n; i++){
                int result = result + numeros[i];
                if(i == n){
                    cout << "Resultado de todos os números somados: " << result;    
                }
            }
        }
        
        else if(escolha == 2){
                                                            //2. Encontrar o maior valor

                                                            //Crie um programa que:

                                                            //Leia n números e guarde num vector<int>.

                                                            //Encontre e imprima o maior valor dentro do vetor.
            int n, valor;
            vector<int> numeros;
            
            cout << "Escolha a quantidade de números que deseja consultar: ";
            cin >> n;
            
            for(int i = 0; i < n; i++){
                cout << "\nDigite o número " << i+1 << ": ";
                cin >> valor;
                numeros.push_back(valor);
            }
            
            int maior = numeros[0];
            for(int i = 1; i < n; i++){
                if(numeros[i] > maior){
                    maior = numeros[i];
                }
            }
            cout << "\nO maior número é: " << maior << endl;
        }
        
        else if(escolha == 3){
                                                                  //3. Contar números pares

                                                                  //Crie um programa que:

                                                                  //Leia n números e guarde num vetor.

                                                                  //Conte quantos números pares existem no vetor.

                                                                  //Imprima essa quantidade.
            int n, valor, result, contagem;
            vector<int> numeros;
            
            contagem = 0;
            
            cout << "Digite a quantidade de numero que deseja consultar: ";
            cin >> n;
            
            for(int i = 0; i < n; i++){
                cout << "\nDigite o número " << i+1 << ": ";
                cin >> valor;
                numeros.push_back(valor);
            }
            
            cout << "números pares: \n";
            for(int i = 0; i < n; i++){
                if(numeros[i] % 2 == 0){
                    cout << numeros[i] << endl;
                    contagem++;
                }
            }
            cout << "contagem de numeros pares: " << contagem;
        }
        
        else if(escolha == 4){
                                                                      //4. Inverter o vetor

                                                                      //Crie um programa que:

                                                                      //Leia n números e guarde no vetor.

                                                                      //Crie um segundo vetor com os mesmos números, mas na ordem inversa.

                                                                      //Mostre o vetor invertido.
            int n, valor, inversos;
            vector<int> numeros;
            
            cout << "Digite a quantidade de numero que deseja consultar: ";
            cin >> n;
            
            for(int i = 0; i < n; i++){
                cout << "\nDigite o número " << i+1 << ": ";
                cin >> valor;
                numeros.push_back(valor);
            }
            
            cout << "sequencia de numeros ao contrario :\n";
            for(int i = -1; n > i; n--){
                if(numeros[n] != 0){
                    cout << numeros[n] << ", ";   
                }
            }
        }
        
        else if(escolha == 5){
                                                                        //5. Remover números negativos

                                                                        //Crie um programa que:

                                                                        //Leia n números e guarde no vetor.

                                                                        //Remova todos os números negativos do vetor.

                                                                        //Mostre o vetor resultante.
            int n, valor, resto;
            vector<int> numeros;
            
            cout << "Digite a quantidade de numero que deseja consultar: ";
            cin >> n;
            
            for(int i = 0; i < n; i++){
                cout << "\nDigite o número " << i+1 << ": ";
                cin >> valor;
                numeros.push_back(valor);
            }
            
            cout << "Numeros positivos: ";
            for(int i = 0; i < n; i++){
                if(i >= 1){
                    cout << numeros[i] << ", ";
                }
            }
        } else{
            cout << "Escolha invalida.";
        }
    } while(escolha != 6);
    cout << "Saindo..";
    
    return 0;
}

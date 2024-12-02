#include <iostream>
#include <string>

void mostrarMenu() {
    std::cout << "\nMenu de Opções:\n";
    std::cout << "1. Inserir texto\n";
    std::cout << "2. Apagar texto\n";
    std::cout << "3. Copiar texto\n";
    std::cout << "4. Concatenar texto\n";
    std::cout << "5. Comparar textos\n";
    std::cout << "6. Mostrar texto atual\n";
    std::cout << "7. Sair\n";
    std::cout << "Escolha uma opção: ";
}

int main() {
    std::string textoBase, textoCopia, novoTexto;
    int opcao;

    std::cout << "Insira o texto inicial: ";
    std::getline(std::cin, textoBase);

    do {
        mostrarMenu();
        std::cin >> opcao;
        std::cin.ignore(); // Para ignorar o caractere de nova linha após a opção

        switch (opcao) {
            case 1:
                std::cout << "Insira o novo texto: ";
                std::getline(std::cin, novoTexto);
                textoBase = novoTexto;
                std::cout << "Texto atualizado!\n";
                break;

            case 2:
                textoBase.clear();
                std::cout << "Texto apagado!\n";
                break;

            case 3:
                textoCopia = textoBase;
                std::cout << "Texto copiado!\n";
                break;

            case 4:
                std::cout << "Insira o texto a ser concatenado: ";
                std::getline(std::cin, novoTexto);
                textoBase += novoTexto;
                std::cout << "Texto concatenado!\n";
                break;

            case 5:
                std::cout << "Insira o texto para comparar: ";
                std::getline(std::cin, novoTexto);
                if (textoBase == novoTexto) {
                    std::cout << "Os textos são iguais!\n";
                } else {
                    std::cout << "Os textos são diferentes!\n";
                }
                break;

            case 6:
                std::cout << "Texto atual: " << textoBase << "\n";
                break;

            case 7:
                std::cout << "Saindo do programa...\n";
                break;

            default:
                std::cout << "Opção inválida! Tente novamente.\n";
        }
    } while (opcao != 7);

    return 0;
}

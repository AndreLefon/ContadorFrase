#include <stdio.h>

int main() {

  char line[150];
  int vogais, consoantes, digitos, espacos;

  // botar tudo pra começar em zero
  
  vogais = consoantes = digitos = espacos = 0;


  printf("Digite uma frase: ");
  fgets(line, sizeof(line), stdin);

  // ir em loop por todos os caracteres
  
  for (int i = 0; line[i] != '\0'; ++i) {

    // joga tudo pra minúscula
    
    line[i] = (line[i]);

    // checa se é uma vogal
    
    if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
        line[i] == 'o' || line[i] == 'u') {

      // sempre soma as vogais + 1
      
      ++vogais;
    }

    // se não é vogal e tá no alfabeto, é uma consoante
    else if ((line[i] >= 'a' && line[i] <= 'z')) {
      ++consoantes;
    }

    // checar se o caracter não é um dígito
      
    else if (line[i] >= '0' && line[i] <= '9') {
      ++digitos;
    }

    // checar se tem algum espaço em branco
      
    else if (line[i] == ' ') {
      ++espacos;
    }
  }

  printf("Vogais: %d", vogais);
  printf("\nConsoantes: %d", consoantes);
  printf("\nDígitos: %d", digitos);
  printf("\nEspaços: %d", espacos);

  return 0;
}
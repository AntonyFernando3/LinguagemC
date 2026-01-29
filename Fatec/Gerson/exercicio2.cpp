#include <stdio.h>

struct cad {
    char nome[30];
    char ende[40];
    float sal;
    int qtde[5];
};

int encontrar_maior_salario(struct cad pessoas[], int tamanho) {
    int indice_maior_salario = 0;
    float maior_salario = pessoas[0].sal;
    
    for (int i = 1; i < tamanho; i++) {
        if (pessoas[i].sal > maior_salario) {
            maior_salario = pessoas[i].sal;
            indice_maior_salario = i;
        }
    }
    
    return indice_maior_salario;
}

int main() {
    int n, i, j, tot;
    
    do {
        printf("\n Quantas pessoas? = ");
        scanf("%d", &n);
    } while (n <= 0);
    
    struct cad p[n];
    
    for (i = 0; i < n; i++) {
        printf("\n Pessoa %d: ", i+1); tot=0;
        printf("\n\t Nome =");
        fflush(stdin);
        gets(p[i].nome);
        printf("\n\t Endereco = ");
        fflush(stdin);
        gets(p[i].ende);
        printf("\n\t Salario = ");
        scanf("%f", &p[i].sal);
        
        for (j = 0; j < 5; j++) {
            printf("\n\t Quantidade %d = ", j+1);
            scanf("%d", &p[i].qtde[j]);
            tot += p[i].qtde[j];
        }
        
        printf("\n\t Quantidade Total = %d", tot);
    }
    
    int indice_maior_salario = encontrar_maior_salario(p, n);
    printf("\n\nPessoa com maior salario:\n");
    printf("Nome: %s\n", p[indice_maior_salario].nome);
    printf("Endereco: %s\n", p[indice_maior_salario].ende);
    printf("Salario: %.2f\n", p[indice_maior_salario].sal);
    
    return 0;
}


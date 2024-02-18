#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int registro()
{
	setlocale(LC_ALL, "Portuguese");
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];

	printf("Digite o CPF do usu�rio a ser registrado: ");
	scanf("%s", cpf);
	strcpy(arquivo, cpf);

	FILE *file;
	file = fopen(arquivo, "r");
	if(file == NULL)
	{
		file = fopen(arquivo, "w");
		fprintf(file,cpf);
		fprintf(file,",");

		printf("Digite o primeiro nome do usu�rio a ser registrado: ");
		scanf("%s", nome);
		fprintf(file,nome);
		fprintf(file,",");

		printf("Digite o sobrenome do usu�rio a ser registrado: ");
		scanf("%s", sobrenome);
		fprintf(file,sobrenome);
		fprintf(file,",");

		printf("Digite o cargo do usu�rio a ser registrado: ");
		scanf("%s", cargo);
		fprintf(file,cargo);
		fclose(file);

		system("pause");
	}
	else
	{
		printf("\nEste usu�rio j� existe.\n\n");
		fclose(file);
		system("pause");
	}
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese");
	char cpf[40];
	char conteudo[200];

	printf("Digite o CPF do usu�rio a ser consultado: ");
	scanf("%s",cpf);

	FILE *file;
	file = fopen(cpf,"r");

	if(file == NULL)
	{
		printf("\nN�o existe um usu�rio com esse CPF.\n\n");
	}

	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	fclose(file);
	system("pause");
}

int deletar()
{
	char cpf[40];

	printf("Digite o CPF do usu�rio a ser deletado: ");
	scanf("%s", cpf);

	FILE *file;
	file = fopen(cpf,"r");

	if(file == NULL)
	{
		printf("\nEste usu�rio n�o existe.\n\n");
		system("pause");
	}
	else
	{
		fclose(file);
		remove(cpf);
		printf("\nUsu�rio deletado.\n\n");
		system("pause");
	}
}

int main()
{
	int opcao=0;
	int x=1;

	for(x=1;x=1;)
	{

		system("cls");

		setlocale(LC_ALL, "Portuguese");

		printf("##### Cart�rio da EBAC #####\n\n");
		printf("Escolha uma op��o:\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n");
		printf("\t4 - Sair\n\n");
		printf("Op��o: ");

		scanf("%d", &opcao);

		system("cls");

		switch(opcao)
		{
			case 1:
			registro();
			break;

			case 2:
			consulta();
			break;

			case 3:
			deletar();
			break;

			case 4:
            printf("\nPressione qualquer tecla para fechar o programa.\n\n");
            return 0;
            break;

			default:
			printf("Op��o inv�lida.\n");
			system("pause");
			break;
		}
	}
}

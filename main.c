#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

char setup [10], gabinete [15];
int plataforma, carrin = 0;

typedef struct
{
    char placamae [50];
    char processador [50];
    char placa_video [50];
    char ram [50];
    char cooler [50];
    char fonte [50];
    char hd [50];
    char ssd [50];
    float placamae_preco;
    float processador_preco;
    float placa_video_preco;
    float ram_preco;
    float cooler_preco;
    float fonte_preco;
    float hd_preco;
    float ssd_preco;
    float precototal;
}config;

typedef struct
{
    char nome[70];
    char cpf[15];
    char telefone[15];
    char email[100];
    int cep [10];
}dados_cadastrais;

void corpo () // corpo do programa
{
    system("cls");
    printf ("\t\t\t\t ___________________________________________________\n");
    printf ("\t\t\t\t|                                                   |\n");
    printf ("\t\t\t\t|                  B O M  S E T U P                 |\n");
    printf ("\t\t\t\t|___________________________________________________|\n\n\n\n\n");
}

void inicio (int* x)
{
    setbuf(stdin, NULL);
    printf("Selecione o que deseja fazer\n\n");
    printf("1. Comprar computador\n");
    printf("2. Ir para o carrinho\n");
    printf("3. Sobre o programa\n");
    printf("4. Sair\n\n");
    scanf("%d", x);
}


void comprar_computador() // Função que dá início à compra do computador
{
    corpo();
    printf("\t\t\t\t  Atualmente temos 8 modelos diferentes de computadores\n");
    printf("\t\t\t\t4 São com configurações para Intel, e os outros para AMD\n");
    printf("\t\t\t\t\t  Qual plataforma você prefere?\n\n");
    printf("\t\t\t\t\t\t1. Intel\t2. AMD\n\n");
    scanf("%d", &plataforma);
    switch(plataforma)
    {
    case 1:
        Intel();
        break;
    case 2:
        AMD();
        break;
    default:
        printf("\n\nDigite uma opção válida...\n\n");
        system("pause");
        comprar_computador();
        break;
    }
}

void Intel () // Função caso o usuário escolha a plataforma Intel
{
    setbuf(stdin, NULL); // Limpa o buffer do teclado, já que essa ação se repetirá quantas vezes o usuário quiser
    corpo();
    printf("Selecione um computador para ver a sua configuração\n\n");
    printf("1 - Arcade\n");
    printf("2 - Zeus\n");
    printf("3 - Nexus\n");
    printf("4 - Maximus\n");
    int esc_gab;
    scanf("%d", &esc_gab);
    switch(esc_gab)
    {
    case 1:
        arcade();
        break;
    case 2:
        zeus();
        break;
    case 3:
        nexus();
        break;
    case 4:
        maximus();
        break;
    default:
        printf("Digite um valor valido\n");
        system("pause");
        Intel();
    }
}

void arcade ()
{
    setbuf(stdin, NULL); // Limpa o buffer do teclado, já que essa ação se repetirá quantas vezes o usuário quiser
    corpo(); // Início da demonstração dos setups
    printf("Arcade (econômico)\n\n\n");
    printf("Placa Mãe: Gigabyte H310M H 2.0, Intel LGA 1151, mATX, DDR4 - R$519,49\n");
    printf("Processador: Intel Pentium G5400 Coffee Lake, 8a Geração, Cache 4MB, 3.7Ghz, LGA 1151 R$722,25\n");
    printf("Placa de vídeo: VGA NVIDIA EVGA GEFORCE GTX 750 TI 2GB SC DDR5 - R$529,20\n");
    printf("Memória RAM: x1 HyperX Fury 4GB DDR4 - R$271,15\n");
    printf("Water cooler: N/A\n");
    printf("Fonte: Corsair 400W - R$250,00\n");
    printf("HD: 500GB Seagate - R$99,20\n");
    printf("SSD: N/A\n\n");
    printf("Preço total: R$2.397,29\n\n");
    printf("Deseja ver outros computadores? S/N\n\n");
    char esc;
    scanf("%c", &esc);
    esc = toupper(esc);
    switch(esc)
    {
    case 'S':
        Intel();
        break;
    case 'N':
        break;
    default:
        printf("Digite um caractere valido...");
        system("pause");
        arcade();
    }
}

void zeus ()
{
    setbuf(stdin, NULL); // Limpa o buffer do teclado, já que essa ação se repetirá quantas vezes o usuário quiser
    corpo(); // Início da demonstração dos setups
    printf("Zeus (mediano)\n\n\n");
    printf("Placa Mãe: Gigabyte B365M DS3H, Intel LGA 1151, mATX, DDR4 - R$800,35\n");
    printf("Processador: Intel Core i3-9100F Coffee Lake, Cache 6MB, 3.6GHz (4.2GHz Max Turbo), LGA 1151 - R$572,55\n");
    printf("Placa de vídeo: Gigabyte NVIDIA GeForce GTX 950 2G, GDDR5 - R$850,50\n");
    printf("Memória RAM: x1 HyperX Fury 8GB DDR4 - R$403,70\n");
    printf("Water cooler: N/A\n");
    printf("Fonte: Corsair 550W - R$500,00\n");
    printf("HD: 1TB SEAGATE - R$390,40\n");
    printf("SSD: N/A\n\n");
    printf("Preço total: R$3.517,50\n\n");
    printf("Deseja ver outros computadores? S/N\n\n");
    char esc;
    scanf("%c", &esc);
    esc = toupper(esc);
    switch(esc)
    {
    case 'S':
        Intel();
        break;
    case 'N':
        break;
    default:
        printf("Digite um caractere valido...");
        system("pause");
        zeus();
    }
}

void nexus ()
{
    setbuf(stdin, NULL); // Limpa o buffer do teclado, já que essa ação se repetirá quantas vezes o usuário quiser
    corpo(); // Início da demonstração dos setups
    printf("Nexus (bom)\n\n\n");
    printf("Placa Mãe: Asus Prime Z390-P, Intel LGA 1151, ATX, DDR4 - R$1.280,50\n");
    printf("Processador: Intel Core i7-9700F Coffee Lake, Cache 12MB, 3.0GHz (4.7GHz Max Turbo), LGA 1151 - R$2.678,35\n");
    printf("Placa de vídeo: Asus TUF3 NVIDIA GeForce GTX 1660 SUPER 6GB, GDDR6 - R$2.150,47\n");
    printf("Memória RAM: 2x HyperX Fury 8GB DDR4 - R$810,60\n");
    printf("Water cooler: Masterliquid ML120L RGB 120MM - R$300,50\n");
    printf("Fonte: Corsair 650W - R$523,52\n");
    printf("HD: 1TB SEAGATE - R$390,40\n");
    printf("SSD: SSD Kingston A400, 240GB, SATA, Leitura 500MB/s, Gravação 350MB/s - R$220,30\n\n");
    printf("Preço total: R$8.354,64\n\n");
    printf("Deseja ver outros computadores? S/N\n\n");
    char esc;
    scanf("%c", &esc);
    esc = toupper(esc);
    switch(esc)
    {
    case 'S':
        Intel();
        break;
    case 'N':
        break;
    default:
        printf("Digite um caractere valido...");
        system("pause");
        nexus();
    }
}

void maximus ()
{
    setbuf(stdin, NULL); // Limpa o buffer do teclado, já que essa ação se repetirá quantas vezes o usuário quiser
    corpo(); // Início da demonstração dos setups
    printf("Maximus (minecraft no ultra)\n\n\n");
    printf("Placa Mãe: Asus ROG Rampage VI Extreme Encore, Intel LGA 2066, E-ATX, DDR4 - R$6.500,65\n");
    printf("Processador: Intel Core i9-9960X Skylake, Cache 22MB, 3.1GHz (4.4GHz Max Turbo), LGA 2066 - R$4.702,25\n");
    printf("Placa de vídeo: Gigabyte NVIDIA GeForce RTX 2080 Super Gaming OC, 8GB, GDDR6 - R$6.490,40\n");
    printf("Memória RAM: 4x HyperX Fury 8GB DDR4 - R$1.620,49\n");
    printf("Water cooler: MasterLiquid, 240mm - R$570,80\n");
    printf("Fonte: Corsair 1200W 80 Plus Platinum Modular - R$2.150,90\n");
    printf("HD: 1TB SEAGATE - R$390,40\n");
    printf("SSD: SSD XPG Gammix S50, 1TB, M.2, PCIe, Leituras: 5000Mb/s e Gravações 4400Mb/s - R$3.200,75\n\n");
    printf("Preço total: R$25.626,64\n\n");
    printf("Deseja ver outros computadores? S/N\n\n");
    char esc;
    scanf("%c", &esc);
    esc = toupper(esc);
    switch(esc)
    {
    case 'S':
        Intel();
        break;
    case 'N':
        break;
    default:
        printf("Digite um caractere valido...");
        system("pause");
        maximus();
    }
}

void AMD() // Função caso o usuário escolha a plataforma AMD
{
    setbuf(stdin, NULL); // Limpa o buffer do teclado, já que essa ação se repetirá quantas vezes o usuário quiser
    corpo();
    printf("Selecione um computador para ver a sua configuração\n\n");
    printf("1 - Markin Ultra Pro\n");
    printf("2 - CJE FZ\n");
    printf("3 - NTC Black Diamond\n");
    printf("4 - Mauweed Luzinha\n");
    int esc_gab;
    scanf("%d", &esc_gab);
    switch(esc_gab)
    {
    case 1:
        markin();
        break;
    case 2:
        cje();
        break;
    case 3:
        ntc();
        break;
    case 4:
        mauweed();
        break;
    default:
        printf("Digite um valor valido\n");
        system("pause");
        AMD();
    }

}

void markin ()
{
    setbuf(stdin, NULL);
    corpo(); // Início da demonstração dos setups
    printf("Primeiro Setup: Markin Ultra Pro (econômico)\n\n\n");
    printf("Placa Mãe: Gigabyte GA-AB350M-DS3H V2, AMD AM4, mATX, DDR4 - R$609,47\n");
    printf("Processador: AMD Ryzen 3 3200G, Cache 4MB, 3.6GHz (4GHz Max Turbo) - R$698,90\n");
    printf("Placa de vídeo: XFX AMD Radeon RX 550 2GB Core, GDDR5 - R$452,70\n");
    printf("Memória RAM: x1 HyperX Fury 4GB DDR4 - R$271,15\n");
    printf("Water cooler: N/A\n");
    printf("Fonte: Corsair 400W - R$250,00\n");
    printf("HD: 500GB Seagate - R$99,20\n");
    printf("SSD: N/A\n\n");
    printf("Preço total: R$2.381,42\n\n");
    printf("Deseja ver outros computadores? S/N\n\n");
    char esc;
    scanf("%c", &esc);
    esc = toupper(esc);
    switch(esc)
    {
    case 'S':
        AMD();
        break;
    case 'N':
        break;
    default:
        printf("Digite um caractere valido...");
        system("pause");
        markin();
    }
}

void cje ()
{
    setbuf(stdin, NULL);
    corpo();
    printf("Segundo Setup: CJE FZ (mediano)\n\n\n");
    printf("Placa Mãe: Gigabyte Aorus B450 Aorus M, AMD AM4, mATX, DDR4 - R$952,30\n");
    printf("Processador: AMD Ryzen 5 3600X Cache 32MB 3.8GHz (4.4GHz Max Turbo) - R$1.498,25\n");
    printf("Placa de vídeo: Gigabyte AMD Radeon RX 560 OC 4G, GDDR5 - R$840,74\n");
    printf("Memória RAM: x1 HyperX Fury 8GB DDR4 - R$403,70\n");
    printf("Water cooler: N/A\n");
    printf("Fonte: Corsair 550W - R$500,00\n");
    printf("HD: 1TB SEAGATE - R$390,40\n");
    printf("SSD: N/A\n\n");
    printf("Preço total: R$4.585,39\n\n");
    printf("Deseja ver outros computadores? S/N\n\n");
    char esc;
    scanf("%c", &esc);
    esc = toupper(esc);
    switch(esc)
    {
    case 'S':
        AMD();
        break;
    case 'N':
        break;
    default:
        printf("Digite um caractere valido...");
        system("pause");
        cje();
    }
}

void ntc ()
{
    setbuf(stdin, NULL);
    corpo();
    printf("Terceiro Setup: NTC Black Diamond (bom)\n\n\n");
    printf("Placa Mãe: Gigabyte Aorus X570 Aorus Elite, AMD AM4, ATX, DDR4 - R$2750,40\n");
    printf("Processador: AMD Ryzen 7 3700X 32MB 3.6GHz (4.4GHz Max Turbo) - R$2925,35\n");
    printf("Placa de vídeo: Asus TUF3 NVIDIA GeForce GTX 1660 SUPER 6GB, GDDR6 - R$\n");
    printf("Memória RAM: 2x HyperX Fury 8GB DDR4 - R$917,42 - 779,8\n");
    printf("Water cooler: Masterliquid ML120L RGB 120MM - R$350,47 - 297,90\n");
    printf("Fonte: Corsair 650W - R$579,88 - 492,90\n");
    printf("HD: 1TB SEAGATE - R$434,00 - 368,90\n");
    printf("SSD: SSD Kingston A400, 240GB, SATA, Leitura 500MB/s, Gravação 350MB/s - R$258,71 - 219,90\n\n");
    printf("Preço total: R$10.500,00\n\n");
    printf("Deseja ver outros computadores? S/N\n\n");
    char esc;
    scanf("%c", &esc);
    esc = toupper(esc);
    switch(esc)
    {
    case 'S':
        AMD();
        break;
    case 'N':
        break;
    default:
        printf("Digite um caractere valido...");
        system("pause");
        ntc();
    }
}

void mauweed ()
{
    setbuf(stdin, NULL);
    corpo();
    printf("Quarto Setup: Mauweed Luzinha (minecraft no ultra)\n\n\n");
    printf("Placa Mãe: Gigabyte Aorus X570 Aorus Xtreme, AM4, eATX, DDR4 - R$7.395,18 - 6.285,90\n");
    printf("Processador: AMD Ryzen Threadripper 3960X, Cache 128MB, 4500MHz - R$11.916,35 - 10.128,90\n");
    printf("Placa de vídeo: Gigabyte NVIDIA GeForce RTX 2080 Super Gaming OC, 8GB, GDDR6 - R$7.258,71 - 6.169,90\n");
    printf("Memória RAM: 4x HyperX Fury 8GB DDR4 - R$1.834,84 - 1.559,60\n");
    printf("Water cooler: MasterLiquid, 240mm - R$623,41 - 529,90\n");
    printf("Fonte: Corsair 1200W 80 Plus Platinum Modular - R$2.270,47 - 1.929,90\n");
    printf("HD: 1TB SEAGATE - R$434,00 - 368,90\n");
    printf("SSD: SSD XPG Gammix S50, 1TB, M.2, PCIe, Leituras: 5000Mb/s e Gravações 4400Mb/s - R$3.646,94 - 3.099,90\n\n");
    printf("Preço total: R$32.644,79\n\n");
    printf("Deseja ver outros computadores? S/N\n\n");
    char esc;
    scanf("%c", &esc);
    esc = toupper(esc);
    switch(esc)
    {
    case 'S':
        AMD();
        break;
    case 'N':
        break;
    default:
        printf("Digite um caractere valido...");
        system("pause");
        mauweed();
    }
}

config escolha_setup (int z)
{
    int x, y; // x = variável para seleção

    config setup;

    setup_opcao:
    corpo();
    printf("Selecione uma opção\n\n");
    printf("1. Escolher um setup\n");
    printf("2. Olhar todos os setups novamente\n");
    printf("3. Voltar para o menu principal\n");
    printf("4. Sair do programa\n\n");
    scanf("%d", &x);
    switch(x)
    {
    case 1:
        setup_carrinho:
        setbuf(stdin, NULL);
        corpo();
        if(plataforma == 1)
        {
            printf("Qual setup você deseja adicionar ao carrinho?\n\n");
            printf("1. Arcade (econômico)\n");
            printf("2. Zeus (mediano)\n");
            printf("3. Nexus (bom)\n");
            printf("4. Maximus (minecraft no ultra)\n");
            scanf("%d", &y);
            switch(y)
                {
                case 1:
                    strcpy(setup.placamae, "Gigabyte H310M H 2.0");
                    strcpy(setup.processador, "Intel Pentium G5400");
                    strcpy(setup.placa_video, "VGA NVIDIA EVGA GEFORCE GTX 750 TI");
                    strcpy(setup.ram, "x1 HyperX Fury 4GB DDR4");
                    strcpy(setup.cooler, "N/A Cooler");
                    strcpy(setup.fonte, "Fonte Corsair 400W");
                    strcpy(setup.hd, "HD 500GB Seagate");
                    strcpy(setup.ssd, "N/A SSD");
                    strcpy(gabinete, "Arcade");
                    carrin = 1;
                case 2:
                    strcpy(setup.placamae, "Gigabyte B365M DS3H");
                    strcpy(setup.processador, "Intel Core i3-9100F");
                    strcpy(setup.placa_video, "Gigabyte NVIDIA GeForce GTX 950");
                    strcpy(setup.ram, "x1 HyperX Fury 8GB DDR4");
                    strcpy(setup.cooler, "N/A Cooler");
                    strcpy(setup.fonte, "Fonte Corsair 550W");
                    strcpy(setup.hd, "HD 1TB SEAGATE");
                    strcpy(setup.ssd, "N/A SSD");
                    strcpy(gabinete, "Zeus");
                    carrin = 1;
                    break;
                case 3:
                    strcpy(setup.placamae, "Asus Prime Z390-P");
                    strcpy(setup.processador, "Intel Core i7-9700F");
                    strcpy(setup.placa_video, "Asus TUF3 NVIDIA GeForce GTX 1660");
                    strcpy(setup.ram, "2x HyperX Fury 8GB DDR4");
                    strcpy(setup.cooler, "Masterliquid ML120L RGB 120MM");
                    strcpy(setup.fonte, "Fonte Corsair 650W");
                    strcpy(setup.hd, "HD 1TB SEAGATE");
                    strcpy(setup.ssd, "SSD Kingston A400, 240GB");
                    carrin = 1;
                    strcpy(gabinete, "Nexus");
                    break;
                case 4:
                    strcpy(setup.placamae, "Asus ROG Rampage VI Extreme Encore");
                    strcpy(setup.processador, "Intel Core i9-9960X");
                    strcpy(setup.placa_video, "Gigabyte NVIDIA GeForce RTX 2080");
                    strcpy(setup.ram, "4x HyperX Fury 8GB DDR4");
                    strcpy(setup.cooler, "MasterLiquid, 240mm");
                    strcpy(setup.fonte, "Fonte Corsair 1200W 80 Plus");
                    strcpy(setup.hd, "HD 1TB SEAGATE");
                    strcpy(setup.ssd, "SSD XPG Gammix S50, 1TB");
                    carrin = 1;
                    strcpy(gabinete, "Maximus");
                    break;
                default:
                    printf("\n\nSelecione uma opção válida...\n\n");
                    system("pause");
                    goto setup_carrinho;
                    break;
                }
        }else
        {
            printf("Qual setup você deseja adicionar ao carrinho?\n\n");
            printf("1. Markin Ultra Pro (econômico)\n");
            printf("2. CJE FZ (mediano)\n");
            printf("3. NTC Black Diamond (bom)\n");
            printf("4. Mauweed Luzinha (minecraft no ultra)\n");
            scanf("%d", &y);
            switch(y)
                {
                case 1:
                    strcpy(setup.placamae, "Gigabyte GA-AB350M-DS3H V2");
                    strcpy(setup.processador, "AMD Ryzen 3 3200G");
                    strcpy(setup.placa_video, "XFX AMD Radeon RX 550");
                    strcpy(setup.ram, "x1 HyperX Fury 4GB DDR4");
                    strcpy(setup.cooler, "N/A Cooler");
                    strcpy(setup.fonte, "Fonte Corsair 400W");
                    strcpy(setup.hd, "HD 500GB Seagate");
                    strcpy(setup.ssd, "N/A SSD");
                    strcpy(gabinete, "Markin Ultra Pro");
                    carrin = 1;
                    break;
                case 2:
                    strcpy(setup.placamae, "Gigabyte Aorus B450");
                    strcpy(setup.processador, "AMD Ryzen 5 3600X");
                    strcpy(setup.placa_video, "Gigabyte AMD Radeon RX 560");
                    strcpy(setup.ram, "x1 HyperX Fury 8GB DDR4");
                    strcpy(setup.cooler, "N/A Cooler");
                    strcpy(setup.fonte, "Fonte Corsair 550W");
                    strcpy(setup.hd, "HD 1TB SEAGATE");
                    strcpy(setup.ssd, "N/A SSD");
                    strcpy(gabinete, "CJE FZ");
                    carrin = 1;
                    break;
                case 3:
                    strcpy(setup.placamae, "Gigabyte Aorus X570 Elite");
                    strcpy(setup.processador, "AMD Ryzen 7 3700X");
                    strcpy(setup.placa_video, "Asus TUF3 NVIDIA GeForce GTX 1660");
                    strcpy(setup.ram, "2x HyperX Fury 8GB DDR4");
                    strcpy(setup.cooler, "Masterliquid ML120L RGB 120MM");
                    strcpy(setup.fonte, "Fonte Corsair 650W");
                    strcpy(setup.hd, "HD 1TB SEAGATE");
                    strcpy(setup.ssd, "SSD Kingston A400, 240GB");
                    strcpy(gabinete, "NTC Black Diamond");
                    carrin = 1;
                    break;
                case 4:
                    strcpy(setup.placamae, "Gigabyte Aorus X570 Xtreme");
                    strcpy(setup.processador, "AMD Ryzen Threadripper 3960X");
                    strcpy(setup.placa_video, "Gigabyte NVIDIA GeForce RTX 2080");
                    strcpy(setup.ram, "4x HyperX Fury 8GB DDR4");
                    strcpy(setup.cooler, "MasterLiquid, 240mm");
                    strcpy(setup.fonte, "Fonte Corsair 1200W 80 Plus");
                    strcpy(setup.hd, "HD 1TB SEAGATE");
                    strcpy(setup.ssd, "SSD XPG Gammix S50, 1TB");
                    strcpy(gabinete, "Mauweed Luzinha");
                    carrin = 1;
                    break;
                default:
                    printf("\n\nSelecione uma opção válida...\n\n");
                    system("pause");
                    goto setup_carrinho;
                    break;
                }
        }
        break;
    case 2:
        if(z == 1) // Como dito no início do programa, z(plataforma) == 1 significa que o usuário escolheu os computadores da intel
        {
            Intel();
        }else // Caso o contrário, significa que o usuário escolheu os computadores da AMD
        {
            AMD();
        }
        break;
    case 3:
        main();
        break;
    case 4:
        sair();
        break;
    default:
        printf("\n\nSelecione uma opção válida...\n\n");
        system("pause");
        goto setup_opcao;
        break;

    }
return setup;
}

int frete_mercury (int cep, float computador)

{
    int cepcalc = cep / 1000;
    float frete;
	if (cepcalc / 1000 >= 01000)
    {
        frete = computador * 0.025;
        printf("O frete para a região sudeste é %2.f reais", frete);
    }
	else if (cepcalc / 1000 >= 40000)
	{
		frete = computador * 0.05;
		printf("O frete para a região nordeste é %2.f reais", frete);
	}
	else if (cepcalc / 1000 >= 66000)
	{
		frete = computador * 0.10;
		printf("O frete para a região norte é %2.f reais", frete);
	}
	else if (cepcalc / 1000 >= 78000)
	{
		frete = computador * 0.07;
		printf("O frete para a região cetro-oeste é %2.f reais", frete);
	}
	else
	{
		frete = computador * 0.07;
	    printf("O frete para a região sul é %2.f reais", frete);
	}
	printf("\nDeseja confirmar a compra? S/N\n");
	setbuf(stdin, NULL);
	char esc;
	scanf("%c", &esc);
	esc = toupper(esc);
	switch(esc)
	{
    case 'S':
        break;
    case 'N':
        main();
        break;
    default:
        printf("Digite um caractere valido...");
        system("pause");
        frete_mercury(cep, computador);
	}
	return frete;

}

dados_cadastrais cadastro()
{
    dados_cadastrais dados;
    corpo();
    printf("Agora precisamos dos seus dados para realizar o seu cadastro na Bom Setup.\n\n\n \t\t\t\t Digite os seus dados\n\n");
    setbuf(stdin, NULL);
    printf("1- Nome completo..: ");
    gets(dados.nome);
    printf("2- Telefone( Ex: 21997740398 )..: ");
    fgets(dados.telefone, 12, stdin);
    printf("3- E-mail..: ");
    gets(dados.email);
    printf("4- CPF (apenas números)..: ");
    fgets(dados.cpf, 12, stdin);
    printf("5- CEP..: ");
    fgets(dados.cep, 9, stdin);
    printf("=====================DADOS CADASTRADOS========================\n");
    printf("Nome..: %s\nTelefone..: %s\nEmail..: %s\nCPF..: %s\nCEP..: %s\n",dados.nome, dados.telefone, dados.email, dados.cpf, dados.cep);
    system("pause");
    return dados;
}

void sair()
{
    printf("\n\nSaindo...\n\n");
    exit(0);
}

void sobre()
{
    printf("Sobre o programa");
}

int main ()
{
    float computador = 100;
    int a = 1; // Possibilita o Loop infinito do menu
    setlocale(LC_ALL, "Portuguese"); // Insere os caracteres especiais no programa
    int esc_1; // Variável para escolha da função "inicio();"
    config setup;
    dados_cadastrais dados;

    do
    {
        inicio:// Seta um index para retorno
        corpo();// Função corpo do progarma (Layout do "Bom Setup")
        inicio(&esc_1); // Função teste, só queria saber como funciona passar o endereço de uma variável para a função

        switch (esc_1) // Switch do valor alocado na variável esc_1
        {
        case 1:
            comprar_computador();
            break;
        case 2:
            while (carrin == 0)
            {
                corpo();
                printf("\t\t\t\t\tO carrinho está vazio...\n\n");
                system("pause");
                main();
            }
            compra:
            setbuf(stdin, NULL);
            corpo();
            printf("Seu carrinho...\n\n");
            printf("\n1x %s", setup.placamae);
            printf("\n1x %s", setup.processador);
            printf("\n1x %s", setup.placa_video);
            printf("\n%s", setup.ram);
            printf("\n1x %s", setup.cooler);
            printf("\n1x %s", setup.fonte);
            printf("\n1x %s", setup.hd);
            printf("\n1x %s", setup.ssd);
            printf("\n\nDeseja confirmar os itens? S/N\n\n");
            int esc_compra;
            scanf("%c", &esc_compra);
            esc_compra = toupper(esc_compra);
            switch(esc_compra)
            {
            case 'S':
                dados = cadastro();
                frete_mercury(dados.cep, computador);
                time_t t = time(NULL);
                struct tm tm = *localtime(&t);
                corpo();
                printf("--------------------------------------------------------------------------------\n");
                printf("Nome: %s", dados.nome);
                printf("\n--------------------------------------------------------------------------------\n");
                printf("\tLoja: BOM SETUP \tCNPJ: 00.000.000/0000-00 \t(21)9876-54321\n");
                printf("--------------------------------------------------------------------------------\n");
                printf("Data: %d/%d/%d \ Hora: %d:%d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour, tm.tm_min);
                printf("\n--------------------------------------------------------------------------------\n");
                printf("Produto: %s\n", gabinete);
                printf("1x %s \t                  R$ %\n", setup.placamae);
                printf("1x %s \t                  R$ %\n", setup.processador);
                printf("1x %s \t  R$ %\n", setup.placa_video);
                printf("1x %s \t                     R$ %\n", setup.ram);
                printf("1x %s \t                     R$ %\n", setup.cooler);
                printf("1x %s \t                     R$ %\n", setup.fonte);
                printf("1x %s \t                     R$ %\n", setup.hd);
                printf("1x %s \t                     R$ %\n", setup.ssd);
                printf("--------------------------------------------------------------------------------\n");
                printf("Valor Total:               \n");


                break;
            case 'N':
                printf("Por favor, selecione o computador desejado novamente...");
                system("pause");
                comprar_computador();
                break;
            default:
                printf("Digite um caractere válido...");
                system("pause");
                goto compra;
                break;
            }
            system("pause");
            main();
            break;
        case 3:
            sobre();
            main();
            break;
        case 4:
            sair ();
            break;
        default:
            printf("\n\nDigite um valor válido...\n\n");
            system("pause");
            goto inicio; // Retorna o programa para o index setado lá em cima
            break;
        }

        setup = escolha_setup(plataforma);
    }while(a == 1); // Loop infinito do menu


    return 0;
}

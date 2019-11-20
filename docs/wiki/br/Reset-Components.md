Se você tiver um problema contínuo com falhas do Windows Update, é hora de redefinir os Componentes do Windows Update para o valor padrão.

Esta ferramenta foi projetada principalmente para resolver problemas relacionados aos componentes do Windows Update.


> ### Conteúdo
> 
> [Redefinir componentes do Windows Update](#redefinir-componentes-do-windows-update) <br />
> [Não foi possível parar o serviço de atualização do Windows](#não-foi-possível-parar-o-serviço-de-atualização-do-windows)


## Redefinir componentes do Windows Update

Antes de começar, lembre-se de fazer uma cópia de backup do registro do Windows.

Em seguida, selecione a opção "Redefinir componentes do Windows Update". Esta opção interromperá os serviços do Windows Update, enquanto limpa os componentes e restaura a configuração inicial.

Você verá que ele começou a redefinir os componentes do Windows Update automaticamente. Em alguns minutos, o processo será concluído.

Depois disso, instale o agente mais recente do Windows Update: [https://support.microsoft.com/pt-br/kb/949104](https://support.microsoft.com/pt-br/kb/949104).

Por fim, reinicie o seu PC para salvar as alterações.


## Não foi possível parar o serviço de atualização do Windows

Se o Windows Update Service não parar, execute esta ferramenta no modo de segurança.

<div align="center">
	<img src="https://github.com/ManuelGil/Reset-Windows-Update-Tool/blob/master/docs/images/failed.png?raw=true" alt="failed">
</div>
<br />

A maioria das maneiras de acessar o Modo de segurança envolve a entrada no ambiente de recuperação do Windows.

A maneira mais fácil de alcançar o ambiente de recuperação é manter a tecla Shift pressionada enquanto clica em Reiniciar.

Se o erro persistir, a instalação do Windows pode estar em más condições e requer reparo ou reinstalação.

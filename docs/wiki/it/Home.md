<div align="center">
	<a href="https://www.wureset.com/">
		<img src="https://github.com/ManuelGil/Reset-Windows-Update-Tool/blob/master/docs/images/wureset.png?raw=true" alt="Logo" height="300" width="300">
	</a>
</div>
<br />
<div align="center">
	<a href="https://github.com/ManuelGil/Reset-Windows-Update-Tool#changelog">
		<img src="https://img.shields.io/badge/stability-stable-green.svg" alt="Status">
	</a>
	<a href="https://github.com/ManuelGil/Reset-Windows-Update-Tool#changelog">
		<img src="https://img.shields.io/badge/release-v11.0.0.8-blue.svg" alt="Version">
	</a>
	<a href="https://github.com/ManuelGil/Reset-Windows-Update-Tool#changelog">
		<img src="https://img.shields.io/badge/update-april-yellowgreen.svg" alt="Update">
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

Questo strumento è stato sviluppato per essere utilizzato come strumento di supporto per le opzioni di riparazione del sistema. È possibile ripristinare i componenti di Windows Update. È anche in grado di eliminare file temporanei, scansionare, rilevare e riparare corruzioni dell'immagine di Windows, analizzare tutti i file di sistema protetti e sostituire i file danneggiati, modificare valori non validi nel registro di Windows, ripristinare le impostazioni di Winsock e di più.

Lo strumento per ripristinare i componenti di Windows Update funziona tramite la riga di comando, ma richiede requisiti di base come un sistema operativo compatibile, in esecuzione con privilegi di amministratore, ecc.

Questo documento è stato creato per descrivere le sequenze di processo per l'uso corretto dello strumento di ripristino di Windows Update.


> ### Contenuto
> 
> [Requisiti](#requisiti) <br />
> [Glossario](#glossario) <br />
> [Riferimenti](#riferimenti) <br />
> [Licenza](#licenza)


## Requisiti

Questo strumento è compatibile con Windows 7, Windows 8, Windows 8.1 e Windows 10.

Quando viene eseguito lo strumento Reimposta Windows Update, viene rilevata la versione o il sistema operativo incorporato determinando il nome e la famiglia del sistema.

Se il sistema operativo non è compatibile con questo strumento, verrà visualizzato un messaggio di errore e lo strumento verrà chiuso.


## Glossario

<dl>
<dt>DISM</dt>
<dd>Deployment Image Servicing and Management è uno strumento da riga di comando che viene utilizzato per montare e riparare le immagini di Windows prima della distribuzione.</dd>
<dt>Fix It</dt>
<dd>È un programma diagnostico che consente di rilevare problemi che potrebbero compromettere il corretto funzionamento di Windows.</dd>
<dt>Registry</dt>
<dd>È un database gerarchico centrale introdotto in Microsoft Windows 95 e Windows NT al fine di memorizzare le informazioni necessarie per configurare il sistema per uno o più utenti, applicazioni e dispositivi hardware.</dd>
<dt>Restore point</dt>
<dd>è una rappresentazione di uno stato memorizzato dei file di sistema del computer.</dd>
<dt>SFC</dt>
<dd>System File Checker o System File Checker è un'utilità di Windows che consente agli utenti di eseguire la scansione di corruzioni nei file di sistema di Windows e ripristinare i file danneggiati.</dd>
<dt>Winsock</dt>
<dd>È una libreria dinamica di funzioni DLL per Windows creata allo scopo di implementare TCP / IP. Include il supporto per l'invio e la ricezione di pacchetti di dati tramite socket BSD.</dd>
</dl>


## Riferimenti

Come si reimpostano I componenti di Windows Update?: [https://docs.microsoft.com/it-it/windows/deployment/update/windows-update-resources#come-si-reimpostano-i-componenti-di-windows-update](https://docs.microsoft.com/it-it/windows/deployment/update/windows-update-resources#come-si-reimpostano-i-componenti-di-windows-update).

Utilizzare lo strumento controllo File di sistema per ripristinare i file di sistema mancanti o danneggiati: [https://support.microsoft.com/it-it/kb/929833](https://support.microsoft.com/it-it/kb/929833).

Correggere gli errori di Windows Update utilizzando Gestione e manutenzione immagini distribuzione o lo strumento di analisi della conformità agli aggiornamenti di sistema: [https://support.microsoft.com/it-it/kb/947821](https://support.microsoft.com/it-it/kb/947821).


## Licenza

Reset Windows Update Tool è concesso in licenza con la licenza MS-PL - Vedi [Microsoft Public License](https://opensource.org/licenses/MS-PL) per maggiori dettagli.

Il ripristino dei componenti di Windows Update è la prima e principale opzione per correggere i problemi in Windows Update.

Tuttavia, questo processo richiede alcuni passaggi per evitare problemi durante la ricerca di una soluzione.


> ### Contenuto
> 
> [Modifica valori non validi nel registro](#modifica-valori-non-validi-nel-registro) <br />
> [Scansiona tutti i file di sistema protetti](#scansiona-tutti-i-file-di-sistema-protetti) <br />
> [DISM per Windows 8, Windows 8.1 e Windows 10](#dism-per-windows-8-windows-81-e-windows-10) <br />
> [Installa aggiornamenti](#installa-aggiornamenti) <br />
> [Soluzioni online](#soluzioni-online)


## Modifica valori non validi nel registro

Possono verificarsi seri problemi se il registro viene modificato in modo errato. Prima di modificarlo, creare una copia di backup del registro per il ripristino in caso di problemi.

L'opzione "Modifica valori non validi nel registro" crea una copia di backup del registro sul desktop di Windows.

Dopo la creazione del backup, i valori non validi nel registro vengono modificati. Questo corregge gli errori: 0x8000ffff, 0x80240020, 0x80070646, tra gli altri.

Per ripristinare il registro, seleziona "Unisci" dal menu contestuale.


## Scansiona tutti i file di sistema protetti

Un'altra opzione per correggere i problemi è "Scansiona tutti i file di sistema protetti". Questa opzione analizza i danni ai file di sistema di Windows e ripristina i file danneggiati.

Ricorda di riavviare il PC per salvare le modifiche.


## DISM per Windows 8, Windows 8.1 e Windows 10

Lo strumento di gestione e manutenzione delle immagini di distribuzione (DISM.exe) è uno strumento da riga di comando che può essere utilizzato per correggere errori di corruzione di Windows.

Lo strumento Reimposta Windows Update incorpora le righe nel comando DISM per ripristinare Windows. Le opzioni di riparazione con DISM sono:

  * Scansiona l'immagine per verificare la presenza di corruzione
  * Controlla le corruzioni rilevate
  * Ripara l'immagine di Windows
  * Pulire i componenti sostituiti

Per la riparazione di Windows, selezionare queste opzioni nella stessa sequenza. Quando si seleziona ciascuna opzione, dovrebbe apparire un messaggio di processo.

Potrebbero essere necessari alcuni minuti per completare l'operazione di comando. Ricorda di riavviare il PC dopo aver eseguito ciascun comando.

Se non è possibile riparare Windows, è necessario reinstallare il sistema.


## Installa aggiornamenti

Per iniziare l'installazione degli aggiornamenti, puoi accedere a Windows Update tramite l'opzione "Verifica aggiornamenti".

Durante l'installazione degli aggiornamenti, si consiglia di installare da 5 a 20 aggiornamenti (solo per Windows 8, Windows 8.1).


## Soluzioni online

Lo strumento Reimposta Windows Update ripara alcuni errori nell'installazione degli aggiornamenti, ma ci sono alcuni errori che non possono essere riparati con questo strumento.

Puoi trovare soluzioni sul sito Web di Microsoft. Per fare ciò, selezionare l'opzione "Esplora altre soluzioni online". Questa opzione apre il sito Web Microsoft.

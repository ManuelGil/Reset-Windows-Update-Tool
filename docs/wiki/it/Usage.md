Questo strumento implementa le funzioni attraverso la riga di comando. Alcune funzioni di ripristino non sono disponibili in tutte le versioni di Windows e lo strumento rileva questo tipo di disponibilità per mitigare possibili errori.

Immettere il numero della funzione e premere "Invio" per applicare queste correzioni


> ### Contenuto
> 
> [Esegui come amministratore](#esegui-come-amministratore) <br />
> [Riga di comando](#riga-di-comando)


## Esegui come amministratore

**L'User Account Control** (UAC - Controllo Account Utente) è un modulo software di protezione introdotto da Microsoft a partire da Windows Vista, che gestisce i permessi dei singoli utenti del computer in modo da impedire ai non autorizzati l'esecuzione di software dannoso o il danneggiamento di dati o di componenti del sistema. Uno dei principali difetti delle precedenti versioni dei sistemi Windows era, infatti, legato alla sicurezza e al problema della esecuzione di molti processi e applicazioni in modalità "amministratore di sistema".


### Come eseguire un programma come amministratore

Per eseguire un programma come amministratore, attenersi alla seguente procedura:

  1. Fare clic sull'icona utilizzata per eseguire il programma, quindi fare clic su **Esegui come amministratore**.
  2. Quando viene richiesta una password amministratore o una conferma, digitare la password amministratore o fare clic su **continua**.

Per alcune icone di programma, l'opzione **Esegui come amministratore** non è disponibile nel menu di scelta rapida. Per queste icone del programma, attenersi alla seguente procedura:

  1. Fare clic sull'icona utilizzata per eseguire il programma, quindi fare clic su **Proprietà**. Nella scheda **scorciatoia** della casella **destinazione** contiene la posizione e il nome del file di programma.
  2. Apri la cartella che contiene il file di programma.
  3. Fai clic sul file del programma, quindi fai clic su **Esegui come amministratore**. ![User Account Control permission](https://sawinternal.blob.core.windows.net/gds-images/support/kbgraphics/public/en-us/securityshield.jpg) Se ti viene richiesta una password amministratore o una conferma, digita la password o fai clic su **continua**.

Se è necessario eseguire un programma come amministratore, è consigliabile configurare il programma in modo che venga eseguito automaticamente come amministratore. Per fare ciò, attenersi alla seguente procedura:

  1. Fai clic sull'icona utilizzata per eseguire il programma, quindi fai clic su **Proprietà**.
  2. Nella scheda **compatibilità**, fare clic per selezionare la casella di controllo **eseguire questo programma come amministratore**, quindi fare clic su **Accetta**.

La scheda **compatibilità** non è disponibile per alcune icone di programma. Per queste icone del programma, attenersi alla seguente procedura:

  1. Fare clic sull'icona utilizzata per eseguire il programma, quindi fare clic su **Proprietà**. Nella scheda **di collegamento** della casella di **destinazione** contiene la posizione e il nome del file di programma.
  2. Apri la cartella che contiene il file di programma.
  3. Fare clic sul file del programma e quindi fare clic su **Proprietà**.
  4. Nella scheda **compatibilità**, fare clic per selezionare la casella di controllo **eseguire questo programma come amministratore**, quindi fare clic su **Accetta**.

<div align="center">
	<img src="https://github.com/ManuelGil/Reset-Windows-Update-Tool/blob/master/docs/images/runas.gif?raw=true" alt="runas">
</div>
<br />

Per ulteriori informazioni, vedere [riferimento](https://support.microsoft.com/it-it/kb/922708)


## Riga di comando

Reset Windows Update Tool è possibile utilizzare la riga di comando come segue:

```
$ WURESET [/reset][/search][/clean:{temp|regs|sock}][/sfc][/dism:{scan|check|repair|clean}]
```

**Elenco dei parametri**

<table border="0" cellpadding="4">
	<tr>
		<th>
			Parametro
		</th>
		<th>
			Descrizione
		</th>
		<th>
			Abbreviazione
		</th>
		<th>
			Esempio
		</th>
	</tr>
	<tr>
		<td>
			reset
		</td>
		<td>
			Ripristina componenti di Windows Update.
		</td>
		<td>
		</td>
		<td>
			/reset <br />
			-reset
		</td>
	</tr>
	<tr>
		<td>
			search
		</td>
		<td>
			Controlla aggiornamenti.
		</td>
		<td>
		</td>
		<td>
			/search <br />
			-search
		</td>
	</tr>
	<tr>
		<td>
			clean
		</td>
		<td>
			Opzioni di pulizia.
		</td>
		<td>
		</td>
		<td>
			/clean:temp <br />
			/clean:regs:temp <br />
			-clean:temp <br />
			-clean:sock
		</td>
	</tr>
	<tr>
		<td>
			sfc
		</td>
		<td>
			Scansiona tutti i file di sistema protetti.
		</td>
		<td>
		</td>
		<td>
			/sfc <br />
			-sfc
		</td>
	</tr>
	<tr>
		<td>
			dism
		</td>
		<td>
			Opzioni DISM.
		</td>
		<td>
		</td>
		<td>
			/dism:scan:repair:clean <br />
			-dism:check:repair
		</td>
	</tr>
	<tr>
		<td>
			help
		</td>
		<td>
			Mostra un messaggio di aiuto.
		</td>
		<td>
			<b>h</b> o <b>?</b>
		</td>
		<td>
			/help <br />
			/h <br />
			/? <br />
			-help <br />
			-h <br />
			-?
		</td>
	</tr>
	<tr>
		<td>
			version
		</td>
		<td>
			Mostra un messaggio di versione.
		</td>
		<td>
			<b>v</b>
		</td>
		<td>
			/version <br />
			/v <br />
			-version <br />
			-v
		</td>
	</tr>
</table>

**Campione di utilizzo:**

<div align="center">
	<img src="https://github.com/ManuelGil/Reset-Windows-Update-Tool/blob/master/docs/images/commands.gif?raw=true" alt="command line">
</div>
<br />

Per verificare la versione

<div align="center">
	<img src="https://github.com/ManuelGil/Reset-Windows-Update-Tool/blob/master/docs/images/version.gif?raw=true" alt="version">
</div>

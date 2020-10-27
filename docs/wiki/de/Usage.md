Dieses Tool implementiert Funktionen über die Befehlszeile. Einige Wiederherstellungsfunktionen sind nicht in allen Windows-Versionen verfügbar, und das Tool erkennt diese Art der Verfügbarkeit, um mögliche Fehler zu minimieren.

Geben Sie die Anzahl der Funktionen ein und drücken Sie die Eingabetaste, um diese Korrekturen anzuwenden.


> ### Inhalt
>
> [Als Administrator ausführen](#als-administrator-ausführen) <br />
> [Befehlszeile](#befehlszeile)


## Als Administrator ausführen

**Benutzerkontensteuerung** (UAC) ist eine obligatorische Funktion zur Durchsetzung der Zugriffskontrolle, die mit den Betriebssystemen Windows Vista und Windows Server 2008 von Microsoft eingeführt wurde. Eine entspanntere Version ist auch in Windows 7, Windows Server 2008 R2, Windows 8, Windows Server 2012 und Windows 10 verfügbar Sicherheit von Microsoft Windows durch Beschränkung der Anwendungssoftware auf Standardbenutzerrechte, bis ein Administrator eine Erlaubniss autorisiert. Auf diese Weise erhalten möglicherweise nur Anwendungen, denen der Benutzer vertraut, Administratorrechte, und Malware sollte davon abgehalten werden, das Betriebssystem zu gefährden. Mit anderen Worten, einem Benutzerkonto können Administratorrechte zugewiesen sein, aber Anwendungen, die der Benutzer ausführt, erben diese Berechtigungen nur, wenn sie zuvor genehmigt wurden oder der Benutzer sie ausdrücklich autorisiert.


### Wie führen ein Programm als Administrator aus

Gehen Sie folgendermaßen vor, um ein Programm als Administrator auszuführen:

1. Klicken Sie mit der rechten Maustaste auf das Symbol, mit dem Sie das Programm ausführen, und klicken Sie dann auf **Als Administrator ausführen**.
2. Wenn Sie zur Eingabe eines Administratorkennworts oder einer Bestätigung aufgefordert werden, geben Sie das Administratorkennwort ein oder klicken Sie auf **Fortsetzen**.

Für einige Programmsymbole ist die **Als Administrator ausführen** Die Option ist im Kontextmenü nicht verfügbar. Führen Sie für diese Programmsymbole die folgenden Schritte aus:

1. Klicken Sie mit der rechten Maustaste auf das Symbol, mit dem Sie das Programm ausführen, und klicken Sie dann auf **Eigenschaften**. Auf der **Abkürzung** Tab, das **Ziel** Box enthält den Speicherort und den Namen der Programmdatei.
2. Öffnen Sie den Ordner, der die Programmdatei enthält.
3. Klicken Sie mit der rechten Maustaste auf die Programmdatei, und klicken Sie dann auf **Als Administrator ausführen**. ![Berechtigung zur Benutzerkontensteuerung](https://sawinternal.blob.core.windows.net/gds-images/support/kbgraphics/public/de-de/securityshield.jpg) Wenn Sie zur Eingabe eines Administratorkennworts oder einer Bestätigung aufgefordert werden, geben Sie das Kennwort ein oder klicken Sie auf **Fortsetzen**.

Wenn Sie ein Programm als Administrator ausführen müssen, möchten Sie das Programm möglicherweise so einrichten, dass Sie es automatisch als Administrator ausführen. Gehen Sie dazu folgendermaßen vor:

1. Klicken Sie mit der rechten Maustaste auf das Symbol, mit dem Sie das Programm ausführen, und klicken Sie dann auf **Eigenschaften**.
2. auf den **Kompatibilität** tab, wahlen Sie **RDieses Programm als Administrator ausführen** und dann Klicken Sie **OK**.

Die Registerkarte ** Kompatibilität ** ist für einige Programmsymbole nicht verfügbar. Führen Sie für diese Programmsymbole die folgenden Schritte aus:

1. Klicken Sie mit der rechten Maustaste auf das Symbol, mit dem Sie das Programm ausführen, und klicken Sie dann auf **Eigenschaften**. Auf der Registerkarte **Verknüpfung** enthält das Feld **Ziel** den Speicherort und den Namen der Programmdatei.
2. Öffnen Sie den Ordner, der die Programmdatei enthält.
3. Klicken Sie mit der rechten Maustaste auf die Programmdatei, und klicken Sie dann auf **Eigenschaften**.
4. Aktivieren Sie auf der Registerkarte **Kompatibilität** das Kontrollkästchen **Dieses Programm als Administrator ausführen** und klicken Sie dann auf **OK**.

<div align="center">
	<img src="https://github.com/ManuelGil/Reset-Windows-Update-Tool/blob/master/docs/images/runas.gif?raw=true" alt="runas">
</div>
<br />

Weitere Informationen finden Sie unter [Referenzen](https://support.microsoft.com/de-de/kb/922708)


## Befehlszeile

Das Windows Update-Tool zurücksetzen kann auf folgende Weise für die Befehlszeile verwendet werden:

```
$ WURESET [/reset][/search][/clean:{temp|regs|sock}][/sfc][/dism:{scan|check|repair|clean}]
```

**Parameterliste**

<table border="0" cellpadding="4">
	<tr>
		<th>
			Parameter
		</th>
		<th>
			Beschreibung
		</th>
		<th>
			Abkürzung
		</th>
		<th>
			Beispiel
		</th>
	</tr>
	<tr>
		<td>
			zurücksetzen
		</td>
		<td>
			Setzen Sie die Windows Update-Komponenten zurück.
		</td>
		<td>
		</td>
		<td>
			/zurücksetzen <br />
			-zurücksetzen
		</td>
	</tr>
	<tr>
		<td>
			Suche
		</td>
		<td>
			Suche nach Updates.
		</td>
		<td>
		</td>
		<td>
			/Suche <br />
			-Suche
		</td>
	</tr>
	<tr>
		<td>
			reinigen
		</td>
		<td>
			Optionen reinigen.
		</td>
		<td>
		</td>
		<td>
			/reinigen:temp <br />
			/reinigen:regs:temp <br />
			-reinigen:temp <br />
			-reinigen:sock
		</td>
	</tr>
	<tr>
		<td>
			sfc
		</td>
		<td>
			Scannt alle geschützten Systemdateien.
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
			Dism Optionen.
		</td>
		<td>
		</td>
		<td>
			/dism:scanen:beheben:reinigen <br />
			-dism:check:beheben
		</td>
	</tr>
	<tr>
		<td>
			Hilfe
		</td>
		<td>
			Zeigt eine Hilfemeldung an.
		</td>
		<td>
			<b>h</b> oder <b>?</b>
		</td>
		<td>
			/Hilfe <br />
			/h <br />
			/? <br />
			-Hilfe <br />
			-h <br />
			-?
		</td>
	</tr>
	<tr>
		<td>
			Version
		</td>
		<td>
			Zeigt eine Versionsmeldung an.
		</td>
		<td>
			<b>v</b>
		</td>
		<td>
			/Version <br />
			/v <br />
			-Version <br />
			-v
		</td>
	</tr>
</table>

**Sample usage:**

<div align="center">
	<img src="https://github.com/ManuelGil/Reset-Windows-Update-Tool/blob/master/docs/images/commands.gif?raw=true" alt="command line">
</div>
<br />

Überprüfung der Version

<div align="center">
	<img src="https://github.com/ManuelGil/Reset-Windows-Update-Tool/blob/master/docs/images/version.gif?raw=true" alt="version">
</div>

<div align="center">
	<a href="https://wureset.com/">
		<img src="https://github.com/ManuelGil/Reset-Windows-Update-Tool/blob/master/docs/images/wureset.png?raw=true" alt="Logo" height="300" width="300">
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

Dieses Tool wurde zur Unterstützung von Systemreparaturoptionen entwickelt. Es ist möglich, die Windows Update-Komponenten zurückzusetzen. Außerdem können temporäre Dateien gelöscht werden, Beschädigungen mit dem Windows-Systemabbild gescannt, erkannt und repariert, alle geschützten Systemdateien gescannt und beschädigte Dateien ersetzt, ungültige Werte in der Windows-Registrierung geändert, Winsock-Einstellungen zurückgesetzt und vieles mehr.

Das Tool zum Zurücksetzen von Windows Update-Komponenten funktioniert über die Befehlszeile, benötigt jedoch grundlegende Anforderungen als kompatibles Betriebssystem, wird mit erhöhten Berechtigungen ausgeführt usw.

Dieses Dokument wurde erstellt, um die Prozesssequenzen für die korrekte Verwendung des Windows Update-Tools zum Zurücksetzen zu beschreiben.


> ### Inhalt
>
> [Anforderung](#anforderung) <br />
> [Glossar](#glossar) <br />
> [Referenz](#referenz) <br />
> [Lizenz](#lizenz)


## Anforderung

Dieses Tool ist kompatibel mit Windows 8, Windows 8.1 und Windows 10.

Wenn Sie das Windows Update-Tool zurücksetzen ausführen, wird festgestellt, dass die Version oder der Build des Betriebssystems den Namen und die Familie des Betriebssystems bestimmt.

Wenn das Betriebssystem nicht mit diesem Tool kompatibel ist, wird eine Fehlermeldung angezeigt und das Tool wird geschlossen.


## Glossar

<dl>
<dt>DISM</dt>
<dd>Wartung und Verwaltung von Bereitstellungsimages ist ein Befehlszeilentool, mit dem ein Windows-Image gewartet werden kann.</dd>
<dt>Fix It</dt>
<dd>Diagnoseprogramm zur Erkennung von Windows-Problemen.</dd>
<dt>Registrierung</dt>
<dd>ist eine Datenbank, in der Einstellungen für das Betriebssystem gespeichert sind.</dd>
<dt>Wiederherstellungspunkt</dt>
<dd>ist eine Darstellung eines gespeicherten Status der Systemdateien Ihres Computers.</dd>
<dt>SFC</dt>
<dd>System File Checker ist ein Dienstprogramm, mit dem Benutzer nach Beschädigungen suchen können.</dd>
<dt>Winsock</dt>
<dd>Die Windows Sockets-API ist eine technische Spezifikation, die definiert, wie Windows-Netzwerksoftware auf das Netzwerk zugreifen soll.</dd>
</dl>


## Referenz

Wie setze ich Windows Update-Komponenten zurück?: [https://support.microsoft.com/de-de/kb/971058](https://support.microsoft.com/de-de/kb/971058).

Verwenden Sie das System File Checker-Tool, um fehlende oder beschädigte Systemdateien zu reparieren: [https://support.microsoft.com/de-de/kb/929833](https://support.microsoft.com/de-de/kb/929833).

Beheben Sie Windows Update-Fehler mithilfe des Tools DISM oder System Update Readiness: [https://support.microsoft.com/de-de/kb/947821](https://support.microsoft.com/de-de/kb/947821).


## Lizenz

Windows Update Tool zurücksetzen ist unter der MS-PL-Lizenz lizenziert - siehe die [Microsoft Public License](https://opensource.org/licenses/MS-PL) für Details.

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
		<img src="https://img.shields.io/badge/update-june-yellowgreen.svg" alt="Update">
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

Cet outil a été développé pour être utilisé comme support des options de réparation du système. Il est possible de réinitialiser les composants Windows Update. Est également capable de supprimer les fichiers temporaires, de scanner, de détecter et de réparer les corruptions avec l'image système Windows, d'analyser tous les fichiers système protégés et de remplacer tous les fichiers corrompus, de modifier les valeurs invalides dans le registre Windows, de réinitialiser les paramètres Winsock et plus encore.

L'outil de réinitialisation des composants de Windows Update fonctionne via la ligne de commande, mais nécessite des exigences de base en tant que système d'exploitation compatible, exécuté avec des privilèges élevés, etc.

Ce document a été créé pour décrire les séquences de processus pour l'utilisation correcte de Reset Windows Update Tool.


> ### Contenu
> 
> [Exigences](#exigences) <br />
> [Glossaire](#glossaire) <br />
> [Référence](#référence) <br />
> [Licence](#licence)


## Exigences

Cet outil est compatible avec Windows 8, Windows 8.1 et Windows 10.

Lorsque vous exécutez Réinitialiser l'outil de mise à jour Windows est détecté, la version ou la version du système d'exploitation a déterminé le nom et la famille du système d'exploitation.

Si le système d'exploitation n'est pas compatible avec cet outil, affichez un message d'erreur et l'outil se fermera.

## Glossaire

<dl>
<dt>DISM</dt>
<dd>Deployment Image Servicing and Management est un outil en ligne de commande qui peut être utilisé pour gérer une image système Windows.</dd>
<dt>Fix It</dt>
<dd>programme de diagnostic pour détecter les problèmes de Windows.</dd>
<dt>Registry</dt>
<dd>est une base de données qui stocke les paramètres du système d'exploitation.</dd>
<dt>Restore point</dt>
<dd>est une représentation d'un état stocké des fichiers système de votre ordinateur.</dd>
<dt>SFC</dt>
<dd>System File Checker est un utilitaire qui permet aux utilisateurs de rechercher les corruptions.</dd>
<dt>Winsock</dt>
<dd>Windows Sockets API est une spécification technique qui définit comment le logiciel réseau Windows doit accéder au réseau.</dd>
</dl>


## Référence

Comment réinitialiser les composants Windows Update?: [https://support.microsoft.com/fr-fr/kb/971058](https://support.microsoft.com/fr-fr/kb/971058).

Utilisez l'outil Vérificateur des fichiers système pour réparer les fichiers système manquants ou endommagés: [https://support.microsoft.com/fr-fr/kb/929833](https://support.microsoft.com/fr-fr/kb/929833).

Correction des erreurs de mise à jour de Windows à l'aide de DISM ou de l'outil d'analyse de l'installation conforme des mises à jour du système: [https://support.microsoft.com/fr-fr/kb/947821](https://support.microsoft.com/fr-fr/kb/947821).


## Licence

Reset Windows Update Tool est sous licence MS-PL - voir le [Microsoft Public License](https://opensource.org/licenses/MS-PL) pour plus de détails.

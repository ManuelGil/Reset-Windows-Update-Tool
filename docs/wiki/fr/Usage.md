Cet outil implémente des fonctions via la ligne de commande. Certaines fonctions de récupération ne sont pas disponibles sur toutes les versions de Windows et l'outil détecte ce type de disponibilité pour atténuer les erreurs possibles.

Tapez le numéro de fonction et appuyez sur "Entrée" pour appliquer ces corrections.


> ### Contenu
> 
> [Exécuter en tant qu'administrateur](#exécuter-en-tant-quadministrateur) <br />
> [Ligne de commande](#ligne-de-commande)


## Exécuter en tant qu'administrateur

**User Account Control** (UAC, contrôle du compte de l'utilisateur) est un mécanisme de protection des données introduit dans les systèmes d'exploitation Windows Vista et 7.

UAC est aussi connu sous ses dénominations précédentes durant le développement de Windows Vista, à savoir UAP (User Account Protection) et LUP (Least User Privilege).


### Comment faire pour exécuter un programme en tant qu’administrateur

Pour exécuter un programme en tant qu’administrateur, procédez comme suit:

  1. Cliquez sur l’icône que vous utilisez pour exécuter le programme, puis cliquez sur **Exécuter en tant qu’administrateur**.
  2. Lorsque vous y êtes invité pour un mot de passe administrateur ou à confirmer une opération, tapez le mot de passe administrateur ou cliquez sur **Continuer**.

Pour certaines icônes de programme, l’option **Exécuter en tant qu’administrateur** n’est pas disponible dans le menu contextuel. Ces icônes de programme, procédez comme suit:

  1. Cliquez sur l’icône que vous utilisez pour exécuter le programme, puis cliquez sur **Propriétés**. l’onglet **raccourci**, la zone **cible** contient l’emplacement et le nom du fichier du programme.
  2. Ouvrez le dossier qui contient le fichier de programme.
  3. Cliquez sur le fichier programme, puis cliquez sur **Exécuter en tant qu’administrateur**. ![User Account Control permission](https://sawinternal.blob.core.windows.net/gds-images/support/kbgraphics/public/en-us/securityshield.jpg) Si vous y êtes invité pour un mot de passe administrateur ou à confirmer une opération, tapez le mot de passe, ou cliquez sur **Continuer**.

Si vous devez exécuter un programme en tant qu’administrateur, vous souhaiterez peut-être configurer le programme afin que vous l’exécuter automatiquement en tant qu’administrateur. Pour ce faire, procédez comme suit:

  1. Cliquez sur l’icône que vous utilisez pour exécuter le programme, puis cliquez sur **Propriétés**.
  2. Sous l’onglet **compatibilité**, puis activez la case à cocher **exécuter ce programme en tant qu’administrateur**, puis cliquez sur **OK**.

L’onglet **compatibilité** n’est pas disponible pour certaines icônes de programme. Ces icônes de programme, procédez comme suit:

  1. Cliquez sur l’icône que vous utilisez pour exécuter le programme, puis cliquez sur **Propriétés**. Sous l’onglet **raccourci**, la zone **cible** contient l’emplacement et le nom du fichier du programme.
  2. Ouvrez le dossier qui contient le fichier de programme.
  3. Cliquez sur le fichier programme, puis cliquez sur **Propriétés**.
  4. Sous l’onglet **compatibilité**, puis activez la case à cocher **exécuter ce programme en tant qu’administrateur**, puis cliquez sur **OK**.

<div align="center">
	<img src="https://github.com/ManuelGil/Reset-Windows-Update-Tool/blob/master/docs/images/runas.gif?raw=true" alt="runas">
</div>
<br />

Pour plus d'informations, voir [références](https://support.microsoft.com/fr-fr/kb/922708)


## Ligne de commande

L'outil "Réinitialiser Windows Update" peut être utilisé pour la ligne de commande de cette manière:

```
$ WURESET [/reset][/search][/clean:{temp|regs|sock}][/sfc][/dism:{scan|check|repair|clean}]
```

**Parameter List**

<table border="0" cellpadding="4">
	<tr>
		<th>
			Paramètre
		</th>
		<th>
			Description
		</th>
		<th>
			Abréviation
		</th>
		<th>
			Exemple
		</th>
	</tr>
	<tr>
		<td>
			reset
		</td>
		<td>
			Réinitialiser les composants de Windows Update.
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
			Rechercher les mises à jour.
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
			Options propres.
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
			Analyse tous les fichiers système protégés.
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
			Options Dism.
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
			Affiche un message d'aide.
		</td>
		<td>
			<b>h</b> or <b>?</b>
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
			Affiche un message de version.
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

**Exemple d'utilisation:**

<div align="center">
	<img src="https://github.com/ManuelGil/Reset-Windows-Update-Tool/blob/master/docs/images/commands.gif?raw=true" alt="command line">
</div>
<br />

Pour vérifier la version

<div align="center">
	<img src="https://github.com/ManuelGil/Reset-Windows-Update-Tool/blob/master/docs/images/version.gif?raw=true" alt="version">
</div>

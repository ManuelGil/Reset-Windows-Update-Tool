Si vous obtenez continuellement un problème d'échec de Windows Update, il est temps de réinitialiser les composants Windows Update à sa valeur par défaut.

Cet outil a été principalement conçu pour résoudre les problèmes liés aux composants Windows Update.


> ### Contenu
> 
> [Réinitialiser les composants de Windows Update](#réinitialiser-les-composants-de-windows-update) <br />
> [Le service Windows Update n'a pas pu être arrêté](#le-service-windows-update-na-pas-pu-être-arrêté)


## Réinitialiser les composants de Windows Update

Avant de commencer, n'oubliez pas de faire une sauvegarde du registre.

Sélectionnez ensuite l'option "Réinitialiser les composants Windows Update". Cette option arrêtera les services Windows Update, tout en nettoyant les composants et restaurera les paramètres initiaux.

Vous verrez qu'il a commencé à réinitialiser automatiquement les composants de Windows Update. Dans quelques minutes, le processus sera terminé.

Après cela, installez le dernier agent Windows Update: [https://support.microsoft.com/fr-fr/kb/949104](https://support.microsoft.com/fr-fr/kb/949104).

Enfin, redémarrez votre PC pour enregistrer les modifications.


## Le service Windows Update n'a pas pu être arrêté

Si le service Windows Update ne s'arrête pas, exécutez cet outil en mode sans échec.

<div align="center">
	<img src="https://github.com/ManuelGil/Reset-Windows-Update-Tool/blob/master/docs/images/failed.png?raw=true" alt="failed">
</div>
<br />

La plupart des façons d'accéder au mode sans échec impliquent d'abord d'accéder à l'environnement de récupération Windows.

Le moyen le plus simple d'accéder à l'environnement de récupération consiste à maintenir la touche Maj enfoncée tout en cliquant sur Redémarrer.

Si l'erreur persiste, votre installation Windows peut être trouvée en mauvais état et nécessite une réparation ou une réinstallation.

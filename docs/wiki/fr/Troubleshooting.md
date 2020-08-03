Réinitialiser les composants de Windows Update est la première et principale option pour corriger les problèmes dans Windows Update.

Cependant, ce processus nécessite certaines étapes pour éviter les problèmes lors de la recherche d'une solution.


> ### Contenu
> 
> [Modifier les valeurs non valides dans le registre](#modifier-les-valeurs-non-valides-dans-le-registre) <br />
> [Analyser tous les fichiers système protégés](#analyser-tous-les-fichiers-système-protégés) <br />
> [DISM pour Windows 8, Windows 8.1 et Windows 10](#dism-pour-windows-8-windows-81-et-windows-10) <br />
> [Installation de mises à jour](#installation-de-mises-à-jour) <br />
> [Solutions en ligne](#solutions-en-ligne)


## Modifier les valeurs non valides dans le registre

De graves problèmes peuvent survenir si vous modifiez le registre de manière incorrecte. Avant de le modifier, effectuez une sauvegarde du registre pour sa restauration en cas de problèmes.

L'option "Modifier les valeurs non valides dans le registre" crée une sauvegarde du registre sur le bureau Windows.

Après avoir créé la sauvegarde, les valeurs non valides du registre sont modifiées. Cela corrige les erreurs: 0x8000FFFF, 0x80240020, 0x80070646 et autres.

Pour restaurer le registre, sélectionnez "Fusionner" dans le menu contextuel.


## Analyser tous les fichiers système protégés

Une autre option pour corriger les problèmes est "Analyser tous les fichiers système protégés". Cette option recherche les corruptions dans les fichiers système Windows et restaure les fichiers corrompus.

N'oubliez pas de redémarrer votre PC pour enregistrer les modifications.


## DISM pour Windows 8, Windows 8.1 et Windows 10

Deployment Image Servicing and Management (DISM.exe) est un outil de ligne de commande qui peut être utilisé pour corriger les erreurs de corruption de Windows.

L'outil de réinitialisation de Windows Update comprend des lignes sur les commandes DISM pour réparer Windows. Les options de réparation avec DISM sont:

  * Scannez l'image pour vérifier la corruption
  * Vérifiez les corruptions détectées
  * Réparer l'image
  * Nettoyer les composants remplacés

Pour réparer Windows, sélectionnez ces options dans la même séquence. En sélectionnant chaque option, un message de processus devrait apparaître.

L'opération de commande peut prendre plusieurs minutes. N'oubliez pas de redémarrer votre PC après avoir exécuté chaque commande.

Si Windows n'est pas réparable, vous devez réinstaller le système.


## Installation de mises à jour

Pour commencer l'installation des mises à jour, vous pouvez accéder à Windows Update via l'option "Rechercher les mises à jour".

Lors de l'installation des mises à jour, il est recommandé d'installer 5 à 20 mises à jour (uniquement Windows 8, Windows 8.1).


## Solutions en ligne

L'outil de réinitialisation de Windows Update répare certaines erreurs lors de l'installation des mises à jour. Mais il y a quelques erreurs qui ne sont pas réparables avec cet outil.

Vous pouvez trouver des solutions sur le site Web de Microsoft en sélectionnant l'option "Explorer d'autres solutions en ligne". Cette option ouvre le site Web de Microsoft.

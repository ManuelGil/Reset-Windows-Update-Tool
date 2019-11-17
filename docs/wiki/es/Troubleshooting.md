Restablecer los componentes de Windows Update es la primera y principal opción para corregir problemas en Windows Update.

Sin embargo, este proceso requiere algunos pasos para evitar problemas durante la búsqueda de una solución.


> ### Contenidos
> 
> [Cambiar los valores inválidos en el registro](#cambiar-los-valores-inválidos-en-el-registro) <br />
> [Analizar todos los archivos protegidos del sistema](#analizar-todos-los-archivos-protegidos-del-sistema) <br />
> [DISM para Windows 8, Windows 8.1 y Windows 10](#dism-para-windows-8-windows-81-y-windows-10) <br />
> [Instalar actualizaciones](#instalar-actualizaciones) <br />
> [Soluciones en línea](#soluciones-en-línea)


## Cambiar los valores inválidos en el registro

Pueden producirse problemas graves si se modifica incorrectamente el registro. Antes de modificarlo, haga una copia de seguridad del registro para su restauración en caso de que ocurran problemas.

La opción "Cambiar valores inválidos en el registro" crear una copia de seguridad del registro en el escritorio de Windows.

Después de la creación de la copia de seguridad, los valores inválidos en el registro son cambiados. Esto corrige los errores: 0x8000ffff, 0x80240020, 0x80070646, entre otros.

Para restaurar el registro, seleccione "Combinar" en el menú contextual.


## Analizar todos los archivos protegidos del sistema

Otra opción para corregir problemas es "Analizar todos los archivos protegidos del sistema". Esta opción escanea en busca de daños en los archivos del sistema de Windows y restaura los archivos dañados.

Recuerde reiniciar su PC para guardar los cambios.


## DISM para Windows 8, Windows 8.1 y Windows 10

La herramienta Deployment Image Servicing and Management (DISM.exe) es una herramienta de línea de comandos que se puede utilizar para corregir los errores de corrupción de Windows.

La herramienta de Reset Windows Update incorpora líneas sobre el comando DISM para reparar Windows. Las opciones de reparación con DISM son:

  * Escanear la imagen para comprobar si hay corrupción
  * Comprobar las corrupciones detectadas
  * Reparar la imagen de Windows
  * Limpiar los componentes reemplazados

Para la reparación de Windows, seleccione estas opciones en la misma secuencia. Al seleccionar cada opción, debería aparecer un mensaje de proceso.

Puede tomar varios minutos para que la operación de comandos sea completada. Recuerde reiniciar su PC después de ejecutar cada comando.

En Windows Vista y Windows 7, use System Update Readiness tool: [https://support.microsoft.com/es-es/kb/947821#bookmark-checksur](https://support.microsoft.com/es-es/kb/947821#bookmark-checksur).

Si Windows no se puede reparar, se debe volver a instalar el sistema.


## Instalar actualizaciones

Para iniciar la instalación de actualizaciones, puede ir a Windows Update a través de la opción "Buscar actualizaciones".

Durante la instalación de actualizaciones, se recomienda instalar 5 a 20 actualizaciones (sólo para Windows 7, Windows 8, Windows 8.1).


## Soluciones en línea

La herramienta Reset Windows Update reparar algunos errores en la instalación de actualizaciones, pero hay algunos errores que no se pueden reparar con esta herramienta.

Usted puede encontrar soluciones en el sitio web de Microsoft. Para ello seleccione la opción "Explorar otras soluciones en línea". Esta opción abre la página web de Microsoft.

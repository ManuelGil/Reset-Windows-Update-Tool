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

This tool has been developed for use as a support of system repair options. It is possible to reset the Windows Update Components. Also is able to delete temporary files, scan, detect and repair corruptions with the Windows System image, scan all protected system files and replace any corrupted files, change invalid values in the Windows Registry, reset Winsock settings and more.

The tool for Reset Windows Update Components works through command-line but need of basic requirements as a compatible operative system, run with the elevated privileges, etc.

This document has been created to describe the process sequences for the correct use of Reset Windows Update Tool.


> ### Contents
>
> [Requirements](#requirements) <br />
> [Glossary](#glossary) <br />
> [Reference](#reference) <br />
> [License](#license)


## Requirements

This tool is compatible with Windows 8, Windows 8.1 and Windows 10.

When you run Reset Windows Update Tool is detected the version or build of the operative system determined the name and family of the operative system.

If the operating system is not compatible with this tool, display an error message and the tool will be closed.


## Glossary

<dl>
<dt>DISM</dt>
<dd>Deployment Image Servicing and Management is a command-line tool that can be used to service a Windows image.</dd>
<dt>Fix It</dt>
<dd>diagnostic program to detect problems of Windows.</dd>
<dt>Registry</dt>
<dd>is a database that stores settings for the operating system.</dd>
<dt>Restore point</dt>
<dd>is a representation of a stored state of your computer's system files.</dd>
<dt>SFC</dt>
<dd>System File Checker is a utility that allows users to scan for corruptions.</dd>
<dt>Winsock</dt>
<dd>Windows Sockets API is a technical specification that defines how Windows network software should access network.</dd>
</dl>


## Reference

How do I reset Windows Update components?: [https://support.microsoft.com/en-us/kb/971058](https://support.microsoft.com/en-us/kb/971058).

Use the System File Checker tool to repair missing or corrupted system files: [https://support.microsoft.com/en-us/kb/929833](https://support.microsoft.com/en-us/kb/929833).

Fix Windows Update errors by using the DISM or System Update Readiness tool: [https://support.microsoft.com/en-us/kb/947821](https://support.microsoft.com/en-us/kb/947821).


## License

Reset Windows Update Tool is licensed under the MS-PL License - see the [Microsoft Public License](https://opensource.org/licenses/MS-PL) for details.

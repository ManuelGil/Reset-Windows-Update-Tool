/**
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * $Id$
 * <p>Title: WUReset Project.</p>
 * <p>Description: Reset Windows Update Tool.</p>
 * <p>Copyright: Microsoft Public License (MS-PL).</p>
 * <p>Company: <a href="https://imgil.dev/">Manuel Gil</a></p>
 *
 * Problem: Reset the Windows Update Components.
 * @author $Author: Manuel Gil. $
 * @version $Revision: 11.0.0.9 $ $Date: 10/12/2020 $
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

#ifndef _Functions_
#define _Functions_

#include <iostream>
#include <string>

#include "display.h"
#include "osdetector.h"
#include "error.h"
#include "principalmenu.h"
#include "commands.h"

using namespace std;

/**
 * Performs all troubleshooting functions.
 */
class Functions
{

private:
    // -----------------------------------------------------------------
    // Relations
    // -----------------------------------------------------------------
    Display *print;
    OSDetector *os;
    Error *err;
    PrincipalMenu *mnuPrincipal;
    Commands *cmd;

public:
    /**
		 * Load the relations.
		 */
    Functions()
    {
        print = Display::getInstance();
        err = new Error();
        cmd = new Commands();
    }

    /**
		 * Return the command object.
		 * return cmd
		 */
    Commands *getCommands()
    {
        return cmd;
    }

    /**
		 * Check the compatibility with the operating system.
		 */
    void compatibility()
    {
        if (os->isCompatible() != true)
        {
            print->writeTopText("Sorry, this Operating System is not compatible with this tool.");

            err->showMessage("    An error occurred while attempting to verify your system.\n    Can this using a business or test version.\n\n    If not, verify that your system has the correct security fix.\n");

            print->writeTextLine("Press any key to continue . . .");
            cmd->pause();
            cmd->clean();
            cmd->close();
        }
    }

    /**
		 * Check for Administrator elevation.
		 */
    void permission()
    {
        int errorlevel;

        errorlevel = cmd->executer("openfiles>nul 2>&1");

        if (errorlevel != 0)
        {
            print->writeTopText("Checking for Administrator elevation.");

            err->showMessage("    You are not running as Administrator.\n    This tool cannot do it's job without elevation.\n\n    You need run this tool as Administrator.\n");

            print->writeTextLine("Press any key to continue . . .");
            cmd->pause();
            cmd->clean();
            cmd->close();
        }
    }

    /**
		 * Show the terms an conditions of use.
		 */
    void terms()
    {
        string option;

        print->writeTopText("Terms and Conditions of Use.");
        print->writeTextLine("    The methods inside this tool modify files and registry settings.\n    While you are tested and tend to work, We not take responsibility for\n    the use of this tool.\n\n    This tool is provided without warranty. Any damage caused is your\n    own responsibility.\n\n    As well, batch files are almost always flagged by anti-virus, feel free\n    to review the code if you're unsure.\n");

        string accept = "Do you want to continue with this process? (Y/N) ";

        print->writeText(accept);
        cin >> option;

        option = strupr((char *)option.c_str());

        int pos = accept.find_last_of("(") + 1;
        int size = accept.find_last_of("/") - pos;

        int pos2 = accept.find_last_of("/") + 1;
        int size2 = accept.find_last_of(")") - pos2;

        string denied = accept.substr(pos2, size2);

        denied = strupr((char *)denied.c_str());

        accept = accept.substr(pos, size);

        accept = strupr((char *)accept.c_str());

        if (option != accept)
        {
            if (option == denied)
            {
                cmd->clean();
                cmd->close();
            }
            else
            {
                cout << endl;
                err->showMessage("Invalid option.");
                print->writeTextLine("Press any key to continue . . .");
                cmd->pause();
                cmd->clean();
                cmd->close();
            }
        }
    }

    /**
		 * Open the system protection.
		 */
    void sysProtection()
    {
        print->writeTopText("Opening the system protection.");
        cmd->start("systempropertiesprotection");
    }

    /**
		 * Run the reset Windows Update components.
		 */
    void components()
    {
        int errorlevel;
        string option;
        bool stopped = false;

        print->writeTopText("Canceling the Windows Update process.");
        cmd->executer("taskkill /im wuauclt.exe /f");

        string accept = "Cannot stop the service. Do you want to try again? (Y/N): ";

        // Stopping the Windows Update services.
        while (!stopped)
        {
            print->writeTopText("Stopping the Windows Update services.");
            cmd->stopService("bits");

            // Checking the service status.
            print->writeTopText("Checking the service status.\n");
            errorlevel = cmd->executer("sc query bits | findstr /I /C:\"STOPPED\"");

            if (errorlevel != 0)
            {
                err->showMessage("    Failed to stop the BITS service.");

                print->writeText(accept);
                cin >> option;

                option = strupr((char *)option.c_str());

                int pos = accept.find_last_of("(") + 1;
                int size = accept.find_last_of("/") - pos;

                string str = accept.substr(pos, size);

                str = strupr((char *)str.c_str());

                if (str != option)
                {
                    cout << endl;
                    print->writeTextLine("Press any key to continue . . .");
                    cmd->pause();
                    cmd->close();
                }
            }
            else
            {
                stopped = true;
            }
        }

        stopped = false;

        while (!stopped)
        {
            print->writeTopText("Stopping the Windows Update services.");
            cmd->stopService("wuauserv");

            // Checking the service status.
            print->writeTopText("Checking the service status.\n");
            errorlevel = cmd->executer("sc query wuauserv | findstr /I /C:\"STOPPED\"");

            if (errorlevel != 0)
            {
                err->showMessage("    Failed to stop the Windows Update service.");

                print->writeText(accept);
                cin >> option;

                option = strupr((char *)option.c_str());

                int pos = accept.find_last_of("(") + 1;
                int size = accept.find_last_of("/") - pos;

                string str = accept.substr(pos, size);

                str = strupr((char *)str.c_str());

                if (str != option)
                {
                    cout << endl;
                    print->writeTextLine("Press any key to continue . . .");
                    cmd->pause();
                    cmd->close();
                }
            }
            else
            {
                stopped = true;
            }
        }

        stopped = false;

        while (!stopped)
        {
            print->writeTopText("Stopping the Windows Update services.");
            cmd->stopService("appidsvc");

            // Checking the service status.
            print->writeTopText("Checking the service status.\n");
            errorlevel = cmd->executer("sc query appidsvc | findstr /I /C:\"STOPPED\"");

            if (errorlevel != 0)
            {
                errorlevel = cmd->executer("sc query appidsvc | findstr /I /C:\"OpenService FAILED 1060\"");

                if (errorlevel != 0)
                {
                    err->showMessage("    Failed to stop the Application Identity service.");

                    print->writeText(accept);
                    cin >> option;

                    option = strupr((char *)option.c_str());

                    int pos = accept.find_last_of("(") + 1;
                    int size = accept.find_last_of("/") - pos;

                    string str = accept.substr(pos, size);

                    str = strupr((char *)str.c_str());

                    if (str != option)
                    {
                        cout << endl;
                        print->writeTextLine("Press any key to continue . . .");
                        cmd->pause();
                        cmd->close();
                    }
                }
            }
            else
            {
                stopped = true;
            }
        }

        stopped = false;

        while (!stopped)
        {
            print->writeTopText("Stopping the Windows Update services.");
            cmd->stopService("cryptsvc");

            // Checking the service status.
            print->writeTopText("Checking the service status.\n");
            errorlevel = cmd->executer("sc query cryptsvc | findstr /I /C:\"STOPPED\"");

            if (errorlevel != 0)
            {
                err->showMessage("    Failed to stop the Cryptographic Services service.");

                print->writeText(accept);
                cin >> option;

                option = strupr((char *)option.c_str());

                int pos = accept.find_last_of("(") + 1;
                int size = accept.find_last_of("/") - pos;

                string str = accept.substr(pos, size);

                str = strupr((char *)str.c_str());

                if (str != option)
                {
                    cout << endl;
                    print->writeTextLine("Press any key to continue . . .");
                    cmd->pause();
                    cmd->close();
                }
            }
            else
            {
                stopped = true;
            }
        }

        // Delete the qmgr*.dat files.
        print->writeTopText("Deleting the qmgr*.dat files.");
        cmd->delFile("%ALLUSERSPROFILE%\\Application Data\\Microsoft\\Network\\Downloader\\qmgr*.dat");
        cmd->delFile("%ALLUSERSPROFILE%\\Microsoft\\Network\\Downloader\\qmgr*.dat");

        // Renaming the softare distribution folders backup copies.
        print->writeTopText("Renaming the softare distribution folders backup copies.");
        cmd->delFile("%SYSTEMROOT%\\winsxs\\pending.xml.bak");
        cmd->delFolder("%SYSTEMROOT%\\SoftwareDistribution.bak");
        cmd->delFolder("%SYSTEMROOT%\\system32\\Catroot2.bak");

        print->writeTopText("Renaming the software distribution folders.");
        cmd->rename("%SYSTEMROOT%\\winsxs\\pending.xml", "pending.xml.bak");
        cmd->rename("%SYSTEMROOT%\\SoftwareDistribution", "SoftwareDistribution.bak");

        // Checking of the rename the softare distribution.
        string windows = getenv("SYSTEMROOT");
        string path = windows + "\\SoftwareDistribution";

        if (cmd->getExecuter()->folderExists(path))
        {
            err->showMessage("    Failed to rename the SoftwareDistribution folder.");

            print->writeTextLine("Press any key to continue . . .");
            cmd->pause();
            cmd->close();
        }

        cmd->rename("%SYSTEMROOT%\\system32\\Catroot2", "Catroot2.bak");

        // Reset the BITS service and the Windows Update service to the default security descriptor.
        print->writeTopText("Reset the BITS service and the Windows Update service to the default security descriptor.");
        cmd->executer("sc.exe sdset wuauserv D:(A;CI;CCLCSWRPLORC;;;AU)(A;;CCDCLCSWRPWPDTLOCRSDRCWDWO;;;BA)(A;;CCDCLCSWRPWPDTLOCRSDRCWDWO;;;SY)S:(AU;FA;CCDCLCSWRPWPDTLOSDRCWDWO;;;WD)");
        cmd->executer("sc.exe sdset bits D:(A;CI;CCDCLCSWRPWPDTLOCRSDRCWDWO;;;SY)(A;;CCDCLCSWRPWPDTLOCRSDRCWDWO;;;BA)(A;;CCLCSWLOCRRC;;;IU)(A;;CCLCSWLOCRRC;;;SU)S:(AU;SAFA;WDWO;;;BA)");
        cmd->executer("sc.exe sdset cryptsvc D:(A;;CCLCSWRPWPDTLOCRRC;;;SY)(A;;CCDCLCSWRPWPDTLOCRSDRCWDWO;;;BA)(A;;CCLCSWLOCRRC;;;IU)(A;;CCLCSWLOCRRC;;;SU)(A;;CCLCSWRPWPDTLOCRRC;;;SO)(A;;CCLCSWLORC;;;AC)(A;;CCLCSWLORC;;;S-1-15-3-1024-3203351429-2120443784-2872670797-1918958302-2829055647-4275794519-765664414-2751773334)");
        cmd->executer("sc.exe sdset trustedinstaller D:(A;CI;CCDCLCSWRPWPDTLOCRSDRCWDWO;;;SY)(A;;CCDCLCSWRPWPDTLOCRRC;;;BA)(A;;CCLCSWLOCRRC;;;IU)(A;;CCLCSWLOCRRC;;;SU)S:(AU;SAFA;WDWO;;;BA)");

        // Reregister the BITS files and the Windows Update files.
        print->writeTopText("Reregister the BITS files and the Windows Update files.");
        cmd->executer("cd /d \"%WINDIR%\\system32\"");
        cmd->regLibrary("atl.dll");
        cmd->regLibrary("urlmon.dll");
        cmd->regLibrary("mshtml.dll");
        cmd->regLibrary("shdocvw.dll");
        cmd->regLibrary("browseui.dll");
        cmd->regLibrary("jscript.dll");
        cmd->regLibrary("vbscript.dll");
        cmd->regLibrary("scrrun.dll");
        cmd->regLibrary("msxml.dll");
        cmd->regLibrary("msxml3.dll");
        cmd->regLibrary("msxml6.dll");
        cmd->regLibrary("actxprxy.dll");
        cmd->regLibrary("softpub.dll");
        cmd->regLibrary("wintrust.dll");
        cmd->regLibrary("dssenh.dll");
        cmd->regLibrary("rsaenh.dll");
        cmd->regLibrary("gpkcsp.dll");
        cmd->regLibrary("sccbase.dll");
        cmd->regLibrary("slbcsp.dll");
        cmd->regLibrary("cryptdlg.dll");
        cmd->regLibrary("oleaut32.dll");
        cmd->regLibrary("ole32.dll");
        cmd->regLibrary("shell32.dll");
        cmd->regLibrary("initpki.dll");
        cmd->regLibrary("wuapi.dll");
        cmd->regLibrary("wuaueng.dll");
        cmd->regLibrary("wuaueng1.dll");
        cmd->regLibrary("wucltui.dll");
        cmd->regLibrary("wups.dll");
        cmd->regLibrary("wups2.dll");
        cmd->regLibrary("wuweb.dll");
        cmd->regLibrary("qmgr.dll");
        cmd->regLibrary("qmgrprxy.dll");
        cmd->regLibrary("wucltux.dll");
        cmd->regLibrary("muweb.dll");
        cmd->regLibrary("wuwebv.dll");

        // Resetting Winsock.
        print->writeTopText("Resetting Winsock.");
        cmd->executer("netsh winsock reset");

        // Resetting WinHTTP Proxy.
        print->writeTopText("Resetting WinHTTP Proxy.");
        cmd->executer("netsh winhttp reset proxy");

        // Set the startup type as automatic.
        print->writeTopText("Resetting the services as automatics.");
        cmd->executer("sc.exe config wuauserv start= auto");
        cmd->executer("sc.exe config bits start= delayed-auto");
        cmd->executer("sc.exe config cryptsvc start= auto");
        cmd->executer("sc.exe config TrustedInstaller start= demand");
        cmd->executer("sc.exe config DcomLaunch start= auto");

        // Starting the Windows Update services.
        print->writeTopText("Starting the Windows Update services.");
        cmd->startService("bits");

        print->writeTopText("Starting the Windows Update services.");
        cmd->startService("wuauserv");

        print->writeTopText("Starting the Windows Update services.");
        cmd->startService("appidsvc");

        print->writeTopText("Starting the Windows Update services.");
        cmd->startService("cryptsvc");

        // End process.
        print->writeTopText("The operation completed successfully.");
        print->writeTextLine("Press any key to continue . . .");
        cmd->pause();
    }

    /**
		 * Delete temporary files in Windows.
		 */
    void temp()
    {
        print->writeTopText("Deleting temporary files in Windows.");

        cmd->delFile("%TEMP%\\*.*");
        cmd->delFile("%SYSTEMROOT%\\Temp\\*.*");
        cout << endl;

        print->writeTopText("The operation completed successfully.");
        print->writeTextLine("Press any key to continue . . .");
        cmd->pause();
    }

    /**
		 * Open the Internet Explorer options.
		 */
    void iOptions()
    {
        print->writeTopText("Opening the Internet Explorer options.");
        cmd->start("InetCpl.cpl");
    }

    /**
		 * Check the Windows partition.
		 */
    void chkdsk()
    {
        int errorlevel;

        print->writeTopText("Check the file system and file system metadata of a volume for logical and physical errors (CHKDSK.exe).");

        errorlevel = cmd->executer("chkdsk %SYSTEMDRIVE% /f /r");

        cout << endl;

        if (errorlevel == 0)
        {
            print->writeTopText("The operation completed successfully.");
        }

        print->writeTextLine("Press any key to continue . . .");
        cmd->pause();
    }

    /**
		 * Scans all protected system files.
		 */
    void sfc()
    {
        int errorlevel;

        print->writeTopText("Scan your system files and to repair missing or corrupted system files (SFC.exe).");

        errorlevel = cmd->executer("sfc /scannow");

        cout << endl;

        if (errorlevel == 0)
        {
            print->writeTopText("The operation completed successfully.");
        }

        print->writeTextLine("Press any key to continue . . .");
        cmd->pause();
    }

    /**
		 * Run DISM command-line.
		 */
    void dism(string pOption)
    {
        string str = "dism /online " + pOption;
        int errorlevel;

        errorlevel = cmd->executer(str);

        cout << endl;

        if (errorlevel == 0)
        {
            print->writeTopText("The operation completed successfully.");
        }

        print->writeTextLine("Press any key to continue . . .");
        cmd->pause();
    }

    /**
		 * Scan the image to check for corruption.
		 */
    void scanHealth()
    {
        print->writeTopText("Scan the image for component store corruption (The DISM /ScanHealth argument).");
        dism("/cleanup-image /scanhealth");
    }

    /**
		 * Check the detected corruptions.
		 */
    void checkHealth()
    {
        print->writeTopText("Check whether the image has been flagged as corrupted by a failed process and whether the corruption can be repaired (The DISM /CheckHealth argument).");
        dism("/cleanup-image /checkhealth");
    }

    /**
		 * Repair a Windows image.
		 */
    void restoreHealth()
    {
        print->writeTopText("Scan the image for component store corruption, and then perform repair operations automatically (The DISM /RestoreHealth argument).");
        dism("/cleanup-image /restorehealth");
    }

    /**
		 * Clean up the superseded components.
		 */
    void startComponentCleanup()
    {
        print->writeTopText("Clean up the superseded components and reduce the size of the component store (The DISM /StartComponentCleanup argument).");
        dism("/cleanup-image /startcomponentcleanup");
    }

    /**
		 * Change invalid values in the Registry.
		 */
    void regedit()
    {
        print->writeTopText("Change invalid values in the Registry.");

        string userFolder = getenv("USERPROFILE");
        string folder = userFolder + "\\Desktop\\Backup\\" + cmd->now();
        string hkcr = folder + "\\HKCR.reg";
        string hkcu = folder + "\\HKCU.reg";
        string hklm = folder + "\\HKLM.reg";
        string hku = folder + "\\HKU.reg";
        string hkcc = folder + "\\HKCC.reg";
        string str = "";

        print->writeTextLine("Making a backup copy of the Registry in: ");
        print->writeText(folder);

        if (cmd->getExecuter()->fileExists(hkcu) || cmd->getExecuter()->fileExists(hklm))
        {
            print->writeTextLine("An unexpected error has occurred.");

            err->showMessage("    Changes were not carried out in the registry.");
            err->showMessage("    Will try it later.");

            print->writeTextLine("Press any key to continue . . .");
            cmd->pause();
            cmd->close();
        }
        else
        {
            cout << endl;
            // Creating a backup of the Registry.
            // Create the backup folder
            str = "mkdir \"" + folder + "\"";
            cmd->executer(str);
            // Export HKEY_CLASSES_ROOT in HKCR.reg
            print->writeTextLine("HKEY_CLASSES_ROOT -> HKCR.reg . . .");
            str = "reg Export HKCR \"" + hkcr + "\"";
            cmd->executer(str);
            // Export HKEY_CURRENT_USER in HKCU.reg
            print->writeTextLine("HKEY_CURRENT_USER -> HKCU.reg . . .");
            str = "reg Export HKCU \"" + hkcu + "\"";
            cmd->executer(str);
            // Export HKEY_LOCAL_MACHINE in HKLM.reg
            print->writeTextLine("HKEY_LOCAL_MACHINE -> HKLM.reg . . .");
            str = "reg Export HKLM \"" + hklm + "\"";
            cmd->executer(str);
            // Export HKEY_USERS in HKU.reg
            print->writeTextLine("HKEY_USERS -> HKU.reg . . .");
            str = "reg Export HKU \"" + hku + "\"";
            cmd->executer(str);
            // Export HKEY_CURRENT_CONFIG in HKCC.reg
            print->writeTextLine("HKEY_CURRENT_CONFIG -> HKCC.reg . . .");
            str = "reg Export HKCC \"" + hkcc + "\"";
            cmd->executer(str);
        }

        print->writeTextLine("Checking the backup.");

        if (!cmd->getExecuter()->fileExists(hkcu) || !cmd->getExecuter()->fileExists(hklm))
        {
            print->writeTextLine("An unexpected error has occurred.");

            err->showMessage("    Something went wrong.");
            err->showMessage("    You manually create a backup of the registry before continuing.");

            print->writeTextLine("Press any key to continue . . .");
            cmd->pause();
        }
        else
        {
            print->writeTextLine("The operation completed successfully.");
        }

        // Delete keys in the Registry.
        print->writeTopText("Deleting values in the Registry.");
        cmd->regDelete("HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\AdvertisingInfo");
        cmd->regDelete("HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\WindowsUpdate");
        cmd->regDelete("HKCU\\SOFTWARE\\Microsoft\\WindowsSelfHost");
        cmd->regDelete("HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WindowsStore\\WindowsUpdate");
        cmd->regDelete("HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WindowsUpdate");
        cmd->regDelete("HKLM\\SOFTWARE\\Microsoft\\WindowsSelfHost");
        cmd->regDelete("HKLM\\SOFTWARE\\WOW6432Node\\Microsoft\\Windows\\CurrentVersion\\WindowsStore\\WindowsUpdate");

        cmd->regDelete("HKLM\\COMPONENTS\\PendingXmlIdentifier");
        cmd->regDelete("HKLM\\COMPONENTS\\NextQueueEntryIndex");
        cmd->regDelete("HKLM\\COMPONENTS\\AdvancedInstallersNeedResolving");
        cmd->regDelete("HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate");

        cmd->regDelete("HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate", "ResetClient");
        cmd->regDelete("HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate", "ResetDataStoreReason");

        cmd->regDelete("HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate", "PingID");
        cmd->regDelete("HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate", "AccountDomainSid");
        cmd->regDelete("HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate", "SusClientId");
        cmd->regDelete("HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate", "SusClientIDValidation");

        cmd->regDelete("HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\\Auto Update", "AUState");

        cmd->regDelete("HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\\Auto Update", "LastWaitTimeout");
        cmd->regDelete("HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\\Auto Update", "DetectionstartTime");
        cmd->regDelete("HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\\Auto Update", "DetectionstartTime");

        cmd->regDelete("HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\\Auto Update\\RebootRequired");

        cmd->regDelete("HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\\Auto Update\\Results");

        cmd->regDelete("HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\\Auto Update\\Reporting", "SamplingValue");
        cmd->regDelete("HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\WindowsUpdate\\Auto Update\\Reporting", "ReregisterAuthorizationCab");

        // Add keys in the Registry.
        print->writeTopText("Adding values in the Registry.");

        str = "HKLM\\SOFTWARE\\Microsoft\\WindowsUpdate\\UX";
        cmd->regAdd(str, "IsConvergedUpdateStackEnabled", "REG_DWORD", "0");

        str = "HKLM\\SOFTWARE\\Microsoft\\WindowsUpdate\\UX\\Settings";
        cmd->regAdd(str, "UxOption", "REG_DWORD", "0");

        str = "HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\User Shell Folders";
        cmd->regAdd(str, "AppData", "REG_EXPAND_SZ", "%USERPROFILE%\\AppData\\Roaming");

        str = "HKLM\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\User Shell Folders";
        cmd->regAdd(str, "AppData", "REG_EXPAND_SZ", "%USERPROFILE%\\AppData\\Roaming");

        str = "HKU\\.DEFAULT\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\User Shell Folders";
        cmd->regAdd(str, "AppData", "REG_EXPAND_SZ", "%USERPROFILE%\\AppData\\Roaming");

        cmd->executer("reg add \"HKLM\\SYSTEM\\CurrentControlSet\\Control\\BackupRestore\\FilesNotToBackup\" /f");

        int errorlevel = cmd->executer("reg query \"HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\CurrentVersion\\Internet Settings\" /v Security_HKLM_only | find /i \"Security_HKLM_Only\" | find \"1\"");

        if (errorlevel == 0)
        {
            str = "HKLM\\Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings\\ZoneMap\\Domains";
        }
        else
        {
            str = "HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings\\ZoneMap\\Domains";
        }

        cmd->regAdd(str + "\\microsoft.com\\update", "http", "REG_DWORD", "2");
        cmd->regAdd(str + "\\microsoft.com\\update", "https", "REG_DWORD", "2");
        cmd->regAdd(str + "\\microsoft.com\\windowsupdate", "http", "REG_DWORD", "2");
        cmd->regAdd(str + "\\update.microsoft.com", "http", "REG_DWORD", "2");
        cmd->regAdd(str + "\\update.microsoft.com", "https", "REG_DWORD", "2");
        cmd->regAdd(str + "\\windowsupdate.com", "http", "REG_DWORD", "2");
        cmd->regAdd(str + "\\windowsupdate.microsoft.com", "http", "REG_DWORD", "2");
        cmd->regAdd(str + "\\download.microsoft.com", "http", "REG_DWORD", "2");

        cmd->regAdd(str + "\\windowsupdate.com", "http", "REG_DWORD", "2");
        cmd->regAdd(str + "\\windowsupdate.com", "https", "REG_DWORD", "2");

        cmd->regAdd(str + "\\windowsupdate.com\\download", "http", "REG_DWORD", "2");
        cmd->regAdd(str + "\\windowsupdate.com\\download", "https", "REG_DWORD", "2");
        cmd->regAdd(str + "\\download.windowsupdate.com", "http", "REG_DWORD", "2");
        cmd->regAdd(str + "\\download.windowsupdate.com", "https", "REG_DWORD", "2");

        cmd->regAdd(str + "\\windows.com\\wustat", "http", "REG_DWORD", "2");
        cmd->regAdd(str + "\\wustat.windows.com", "http", "REG_DWORD", "2");

        cmd->regAdd(str + "\\microsoft.com\\ntservicepack", "http", "REG_DWORD", "2");
        cmd->regAdd(str + "\\ntservicepack.microsoft.com", "http", "REG_DWORD", "2");

        cmd->regAdd(str + "\\microsoft.com\\ws", "http", "REG_DWORD", "2");
        cmd->regAdd(str + "\\microsoft.com\\ws", "https", "REG_DWORD", "2");
        cmd->regAdd(str + "\\ws.microsoft.com", "http", "REG_DWORD", "2");
        cmd->regAdd(str + "\\ws.microsoft.com", "https", "REG_DWORD", "2");

        // End process.
        print->writeTopText("The operation completed successfully.");
        print->writeTextLine("Press any key to continue . . .");
        cmd->pause();
    }

    /**
		 * Force Group Policy Update.
		 */
    void gpupdate()
    {
        int errorlevel;

        print->writeTopText("Forcing group policy update.");

        errorlevel = cmd->executer("gpupdate /force");

        cout << endl;

        if (errorlevel == 0)
        {
            print->writeTopText("The operation completed successfully.");
        }

        print->writeTextLine("Press any key to continue . . .");
        cmd->pause();
    }

    /**
		 * Reset Winsock setting.
		 */
    void winsock()
    {
        // Reset Winsock control.
        print->writeTopText("Reset Winsock control.");

        print->writeTopText("Restoring transaction logs.");
        cmd->executer("fsutil resource setautoreset true C:\\");

        print->writeTopText("Restoring TPC/IP.");
        cmd->executer("netsh int ip reset");

        print->writeTopText("Restoring Winsock.");
        cmd->executer("netsh winsock reset");

        print->writeTopText("Restoring default policy settings.");
        cmd->executer("netsh advfirewall reset");

        print->writeTopText("Restoring the DNS cache.");
        cmd->executer("ipconfig /flushdns");

        print->writeTopText("Restoring the Proxy.");
        cmd->executer("netsh winhttp reset proxy");

        // End process.
        print->writeTopText("The operation completed successfully.");
        print->writeTextLine("Press any key to continue . . .");
        cmd->pause();
    }

    /**
		 * Search Updates.
		 */
    void updates()
    {
        print->writeTopText("Looking for updates.");

        cmd->executer("wuauclt /resetauthorization /detectnow");

        if (os->getFamily() == 10)
        {
            cmd->start("ms-settings:windowsupdate-action");
        }
        else
        {
            cmd->start("wuapp.exe");
        }
    }

    /**
		 * Reset or Clear Microsoft Windows Store Cache.
		 */
    void store()
    {
        print->writeTopText("Reset or Clear Microsoft Windows Store Cache.");

        cmd->executer("wsreset");
    }

    /**
		 * Get Product Key
		 */
    void productKey()
    {
        int errorlevel;

        print->writeTopText("Searching the product key");

        errorlevel = cmd->executer("wmic path SoftwareLicensingService get OA3xOriginalProductKey");

        if (errorlevel == 0)
        {
            print->writeTextLine("The operation completed successfully.");
        }

        cout << endl;

        print->writeTextLine("Press any key to continue . . .");
        cmd->pause();
    }

    /**
		 * Explore other local solutions.
		 */
    void local()
    {
        print->writeTopText("Looking for solutions in this PC.");

        cmd->start("control.exe /name Microsoft.Troubleshooting");
    }

    /**
		 * Explore other online solutions.
		 */
    void online()
    {
        print->writeTopText("Looking for solutions Online.");

        cmd->browser("https://support.microsoft.com/en-us/gp/windows-update-issues/");
    }

    /**
		 * Reboot the system.
		 */
    void restart()
    {
        print->writeTopText("Restart your PC.");
        print->writeTextLine("    The system reboot in 60 seconds.\n    Please save all open documents.");

        cmd->start("shutdown.exe /r /t 60 /c \"The system reboot in 60 seconds. Please save all open documents.\"");

        print->writeTextLine("Press any key to continue . . .");
        cmd->pause();
    }
};

#endif

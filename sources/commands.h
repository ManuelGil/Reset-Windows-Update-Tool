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

#ifndef _Commands_
#define _Commands_

#include <iostream>
#include <string>

#include "date.h"
#include "executer.h"

using namespace std;

/**
 * Manager of Command and files.
 */
class Commands
{

private:
    // -----------------------------------------------------------------
    // Relations
    // -----------------------------------------------------------------
    Date *date;
    Executer *exec;

public:
    /**
	 * Create a manager for command-lines.
	 */
    Commands()
    {
        exec = new Executer();
    }

    /**
	 * Get a manager for command-lines.
	 */
    Executer *getExecuter()
    {
        return exec;
    }

    /**
	 * Get a current date.
	 */
    string now()
    {
        string str = "";

        date = new Date();
        date->now();

        str = date->toString();

        date = NULL;

        return str;
    }

    /**
	 * Launch a program or system property.
	 */
    void start(string pCommand)
    {
        exec->start(pCommand);
    }

    /**
	 * Open a link on the browser.
	 */
    void browser(string pLink)
    {
        exec->browser(pLink);
    }

    /**
	 * Open a file.
	 */
    void open(string pPath, string pFile)
    {
        exec->open(pPath, pFile);
    }

    /**
	 * Start a service.
	 */
    void startService(string pService)
    {
        string str = "net start " + pService;
        system(str.c_str());
    }

    /**
	 * Stop a service.
	 */
    void stopService(string pService)
    {
        string str = "net stop " + pService;
        system(str.c_str());
    }

    /**
	 * Delete a file.
	 */
    void delFile(string pFile)
    {
        string str = "del /s /q /f \"" + pFile + "\"";
        system(str.c_str());
    }

    /**
	 * Delete a directory.
	 */
    void delFolder(string pFolder)
    {
        string str = "rmdir /s /q \"" + pFolder + "\"";
        system(str.c_str());
    }

    /**
	 * Rename a directory.
	 */
    void rename(string pName, string pNewName)
    {
        string str = "takeown /f \"" + pName + "\"";
        system(str.c_str());

        str = "attrib -r -s -h /s /d \"" + pName + "\"";
        system(str.c_str());

        str = "ren \"" + pName + "\" " + pNewName;
        system(str.c_str());
    }

    /**
	 * Register a library.
	 */
    void regLibrary(string pLibrary)
    {
        string str = "regsvr32.exe /s \"" + pLibrary + "\"";
        system(str.c_str());
    }

    /**
	 * Add keys in the Registry.
	 */
    void regAdd(string pKey, string pValue, string pType, string pData)
    {
        string str = "reg add \"" + pKey + "\" /v \"" + pValue + "\" /t \"" + pType + "\" /d \"" + pData + "\" /f";
        system(str.c_str());
    }

    /**
	 * Delete keys in the Registry.
	 */
    void regDelete(string pKey)
    {
        string str = "reg delete \"" + pKey + "\" /f";
        system(str.c_str());
    }

    /**
	 * Delete keys in the Registry.
	 */
    void regDelete(string pKey, string pValue)
    {
        string str = "reg delete \"" + pKey + "\" /v \"" + pValue + "\" /f";
        system(str.c_str());
    }

    /**
	 * Launch the command-line.
	 */
    int executer(string pCommand)
    {
        return system(pCommand.c_str());
    }

    /**
	 * Clean the screen.
	 */
    void clean()
    {
        system("cls");
    }

    /**
	 * Pause the program execution.
	 */
    void pause()
    {
        system("pause>nul");
    }

    /**
	 * Close the program.
	 */
    void close()
    {
        system("color 07");
        exit(0);
    }
};

#endif

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

#ifndef _WUReset_
#define _WUReset_

#include <iostream>
#include <string>

#include "display.h"
#include "error.h"
#include "principalmenu.h"
#include "functions.h"
#include "help.h"

using namespace std;

/**
 * The principal class.
 */
class WUReset
{

private:
    // -----------------------------------------------------------------
    // Relations
    // -----------------------------------------------------------------
    Display *print;
    Error *err;
    PrincipalMenu *menu;
    Functions *functions;
    Help *help;

public:
    /**
		 * Initialize of components.
		 */
    WUReset()
    {
        initComponents();
    }

    /**
		 * Load the relations.
		 */
    void initComponents()
    {
        print = Display::getInstance();

        err = new Error();
        functions = new Functions();
    }

    /**
		 * Performs the main functions.
		 */
    void run()
    {
        functions->compatibility();
        functions->permission();
        functions->terms();
        showMenu();
    }

    /**
		 * Load and show the principal menu.
		 */
    void showMenu()
    {
        menu = new PrincipalMenu();

        int flag = -1;

        while (flag != 0)
        {
            // Set console color.
            system("color 17"),

                // Show the principal menu.
                menu->showOptions();

            string option = "";
            cin >> option;

            // Get the index of option selected.
            flag = atoi(option.c_str());

            if (option == "?")
            {
                // Show the help file.
                help = new Help();
                help->browser();
                help = NULL;
                flag = -1;
            }
            else if (option == "*")
            {
                functions->getCommands()->executer("elevate wuresetcfg.exe");
                flag = -1;
            }
            else if (flag != 0)
            {
                // Get the option selected.
                if (flag > 0 && flag < menu->getSize())
                {
                    checkOption(menu->getOption(flag));
                }
                else
                {
                    cout << endl;
                    err->showMessage("Invalid option.");
                    functions->getCommands()->pause();
                }
            }
        }

        functions->getCommands()->clean();
        functions->getCommands()->close();
    }

    /**
		 * Check the option by the link.
		 */
    void checkOption(string pOption)
    {
        if (pOption == "openSystemProtection")
        {
            functions->sysProtection();
        }
        else if (pOption == "resetwindowsUpdate")
        {
            functions->components();
        }
        else if (pOption == "delTempFiles")
        {
            functions->temp();
        }
        else if (pOption == "openInternetOption")
        {
            functions->iOptions();
        }
        else if (pOption == "checkWindowsPartition")
        {
            functions->chkdsk();
        }
        else if (pOption == "scanSystemFiles")
        {
            functions->sfc();
        }
        else if (pOption == "scanImageSystem")
        {
            functions->scanHealth();
        }
        else if (pOption == "checkImageSystem")
        {
            functions->checkHealth();
        }
        else if (pOption == "repairImageSystem")
        {
            functions->restoreHealth();
        }
        else if (pOption == "cleanImageSystem")
        {
            functions->startComponentCleanup();
        }
        else if (pOption == "changeRegistry")
        {
            functions->regedit();
        }
        else if (pOption == "resetWinsock")
        {
            functions->winsock();
        }
        else if (pOption == "resetStore")
        {
            functions->store();
        }
        else if (pOption == "gpupdate")
        {
            functions->gpupdate();
        }
        else if (pOption == "searchUpdates")
        {
            functions->updates();
        }
        else if (pOption == "productKey")
        {
            functions->productKey();
        }
        else if (pOption == "exploreLocalSolutions")
        {
            functions->local();
        }
        else if (pOption == "exploreOnlineSolutions")
        {
            functions->online();
        }
        else if (pOption == "restartComputer")
        {
            functions->restart();
        }
    }
};

#endif

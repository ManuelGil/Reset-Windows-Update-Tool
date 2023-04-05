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
 * @version $Revision: 11.1.0 $ $Date: 05/04/2023 $
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

#ifndef _PrincipalMenu_
#define _PrincipalMenu_

#include <iostream>
#include <string>

#include "osdetector.h"
#include "menu.h"
#include "item.h"
#include "display.h"

using namespace std;

/**
 * Load and show the principal menu.
 */
class PrincipalMenu
{

private:
    // -----------------------------------------------------------------
    // Relations
    // -----------------------------------------------------------------
    Menu *menu;
    Display *print;
    OSDetector *os;

public:
    /**
	 * Load all options on the menu.
	 */
    PrincipalMenu()
    {
        print = Display::getInstance();

        menu = new Menu();

        menu->addItem(new Item("", "close"));
        menu->addItem(new Item("Open the system protection.", "openSystemProtection"));
        menu->addItem(new Item("Reset the Windows Update Components.", "resetwindowsUpdate"));
        menu->addItem(new Item("Delete temporary files in Windows.", "delTempFiles"));
        menu->addItem(new Item("Open the Internet Explorer options.", "openInternetOption"));
        menu->addItem(new Item("Run Chkdsk on the Windows partition.", "checkDisk"));
        menu->addItem(new Item("Run the System File Checker tool.", "scanSystemFiles"));
        menu->addItem(new Item("Scan the image for component store corruption.", "scanImageSystem"));
        menu->addItem(new Item("Check whether the image has been flagged as corrupted.", "checkImageSystem"));
        menu->addItem(new Item("Perform repair operations automatically.", "repairImageSystem"));
        menu->addItem(new Item("Clean up the superseded components.", "cleanImageSystem"));
        menu->addItem(new Item("Delete any incorrect registry values.", "changeRegistry"));
        menu->addItem(new Item("Repair/Reset Winsock settings.", "resetWinsock"));
        menu->addItem(new Item("Reset Microsoft Windows Store.", "resetStore"));
        menu->addItem(new Item("Force Group Policy Update.", "gpupdate"));
        menu->addItem(new Item("Search updates.", "searchUpdates"));
        menu->addItem(new Item("Find the windows product key", "productKey"));
        menu->addItem(new Item("Explore other local solutions.", "exploreLocalSolutions"));
        menu->addItem(new Item("Explore other online solutions.", "exploreOnlineSolutions"));
        menu->addItem(new Item("Restart your PC.", "restartComputer"));
    }

    /**
	 * Return the size of menu.
	 * return size
	 */
    int getSize()
    {
        return menu->getSize();
    }

    /**
	 * Show the menu options.
	 */
    void showOptions()
    {
        print->writeTopText("This tool reset the Windows Update Components.");

        int size = menu->getSize();

        for (int i = 1; i < size; i++)
        {
            string str = menu->getItem(i)->getText();
            print->writeText("    ");
            cout << i;
            print->writeTextLine(". " + str);
        }

        print->writeTextLine("\n                            ?. Help.    0. Close.\n");

        print->writeText("Select an option: ");
    }

    /**
	 * Get an option by id.
	 * return option
	 */
    string getOption(int pIndex)
    {
        return menu->getItem(pIndex)->getReference();
    }
};

#endif

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

#ifndef _Help_
#define _Help_

#include <iostream>
#include <string>

#include "display.h"
#include "commands.h"

using namespace std;

/**
 * Load and show the help files.
 */
class Help
{

private:
    // -----------------------------------------------------------------
    // Relations
    // -----------------------------------------------------------------
    Commands *cmd;

    // -----------------------------------------------------------------
    // Attributes
    // -----------------------------------------------------------------
    string file;

public:
    /**
	 * Set values.
	 */
    Help()
    {
        cmd = new Commands();
    }

    /**
	 * Open a link on the browser.
	 */
    void browser()
    {
        cmd->browser("https://github.com/ManuelGil/Reset-Windows-Update-Tool/wiki");
    }
};

#endif

/**
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * $Id$
 * <p>Title: WUReset Project.</p>
 * <p>Description: Reset Windows Update Tool.</p>
 * <p>Copyright: Microsoft Public License (MS-PL).</p>
 * <p>Company: <a href="https://wureset.com/">Manuel Gil</a></p>
 *
 * Problem: Reset the Windows Update Components.
 * @author $Author: Manuel Gil. $
 * @version $Revision: 11.0.0.9 $ $Date: 06/11/2020 $
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

#ifndef _Error_
#define _Error_

#include <iostream>
#include <string>

using namespace std;

/**
 * Show a error on console.
 */
class Error
{

public:
    /**
		 * Show a message in concole.
		 */
    void showMessage(string pMessage)
    {
        // Create a auxiliar string.
        string str = pMessage;
        int pos = 0;

        // Set a red color at console.
        system("color 0C");

        // Replace all strings '\\n' with the character '\n'.
        while ((pos = str.find("\\n", pos)) != str.npos)
        {
            str.replace(pos, 2, "\n");
            pos++;
        }

        // White the auxiliar string.
        cout << str << endl
             << endl;
    }
};

#endif

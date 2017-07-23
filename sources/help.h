/**
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * $Id$
 * <p>Title: Reset Windows Update Tool Project.</p>
 * <p>Description: Reset Windows Update Tool.</p>
 * <p>Copyright: Microsoft Limited Public License (Ms-LPL).</p>
 * <p>Company: <a href="https://mfgil.wordpress.com/">Manuel Gil</a></p>
 *
 * Problem: Reset Windows Update Components.
 * @author $Author: Manuel Gil. $
 * @version $Revision: 11.0.0.0001 $ $Date: 28/06/2017 $
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
class Help {

	private:
		
	    // -----------------------------------------------------------------
	    // Relations
	    // -----------------------------------------------------------------
		Commands* cmd;
		
		// -----------------------------------------------------------------
    	// Attributes
	    // -----------------------------------------------------------------
		string file;
	
	public:
		
		/**
		 * Set values.
		 */
		Help() {
			cmd = new Commands();
			
			file = "english\\index.html";
		}
		
		/**
		 * Open help file.
		 */
		void open() {
			cmd->open("wureset\\help\\", file);
		}

};

#endif

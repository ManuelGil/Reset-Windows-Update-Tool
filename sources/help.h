/**
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * $Id$
 * <p>Title: WUReset Project.</p>
 * <p>Description: Reset Windows Update Tool.</p>
 * <p>Copyright: Microsoft Public License (MS-PL).</p>
 * <p>Company: <a href="http://wureset.com/">Manuel Gil</a></p>
 *
 * Problem: Reset the Windows Update Components.
 * @author $Author: Manuel Gil. $
 * @version $Revision: 11.0.0.0003 $ $Date: 03/27/2017 $
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
		
		/**
		 * Open a link on the browser.
		 */
		void browser() {
			cmd->browser("http://wureset.com");
		}

};

#endif

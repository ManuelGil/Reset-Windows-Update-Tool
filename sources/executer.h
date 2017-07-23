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

#ifndef _Executer_
#define _Executer_

#include <iostream>
#include <string>
#include <windows.h>

#include "explorer.h"

using namespace std;

/**
 * Execute command-lines.
 */
class Executer {

	private:
	
	    // -----------------------------------------------------------------
	    // Relations
	    // -----------------------------------------------------------------
		Explorer* explorer;
	
	public:
	
		/**
		 * Create a manager for the files.
		 */
		Executer() {
			explorer = new Explorer();
		}
		
		/**
		 * Launch a program or system property.
		 */
		void start(string pCommand) {
			string cmd = "start " + pCommand;
			system(cmd.c_str());
		}
		
		/**
		 * Browse a link at Internet Explorer.
		 */
		void browser(string pLink) {
			string cmd = "start iexplore.exe " + pLink;
			system(cmd.c_str());
		}
		
		/**
		 * Open a file in the directory.
		 */
		void open(string pPath, string pFile) {
			string file = explorer->getPath() + pPath + pFile;
			
			if(explorer->exist(file)) {
				ShellExecute(NULL, "open", file.c_str(), NULL, NULL, SW_SHOWDEFAULT);
			}
		}

};

#endif

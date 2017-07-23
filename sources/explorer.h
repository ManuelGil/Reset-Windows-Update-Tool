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

#ifndef _Explorer_
#define _Explorer_

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

/**
 * Reader the files and directories.
 */
class Explorer {

	private:
	
		// -----------------------------------------------------------------
    	// Attributes
	    // -----------------------------------------------------------------
		string path;
	
	public:
	
		/**
		 * Get the current directory.
		 */
		string getPath() {
			if(path == "") {
				char result[MAX_PATH];
			  	GetModuleFileName(NULL, result, MAX_PATH);
			  	
			  	int pos = string(result).find_last_of("\\") + 1;
			  	path = string(result).substr(0, pos);
			}
			
			return path;
		}
		
		/**
		 * Check if a file exists.
		 */
		bool exist(string pFile) {
		    if (FILE *file = fopen(pFile.c_str(), "r")) {
		        fclose(file);
		        return true;
		    }
		    
			return false;
		}

};

#endif

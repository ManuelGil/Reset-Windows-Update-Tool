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
 * @version $Revision: 11.0.0.5 $ $Date: 04/18/2018 $
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
		bool fileExists(string pFile) {
		    if (FILE *file = fopen(pFile.c_str(), "r")) {
		        fclose(file);
		        return true;
		    }
		    
			return false;
		}
		
		/**
		 * Check if a folder exists.
		 */
		bool folderExists(string pPath) {
			DWORD ftyp = GetFileAttributesA(pPath.c_str());
			if (ftyp == INVALID_FILE_ATTRIBUTES) {
		    	return false;
			}
		
			if (ftyp & FILE_ATTRIBUTE_DIRECTORY) {
		    	return true;
			}
		
			return false;
		}

};

#endif

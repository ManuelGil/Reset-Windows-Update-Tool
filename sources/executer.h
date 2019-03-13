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
 * @version $Revision: 11.0.0.7 $ $Date: 03/12/2019 $
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
class Executer
{

	private:
		// -----------------------------------------------------------------
		// Relations
		// -----------------------------------------------------------------
		Explorer *explorer;

	public:
		/**
		 * Create a manager for the files.
		 */
		Executer()
		{
			explorer = new Explorer();
		}

		/**
		 * Launch a program or system property.
		 */
		void start(string pCommand)
		{
			string cmd = "start " + pCommand;
			system(cmd.c_str());
		}

		/**
		 * Browse a link at Internet Explorer.
		 */
		void browser(string pLink)
		{
			string cmd = "start iexplore.exe " + pLink;
			system(cmd.c_str());
		}

		/**
		 * Open a file in the directory.
		 */
		void open(string pPath, string pFile)
		{
			string file = explorer->getPath() + pPath + pFile;

			if (explorer->fileExists(file))
			{
				ShellExecute(NULL, "open", file.c_str(), NULL, NULL, SW_SHOWDEFAULT);
			}
		}

		/**
		 * Get the app directory.
		 */
		string getPath()
		{
			return explorer->getPath();
		}

		/**
		 * Check if file exists.
		 */
		bool fileExists(string pFile)
		{
			if (explorer->fileExists(pFile))
			{
				return true;
			}

			return false;
		}

		/**
		 * Check if folder exists.
		 */
		bool folderExists(string pPath)
		{
			if (explorer->folderExists(pPath))
			{
				return true;
			}

			return false;
		}

};

#endif

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

#ifndef _Display_
#define _Display_

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

/**
 * Write the different formats of text into console.
 */
class Display {

	protected:
	
		/**
		 * Protected Constructor for Singleton model.
		 */
		Display() {
			// Set a title at console.
			SetConsoleTitle("Reset Windows Update Tool");
			// Set a size at console.
			system("mode con cols=78 lines=30");
			// Set a color at console.
			system("color 17");
		}
	
	public:
	
		/**
		 * Return a Single Instance.
		 * return instance.
		 */
		static Display* getInstance() {
			// Create a single instance and return this.
			static Display* instance = new Display();
			
			return instance;
		}
		
		/**
		 * Write a text on top at console.
		 */
		void writeTopText(string pMessage) {
			// Set a Color at console.
			system("color 17");
			// Clean the the text in console.
			system("cls");
			// Write the versión of Windows.
			system("ver");
			// Write the title on console.
			cout << "Reset Windows Update Tool." << endl;
			// Write the message on concole.
			cout << endl;
			cout << pMessage << endl;
			cout << endl;
		}

		/**
		 * Write a text line with end lines.
		 */
		void writeTextLine(string pMessage) {
			// Create a auxiliar string.
			string str = pMessage;
			int pos = 0;
			
			// Replace all strings '\\n' with the character '\n'.
			while((pos = str.find("\\n", pos)) != str.npos) {
			    str.replace(pos, 2, "\n");
			    pos++;
			}
			
			// White the auxiliar string.
			cout << str << endl;
		}
		
		/**
		 * White a single text line.
		 */
		void writeText(string pMessage) {
			cout << pMessage;
		}

};

#endif

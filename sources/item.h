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
 * @version $Revision: 11.0.0.6 $ $Date: 05/06/2018 $
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

#ifndef _Item_
#define _Item_

#include <iostream>
#include <string>

using namespace std;

/**
 * Management the options of the menu.
 */
class Item {

	private:
	
		// -----------------------------------------------------------------
    	// Attributes
	    // -----------------------------------------------------------------
	    string text;
	    string reference;
	
	public:
	
		/**
		 * Create a new option.
		 */
	    Item(string pText, string pRef) {
	    	text = pText;
	    	reference = pRef;
		}
	    
		/**
		 * Get text of the option.
		 */
		string getText() {
			return text;
		}
	    
		/**
		 * Get the link of the option.
		 */
		string getReference() {
			return reference;
		}
		
		/**
		 * Set text of the option.
		 */
	    void setText(string pText) {
			text = pText;
		}
		
		/**
		 * Set link of the option.
		 */
	    void setReference(string pRef) {
			reference = pRef;
		}

};

#endif

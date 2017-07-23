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

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

#ifndef _Menu_
#define _Menu_

#include <vector>

#include "item.h"

/**
 * Create a generic menu.
 */
class Menu {

	private:
	
	    // -----------------------------------------------------------------
	    // Relations
	    // -----------------------------------------------------------------
		 vector<Item*> items;
	
	public:
	
		/**
		 * Get an option by index.
		 */
		Item* getItem(int index) {
			return items[index];
		}
	
		/**
		 * Add a new option.
		 */
		void addItem(Item* pItem) {
			items.push_back(pItem);
		}
		
		/**
		 * Get size of the menu.
		 */
		int getSize() {
			return items.size();
		}

};

#endif

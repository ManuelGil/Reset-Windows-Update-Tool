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

#include "wureset.h"

using namespace std;

/**
 * Launch the Reset Windows Update Tool.
 */
int main(int argc, char** argv) {
	// Creates a new instance of Reset Windows Update Tool.
	WUReset* rwut = new WUReset();
	// Run the Reset Windows Update Tool.
	rwut->run();
	// Delete Reset Windows Update Tool.
	rwut = NULL;
	// Exit without error.
	return 0;
}

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

#include "wureset.h"

using namespace std;

/**
 * Launch the Reset Windows Update Tool.
 */
int main(int argc, char **argv)
{
	// Creates a new instance of Reset Windows Update Tool.
	WUReset *rwut = new WUReset();
	// Run the Reset Windows Update Tool.
	rwut->run();
	// Delete Reset Windows Update Tool.
	rwut = NULL;
	// Exit without error.
	return 0;
}

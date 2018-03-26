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
 * @version $Revision: 11.0.0.0003 $ $Date: 03/27/2017 $
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

#ifndef _OSDetector_
#define _OSDetector_

/**
 * Detects the operating system.
 */
class OSDetector {

	public:
		
		/**
		 * Get the family number.
		 */
		int getFamily() {
			int errorlevel;
			
			// Family: Windows 6.
			errorlevel = system("ver | find \"6.0.\" > nul");
			if (errorlevel==0) {
				return 6;
			}
			
			// Family: Windows 7.
			errorlevel = system("ver | find \"6.1.\" > nul");
			if (errorlevel==0) {
				return 7;
			}
			
			// Family: Windows 8.
			errorlevel = system("ver | find \"6.2.\" > nul");
			if (errorlevel==0) {
				return 8;
			}
			
			// Family: Windows 8.
			errorlevel = system("ver | find \"6.3.\" > nul");
			if (errorlevel==0) {
				return 8;
			}
			
			// Family: Windows 10.
			errorlevel = system("ver | find \"10.0.\" > nul");
			if (errorlevel==0) {
				return 10;
			}
			
			return 0;
		}
		
		/**
		 * Check the compatibility.
		 */
		bool isCompatible() {
			int errorlevel;
			
			// Name: "Microsoft Windows Vista".
			errorlevel = system("ver | find \"6.0.6000\" > nul");
			if (errorlevel==0) {
				// Compatibility: No.
				return false;
			}
			
			// Name: "Microsoft Windows Vista SP1".
			errorlevel = system("ver | find \"6.0.6001\" > nul");
			if (errorlevel==0) {
				// Compatibility: No.
				return false;
			}
			
			// Name: "Microsoft Windows Vista SP2".
			errorlevel = system("ver | find \"6.0.6002\" > nul");
			if (errorlevel==0) {
				// Compatibility: No.
				return false;
			}
			
			// Name: "Microsoft Windows 7".
			errorlevel = system("ver | find \"6.1.7600\" > nul");
			if (errorlevel==0) {
				// Compatibility: Yes.
				return true;
			}
			
			// Name: "Microsoft Windows 7 SP1".
			errorlevel = system("ver | find \"6.1.7601\" > nul");
			if (errorlevel==0) {
				// Compatibility: Yes.
				return true;
			}
			
			// Name: "Microsoft Windows 8".
			errorlevel = system("ver | find \"6.2.9200\" > nul");
			if (errorlevel==0) {
				// Compatibility: Yes.
				return true;
			}
			
			// Name: "Microsoft Windows 8.1".
			errorlevel = system("ver | find \"6.3.9200\" > nul");
			if (errorlevel==0) {
				// Compatibility: Yes.
				return true;
			}
			
			// Name: "Microsoft Windows 8.1 Update 1".
			errorlevel = system("ver | find \"6.3.9600\" > nul");
			if (errorlevel==0) {
				// Compatibility: Yes.
				return true;
			}
			
			// Name: "Microsoft Windows 10".
			errorlevel = system("ver | find \"10.0.\" > nul");
			if (errorlevel==0) {
				// Compatibility: Yes.
				return true;
			}

			// Compatibility: No.
			return false;
		}

};

#endif

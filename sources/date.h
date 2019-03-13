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

#ifndef _Date_
#define _Date_

#include <iostream>
#include <string>
#include <sstream>
#include <ctime>

/**
 * Management of date.
 */
class Date
{

	private:
		// -----------------------------------------------------------------
		// Attributes
		// -----------------------------------------------------------------
		int day;
		int month;
		int year;
		int hour;
		int min;
		int sec;

	public:
		/**
		 * Create a new date.
		 */
		Date()
		{
			day = 0;
			month = 0;
			year = 0;
			hour = 0;
			min = 0;
			sec = 0;
		}

		/**
		 * Load the system date.
		 */
		void now()
		{
			time_t currentTime;
			struct tm *localTime;

			time(&currentTime);
			localTime = localtime(&currentTime);

			day = localTime->tm_mday;
			month = localTime->tm_mon + 1;
			year = localTime->tm_year + 1900;
			hour = localTime->tm_hour;
			min = localTime->tm_min;
			sec = localTime->tm_sec;
		}

		/**
		 * Get the date in a string.
		 */
		string toString()
		{
			stringstream result;

			result << month << day << year << hour << min << sec;

			return result.str();
		}

};

#endif

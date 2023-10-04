/* keplerUI.cpp: This file contains the definitions of functions to manage the output and 
*                input of information to the system.
*  By: Gerardo Garcia G.
*  Last modified date: 03, oct 2023.
*/

#include "keplerUI.h"

using namespace nkui;

kscreen::kscreen() {}
kscreen::~kscreen() {}

void kscreen::showInTerminal(string text_log)
{
	cout << "\n\t" << text_log;
}

auto kscreen::getfromTerminal()
{
	auto vTerm = 0x00;
	cin >> vTerm;
	return vTerm;
}

klog::klog() {}
klog::~klog() {}

void klog::saveAsAFile(string text_log)
{
	ofstream k_log_file;

	k_log_file.open(FILE_LOG_NAME);
	k_log_file << "\n " << text_log;
	k_log_file.close();

}

kui::kui() {}
kui::~kui() {}

void kui::printTerminalLog(unsigned int log_level, string log_info)
{
	kui klog;

	switch (log_level) 
	{
	    case LOG_LEVEL_1:
			klog.showInTerminal(log_info);
		    break;

	    case LOG_LEVEL_2:
			klog.saveAsAFile(log_info);
		    break;
	}
}

auto kui::getKeplervalue(unsigned int log_level)
{
	auto kvalue = 0x00;

	switch (log_level)
	{
	case LOG_LEVEL_1:
		kvalue = getfromTerminal();
		break;
	}

	return kvalue;
}

void kui::keplerFrontPage(unsigned int* k_option)
{
	system("CLS");

	printTerminalLog(LOG_LEVEL_1, "\n---------------------------------------------------- KEPLER ");
	printTerminalLog(LOG_LEVEL_1, "1) Algebra de matrices");
	printTerminalLog(LOG_LEVEL_1, "\n\n Ingrese una opcion: ");

	*k_option = static_cast<unsigned int>(getKeplervalue(LOG_LEVEL_1));

}

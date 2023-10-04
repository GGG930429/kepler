#pragma once
/* keplerUI.h: This file contains function declarations to manage the input and 
*              output of information to the system.
*  By: Gerardo Garcia G.
*  Last modified date: 03, oct 2023.
*/

#include <fstream>
#include "kLibMng.h"

#define LOG_LEVEL_1           100                /// Show at terminal
#define LOG_LEVEL_2           200                /// Save as a file
#define LOG_FILE_NAME         "keplerlog.txt"   /// Name of log file 

#define KEPLER_RSC_PATH       "krsc"            /// Resource path

namespace nkui
{
    class kscreen
    {

    public:

        kscreen();
        ~kscreen();

        void showInTerminal(string text_log);

    private:

    protected:

    };

    class klog
    {

    public:

        klog();
        ~klog();

        void saveAsAFile(string text_log);

    private:

    protected:

    };

    class kui : public kscreen, public klog
    {

    public:

        string text_log;

        kui();
        ~kui();
        void printTerminalLog(int log_level, string log_info);

    private:

    protected:

    };
}
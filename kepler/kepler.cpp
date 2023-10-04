/* kepler.cpp : It is a program for academic purposes.Contains mathematical operations.
*  By: Gerardo Garcia G.
*  Date: 03, oct 2023.
*/

#include "keplerManager.h"
#include "keplerUI.h"

using namespace kmgmt;

int main()
{
    kepler_m KEPo;

    KEPo.printTerminalLog(LOG_LEVEL_1, "kepler is runing . . . ");
    KEPo.runK();
}

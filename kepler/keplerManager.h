#pragma once
/* keplerManager.h: This file contains the function declarations to manage all Kepler modules.
*  By: Gerardo Garcia G.
*  Last modified date: 03, oct 2023.
*/

#include "kLibMng.h"
#include "keplerUI.h"

using namespace nkui;

namespace kmgmt
{
	class kepler_m : public kui
	{
	    public:

			kepler_m();
			~kepler_m();
			void runK();

	    private:

	    protected:

	};
}

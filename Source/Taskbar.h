////////////////////////////////////////////////////////////////////////////////
// -------------------------------------------------------------------------- //
//                                                                            //
//                       (C) 2010-2015 Robot Developers                       //
//                       See LICENSE for licensing info                       //
//                                                                            //
// -------------------------------------------------------------------------- //
////////////////////////////////////////////////////////////////////////////////

//----------------------------------------------------------------------------//
// Prefaces                                                                   //
//----------------------------------------------------------------------------//

#ifndef ROBOT_TASKBAR_H
#define ROBOT_TASKBAR_H

#include "Types.h"
ROBOT_NS_BEGIN



//----------------------------------------------------------------------------//
// Classes                                                                    //
//----------------------------------------------------------------------------//

////////////////////////////////////////////////////////////////////////////////

class ROBOT_EXPORT Taskbar
{
public:
	enum Location { Left, Top, Right, Bottom };

private:
	 Taskbar							(void);
	~Taskbar							(void);
	 Taskbar							(const Taskbar&  taskbar);
	 Taskbar							(      Taskbar&& taskbar);

public:
	static bool			Synchronize		(void);

	static Bounds		GetBounds		(void) { return mBounds;   }
	static Location		GetLocation		(void) { return mLocation; }
	static bool			IsAutoHide		(void) { return mAutoHide; }

private:
	Taskbar&			operator =		(const Taskbar&  taskbar);
	Taskbar&			operator =		(      Taskbar&& taskbar);

private:
	static Bounds		mBounds;		// Position and size
	static Location		mLocation;		// Taskbar location
	static bool			mAutoHide;		// Taskbar auto hides
};

ROBOT_NS_END
#endif // ROBOT_TASKBAR_H

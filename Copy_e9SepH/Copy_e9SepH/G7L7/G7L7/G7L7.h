// G7L7.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CG7L7App:
// See G7L7.cpp for the implementation of this class
//

class CG7L7App : public CWinApp
{
public:
	CG7L7App();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CG7L7App theApp;
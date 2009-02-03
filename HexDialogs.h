/***********************************(GPL)********************************
*   wxHexEditor is a hex edit tool for editing massive files in Linux   *
*   Copyright (C) 2006  Erdem U. Altinyurt                              *
*                                                                       *
*   This program is free software; you can redistribute it and/or       *
*   modify it under the terms of the GNU General Public License         *
*   as published by the Free Software Foundation; either version 2      *
*   of the License, or any later version.                               *
*                                                                       *
*   This program is distributed in the hope that it will be useful,     *
*   but WITHOUT ANY WARRANTY; without even the implied warranty of      *
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the       *
*   GNU General Public License for more details.                        *
*                                                                       *
*   You should have received a copy of the GNU General Public License   *
*   along with this program;                                            *
*   if not, write to the Free Software	Foundation, Inc.,                *
*   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA        *
*                                                                       *
*               home  : wxhexeditor.sourceforge.net                     *
*               email : death_knight at gamebox.net                     *
*************************************************************************/

#ifndef __HexEditorDialogs__
#define __HexEditorDialogs__

#include "HexEditor.h"
#include "HexEditorGui.h"

class GotoDialog : public GotoDialogGui{
	public:
		GotoDialog( wxWindow* parent, uint64_t& offset, uint64_t cursor_offset, uint64_t filesize );
		void OnInput( wxCommandEvent& event );
		void OnGo( wxCommandEvent& event );
		void OnConvert( wxCommandEvent& event );
		wxString Filter( wxString text );
		uint64_t *offset;
		uint64_t cursor_offset;
		uint64_t filesize;
		bool is_olddec;
	};
#endif //__HexEditorDialogs__
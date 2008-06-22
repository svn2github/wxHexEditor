///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 17 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "wxHexCtrl/wxHexCtrl.h"

#include "HexEditorCtrlGui.h"

///////////////////////////////////////////////////////////////////////////

HexEditorCtrlGui::HexEditorCtrlGui( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 2, 3, 0, 0 );
	fgSizer1->AddGrowableCol( 1 );
	fgSizer1->AddGrowableCol( 2 );
	fgSizer1->AddGrowableRow( 1 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	
	m_static_offset = new wxStaticText( this, ID_DEFAULT, wxT("Offset"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_static_offset->Wrap( -1 );
	m_static_offset->SetFont( wxFont( 10, 70, 90, 90, false, wxT("sans") ) );
	
	fgSizer1->Add( m_static_offset, 1, wxALIGN_CENTER_HORIZONTAL|wxALL, 0 );
	
	m_static_adress = new wxStaticText( this, ID_DEFAULT, wxT("00 01 02 03 04 05 06 07"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT );
	m_static_adress->Wrap( -1 );
	m_static_adress->SetFont( wxFont( 10, 70, 90, 90, false, wxT("sans") ) );
	
	fgSizer1->Add( m_static_adress, 1, wxLEFT, 3 );
	
	m_static_byteview = new wxStaticText( this, ID_DEFAULT, wxT("Byte View"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	m_static_byteview->Wrap( -1 );
	m_static_byteview->SetFont( wxFont( 10, 70, 90, 90, false, wxT("sans") ) );
	
	fgSizer1->Add( m_static_byteview, 1, wxALIGN_CENTER_HORIZONTAL|wxALL, 0 );
	
	offset_ctrl = new wxHexOffsetCtrl( this, ID_DEFAULT, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	offset_ctrl->SetFont( wxFont( 10, 70, 90, 90, false, wxT("sans") ) );
	offset_ctrl->SetMinSize( wxSize( 104,100 ) );
	
	fgSizer1->Add( offset_ctrl, 1, wxEXPAND|wxLEFT, 0 );
	
	hex_ctrl = new wxHexCtrl( this, ID_HEXBOX, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	hex_ctrl->SetMinSize( wxSize( 150,100 ) );
	
	fgSizer1->Add( hex_ctrl, 1, wxEXPAND, 2 );
	
	text_ctrl = new wxHexTextCtrl( this, ID_TEXTBOX, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	text_ctrl->SetFont( wxFont( 10, 70, 90, 90, false, wxT("sans") ) );
	text_ctrl->SetMinSize( wxSize( 45,100 ) );
	
	fgSizer1->Add( text_ctrl, 1, wxEXPAND|wxRIGHT, 2 );
	
	bSizer1->Add( fgSizer1, 1, wxEXPAND, 0 );
	
	offset_scroll = new wxScrollBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_VERTICAL );
	offset_scroll->Enable( false );
	
	bSizer1->Add( offset_scroll, 0, wxEXPAND, 0 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	
	// Connect Events
	this->Connect( wxEVT_CHAR, wxKeyEventHandler( HexEditorCtrlGui::OnKeyboardChar ) );
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( HexEditorCtrlGui::OnResize ) );
	hex_ctrl->Connect( wxEVT_CHAR, wxKeyEventHandler( HexEditorCtrlGui::OnKeyboardChar ), NULL, this );
	text_ctrl->Connect( wxEVT_CHAR, wxKeyEventHandler( HexEditorCtrlGui::OnKeyboardChar ), NULL, this );
	offset_scroll->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( HexEditorCtrlGui::OnOffsetScroll ), NULL, this );
	offset_scroll->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( HexEditorCtrlGui::OnOffsetScroll ), NULL, this );
	offset_scroll->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( HexEditorCtrlGui::OnOffsetScroll ), NULL, this );
	offset_scroll->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( HexEditorCtrlGui::OnOffsetScroll ), NULL, this );
	offset_scroll->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( HexEditorCtrlGui::OnOffsetScroll ), NULL, this );
	offset_scroll->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( HexEditorCtrlGui::OnOffsetScroll ), NULL, this );
	offset_scroll->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( HexEditorCtrlGui::OnOffsetScroll ), NULL, this );
	offset_scroll->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( HexEditorCtrlGui::OnOffsetScroll ), NULL, this );
	offset_scroll->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( HexEditorCtrlGui::OnOffsetScroll ), NULL, this );
}

HexEditorCtrlGui::~HexEditorCtrlGui()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CHAR, wxKeyEventHandler( HexEditorCtrlGui::OnKeyboardChar ) );
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( HexEditorCtrlGui::OnResize ) );
	hex_ctrl->Disconnect( wxEVT_CHAR, wxKeyEventHandler( HexEditorCtrlGui::OnKeyboardChar ), NULL, this );
	text_ctrl->Disconnect( wxEVT_CHAR, wxKeyEventHandler( HexEditorCtrlGui::OnKeyboardChar ), NULL, this );
	offset_scroll->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( HexEditorCtrlGui::OnOffsetScroll ), NULL, this );
	offset_scroll->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( HexEditorCtrlGui::OnOffsetScroll ), NULL, this );
	offset_scroll->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( HexEditorCtrlGui::OnOffsetScroll ), NULL, this );
	offset_scroll->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( HexEditorCtrlGui::OnOffsetScroll ), NULL, this );
	offset_scroll->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( HexEditorCtrlGui::OnOffsetScroll ), NULL, this );
	offset_scroll->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( HexEditorCtrlGui::OnOffsetScroll ), NULL, this );
	offset_scroll->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( HexEditorCtrlGui::OnOffsetScroll ), NULL, this );
	offset_scroll->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( HexEditorCtrlGui::OnOffsetScroll ), NULL, this );
	offset_scroll->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( HexEditorCtrlGui::OnOffsetScroll ), NULL, this );
}

/////////////////////////////////////////////////////////////////////////////
// Name:        mouseoutput.h
// Purpose:  
// Author:      Cesar Mauri Loba (cesar at crea-si dot com)
// Modified by: 
// Created:     
// Copyright:   (C) 2008 Cesar Mauri Loba - CREA Software Systems
// 
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "wmotioncalibrationy.h"

////@begin XPM images
////@end XPM images


/*!
 * WMotionCalibrationY type definition
 */

IMPLEMENT_DYNAMIC_CLASS( WMotionCalibrationY, wxDialog )


/*!
 * WMotionCalibrationY event table definition
 */

BEGIN_EVENT_TABLE( WMotionCalibrationY, wxDialog )

////@begin WMotionCalibrationY event table entries
////@end WMotionCalibrationY event table entries

END_EVENT_TABLE()


/*!
 * WMotionCalibrationY constructors
 */

WMotionCalibrationY::WMotionCalibrationY()
{
    Init();
}

WMotionCalibrationY::WMotionCalibrationY( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create(parent, id, caption, pos, size, style);
}


/*!
 * WMotionCalibrationY creator
 */

bool WMotionCalibrationY::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin WMotionCalibrationY creation
    SetExtraStyle(wxWS_EX_BLOCK_EVENTS);
    wxDialog::Create( parent, id, caption, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end WMotionCalibrationY creation
    return true;
}


/*!
 * WMotionCalibrationY destructor
 */

WMotionCalibrationY::~WMotionCalibrationY()
{
////@begin WMotionCalibrationY destruction
////@end WMotionCalibrationY destruction
}


/*!
 * Member initialisation
 */

void WMotionCalibrationY::Init()
{
////@begin WMotionCalibrationY member initialisation
    m_staticText = NULL;
////@end WMotionCalibrationY member initialisation
}


/*!
 * Control creation for WMotionCalibrationY
 */

void WMotionCalibrationY::CreateControls()
{    
////@begin WMotionCalibrationY content construction
    WMotionCalibrationY* itemDialog1 = this;

    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemDialog1->SetSizer(itemBoxSizer2);

    m_staticText = new wxStaticText( itemDialog1, wxID_STATIC, _("Move your head up and down."), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer2->Add(m_staticText, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

////@end WMotionCalibrationY content construction
}


/*!
 * Should we show tooltips?
 */

bool WMotionCalibrationY::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap WMotionCalibrationY::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin WMotionCalibrationY bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end WMotionCalibrationY bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon WMotionCalibrationY::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin WMotionCalibrationY icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end WMotionCalibrationY icon retrieval
}
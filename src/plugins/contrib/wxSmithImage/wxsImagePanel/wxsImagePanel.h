/*
* This file is part of wxSmith plugin for Code::Blocks Studio
* Copyright (C) 2006-2007  Bartlomiej Swiecki
*
* wxSmith is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 3 of the License, or
* (at your option) any later version.
*
* wxSmith is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with wxSmith. If not, see <http://www.gnu.org/licenses/>.
*
*/

#ifndef wxsIMAGEPANEL_H
#define wxsIMAGEPANEL_H

#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>
#include    <cmath>
#include    <iostream>

//#include    <windef.h>
#include    <wx/settings.h>
#include    <wx/utils.h>
#include    <wx/string.h>
#include    <wx/filename.h>


#include    <wxscontainer.h>
#include    <wxstool.h>
#include    <wxsitemresdata.h>

#include    "wxsenumproperty.h"
#include    "wxseditenumproperty.h"
#include    "wxsImage.h"
#include    "wxsImageList.h"
#include    "wxsImageListDialog.h"

#include    "wxImagePanel.h"


class wxsImagePanel : public wxsContainer
{
    public:

        wxsImagePanel(wxsItemResData* Data);
        ~wxsImagePanel();

    protected:

        virtual wxObject* OnBuildPreview(wxWindow* Parent,long Flags);
        virtual void OnBuildCreatingCode();
        virtual void OnEnumContainerProperties(long Flags);

        wxString        mImage;                         // wxsImage info
        bool            mStretch;                       // fit image to panel



};

#endif      // wxsIMAGEPANEL_H
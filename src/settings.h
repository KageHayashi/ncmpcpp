/***************************************************************************
 *   Copyright (C) 2008 by Andrzej Rybczak   *
 *   electricityispower@gmail.com   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef HAVE_SETTINGS_H
#define HAVE_SETTINGS_H

#include <fstream>

#include "ncmpcpp.h"

const int null_key = 0x0fffffff;

struct ncmpcpp_keys
{
	int Up[2];
	int Down[2];
	int PageUp[2];
	int PageDown[2];
	int Home[2];
	int End[2];
	int Space[2];
	int Enter[2];
	int Delete[2];
	int VolumeUp[2];
	int VolumeDown[2];
	int ScreenSwitcher[2];
	int Help[2];
	int Playlist[2];
	int Browser[2];
	int SearchEngine[2];
	int MediaLibrary[2];
	int Stop[2];
	int Pause[2];
	int Next[2];
	int Prev[2];
	int SeekForward[2];
	int SeekBackward[2];
	int ToggleRepeat[2];
	int ToggleRandom[2];
	int Shuffle[2];
	int ToggleCrossfade[2];
	int SetCrossfade[2];
	int UpdateDB[2];
	int FindForward[2];
	int FindBackward[2];
	int NextFoundPosition[2];
	int PrevFoundPosition[2];
	int EditTags[2];
	int GoToPosition[2];
	int Lyrics[2];
	int Clear[2];
	int Crop[2];
	int MvSongUp[2];
	int MvSongDown[2];
	int SavePlaylist[2];
	int GoToNowPlaying[2];
	int ToggleAutoCenter[2];
	int GoToParentDir[2];
	int Quit[2];
};

struct ncmpcpp_config
{
	string mpd_music_dir;
	string song_list_format;
	string song_status_format;
	string song_window_title_format;
	string song_library_format;
	string browser_playlist_prefix;
	
	COLOR empty_tags_color;
	COLOR header_color;
	COLOR volume_color;
	COLOR state_line_color;
	COLOR state_flags_color;
	COLOR main_color;
	COLOR main_highlight_color;
	COLOR progressbar_color;
	COLOR statusbar_color;
	COLOR library_active_column_color;
	
	bool colors_enabled;
	bool set_window_title;
	bool header_visibility;
	bool statusbar_visibility;
	bool autocenter_mode;
	
	int mpd_connection_timeout;
	int crossfade_time;
	int playlist_disable_highlight_delay;
	int message_delay_time;
};

void DefaultKeys(ncmpcpp_keys &);
void DefaultConfiguration(ncmpcpp_config &);
void GetKeys(string, int *);
string GetLineValue(const string &);
string IntoStr(COLOR);
COLOR IntoColor(const string &);
void ReadKeys(ncmpcpp_keys &);
void ReadConfiguration(ncmpcpp_config &);

#endif


/*
*   This file is part of Universal-Updater
*   Copyright (C) 2019-2020 Universal-Team
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*   Additional Terms 7.b and 7.c of GPLv3 apply to this file:
*       * Requiring preservation of specified reasonable legal notices or
*         author attributions in that material or in the Appropriate Legal
*         Notices displayed by works containing it.
*       * Prohibiting misrepresentation of the origin of that material,
*         or requiring that modified versions of such material be marked in
*         reasonable ways as different from the original version.
*/

#include "overlay.hpp"

/*
	Montrez les crédits.
*/
void Overlays::ShowCredits() {
	bool doOut = false;

	while(!doOut) {
		Gui::clearTextBufs();
		C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
		C2D_TargetClear(Top, TRANSPARENT);
		C2D_TargetClear(Bottom, TRANSPARENT);

		GFX::DrawTop();
		GFX::DrawSprite(sprites_DarkStore_idx, 240, 30);
		Gui::DrawStringCentered(0, 1, 0.7f, TEXT_COLOR, "DarkStore - " + Lang::get("CREDITS"), 395, 0, font);

		Gui::DrawString(10, 30, 0.5f, TEXT_COLOR, "- DarkStore Team", 0, 0, font);
		Gui::DrawString(10, 50, 0.5f, TEXT_COLOR, "- " + Lang::get("FILES_HOSTING_ANONYKU"), 0, 0, font);
		Gui::DrawString(10, 70, 0.5f, TEXT_COLOR, "- " + Lang::get("CITRA_BIGN_ICON"), 0, 0, font);
		Gui::DrawString(10, 90, 0.5f, TEXT_COLOR, "- https://hshop.erista.me/", 0, 0, font);
		Gui::DrawString(10, 110, 0.5f, TEXT_COLOR, "- https://icons8.com/", 0, 0, font);
		Gui::DrawString(10, 130, 0.5f, TEXT_COLOR, "- Dhalian. : Images", 0, 0, font);
		Gui::DrawString(10, 150, 0.5f, TEXT_COLOR, Lang::get("CONTRIBUTOR_TRANSLATORS"), 210, 0, font);
		Gui::DrawString(10, 197, 0.5f, TEXT_COLOR, Lang::get("WEBSITE"), 390, 0, font);

		Gui::Draw_Rect(0, 215, 400, 25, BAR_COLOR);
		Gui::Draw_Rect(0, 214, 400, 1, BAR_OUTL_COLOR);
		Gui::DrawStringCentered(0, 218, 0.6f, TEXT_COLOR, Lang::get("CURRENT_VERSION") + std::string(V_STRING), 390, 0, font);

		GFX::DrawBottom();
		GFX::DrawSprite(sprites_DarkStore_core_idx, 0, 0);
		C3D_FrameEnd(0);

		hidScanInput();
		if ((hidKeysDown() & KEY_START) || (hidKeysDown() & KEY_B) || (hidKeysDown() & KEY_A)) doOut = true;
	}
}
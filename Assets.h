#pragma once
#include "helper.h"

void LoadGround() {
	Rect sel = { 128, 288, 319, 158 };

	unsigned int sel_height = sel.bottom - sel.top;
	unsigned int sel_width = sel.right - sel.left;
	unsigned int desX = 0;
	unsigned int desY = 0;

	while (desY < screen_height) {
		while (desX < screen_width)	
		{
			BLIT(tiles_12_pixels, tiles_12_width, tiles_12_height, desX, desY, sel);
			desX += sel_height;
		}

		desX = 0;
		desY += sel_width;
	}
}

void TreeSprite(unsigned int desX, unsigned desY) {
	Rect tree = {15, 320, 383, 95};

	BLIT(tiles_12_pixels, tiles_12_width, tiles_12_height, desX, desY, tree);
}

void DungeonSprite(unsigned int desX, unsigned desY) {
	Rect dung = {30, 207, 303, 96};

	BLIT(tiles_12_pixels, tiles_12_width, tiles_12_height, desX, desY, dung);
}

void MailboxSprite(unsigned int desX, unsigned dexY) {
	Rect mailbox = { 110, 174, 192, 137 };

	BLIT(tiles_12_pixels, tiles_12_width, tiles_12_height, desX, dexY, mailbox);
}


void Teleporter(unsigned int desX, unsigned int desY) {

	//BLIT(teleporter_hit_pixels, teleporter_hit_width, teleporter_hit_height, desX, desY, tele);
}
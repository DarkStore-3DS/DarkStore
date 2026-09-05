<p align="center">
	<a href="https://ds.dark98.co.uk"><img src="https://ds.dark98.co.uk/images/banner.png"></a><br>
	<b>An easy to use app for downloading game backups</b><br>
	<a href="https://github.com/DarkStore-3DS/DarkStore/actions?query=workflow%3A%22Build+DarkStore%22" style="padding-left: 5px; padding-right: 5px;">
		<img src="https://github.com/DarkStore-3DS/DarkStore/workflows/Build%20DarkStore/badge.svg" height="20" alt="Build status on GitHub Actions">
	</a>
</p>

WE DO NOT SUPPORT PIRACY! This Homebrew is for people who dont have access to the tools needed to dump their copy of the game.


DarkStore is a homebrew application for the Nintendo 3DS with the intention to make downloading game backups easy. No need to manually copy files or go through installation processes, as it does that all for you.

## Features

- A store format with a concept similar to the Cydia Repositories
   - The default is [DarkStore-Homebrew](https://ds.dark98.co.uk/store_content.php?store=homebrew)
   - Want to add more? Go to settings, choose "Select Store", click the + icon and select one from the list, enter a URL, or scan a QR code
- Customization in sorting and display
   - Several sorting keys: "Title", "Author", and "Last Updated"
   - Direction can be Ascending or Descending
   - App display can be shown in either a grid or rows
- Background downloads so you can keep using the rest of the app while downloading
- Searching and markings to make finding games easy
- Viewing screenshots and release notes for games
- Translations planned(Currently Only Supports English!)
   - To request a new language, join our [Discord Server](https://discord.com/invite/eFE6ZqpczY) or contact a project manager on Crowdin


## Compilation

### Setting up your environment

To build DarkStore from source, you will need to install devkitARM and some libraries. Follow devkitPro's [Getting Started](https://devkitpro.org/wiki/Getting_Started) page to install pacman, then run the following command to install everything you need:
```
(sudo dkp-)pacman -S 3ds-dev 3ds-curl 3ds-bzip2 3ds-liblzma
```
(The `sudo dkp-` may not be needed depending on your OS)

You will also need [bannertool](https://github.com/Steveice10/bannertool/releases/latest) and [makerom](https://github.com/profi200/Project_CTR/releases/latest) in your PATH.

### Cloning the repository

To download the source you will need to clone the repository with submodules, this can be done by running:
```
git clone --recursive https://github.com/DarkStore-3DS/DarkStore.git
```

If you've already cloned it, you can use the following command to update all of the submodules:
```
git submodule update --init --recursive
```

### Building

Once you've cloned the repository (with submodules), simply run `make` in the root of the repository.

If you're testing in Citra, run `make citra` instead of just `make` to disable the Wi-Fi check. (Note: `source/utils/download.cpp` must be rebuilt for this to take affect, save the file if it's already been built)

## DarkStore Credits
- [Dark98](https://github.com/Dark98) - Lead developer

## Universal-Updater Credits

- [SuperSaiyajinStackZ](https://github.com/SuperSaiyajinStackZ) - Lead developer, reworked quirc to C++
- [Pk11](https://github.com/Epicpkmn11) - Mockup Designer, Website Maintainer
- [NightScript](https://github.com/NightYoshi370) - Concept Creator & Planner
- [dlbeer](https://github.com/dlbeer) - Original developer of [quirc](https://github.com/dlbeer/quirc)
- [FlagBrew](https://github.com/FlagBrew): Original QR Code Scanner code
- [Icons8](https://icons8.com/): Icon Designer
- [lvandeve](https://github.com/lvandeve): For [LodePNG](https://github.com/lvandeve/lodepng)
- [PabloMK7](https://github.com/mariohackandglitch): Download Code Improvements


<!-- Security scan triggered at 2026-09-05 07:46:56 -->
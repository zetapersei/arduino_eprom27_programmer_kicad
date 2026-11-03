# EPROM programmer for 27-series chips based on Arduino

This repository is a fork of the original project from `walhi/arduino_eprom27_programmer`, redesigned and reworked as a KiCad-based project for a more reproducible and manufacturable hardware implementation.

The core concept is the same as the upstream project: an Arduino Nano drives the EPROM socket, manages the address/data bus, and applies the required programming voltage for the selected chip type.

## Original project vs. this fork

### Original project (`walhi/arduino_eprom27_programmer`)

The original project is a working Arduino EPROM programmer based on the BMBurner design concept and aimed at reading, writing and verifying 27-series EPROMs. It includes:

- a simple Arduino sketch for the control logic,
- a desktop GUI written in Qt,
- a prototype board and a schematic derived from the original concept,
- a "proof of concept" approach focused on functionality more than PCB production.

In practice, the upstream design is a practical, minimal implementation that was meant to be assembled and used quickly.

### This fork (`zetapersei/arduino_eprom27_programmer_kicad`)

This fork keeps the same programming model and compatibility with the original hardware workflow, but moves the project toward a proper PCB design and reusable electronic documentation.

Main differences:

- Full KiCad project: schematic and PCB are maintained in the `kicad/` folder instead of being a loose, manually traced schematic.
- Dedicated symbols and footprints: the board uses custom library components and a cleaner organization of the design.
- Production-oriented files: BOM, netlist, component positions, and fabrication outputs are included under `kicad/production`.
- Better documentation and maintainability: the project is structured as a reproducible hardware design rather than only as a working prototype.
- Qt 6 GUI support: the desktop application in `gui/` targets Qt 6 with the SerialPort module.
- PlatformIO firmware setup: the Arduino firmware is organized as a PlatformIO project using an Arduino Nano target.

## Compatibility and shared design

This fork is not a different programming method or a completely different architecture. It remains compatible with the original project idea and supports the same target families, including:

- 27C16
- 27C32
- 27C64
- 27C128
- 27C256
- 27C512

The firmware still performs the same operations:

- read chip
- write chip
- verify / check for programming errors
- programming voltage control

Before writing, always verify the correct programming voltage for the specific EPROM in the datasheet.

## Repository structure

- `src/` — Arduino firmware
- `gui/` — desktop Qt application
- `kicad/` — KiCad project, PCB, schematic, footprints, symbols, and production files
- `build/` — local build artifacts

## Hardware notes

The design still follows the same principle as the original project: the Arduino drives the EPROM socket through a shifted address bus and the required voltage control signals. The difference is that the fork turns this into a proper PCB project with manufacturing-ready data.

The original upstream project is best understood as a functional prototype; this fork is a cleaner, documented, and PCB-oriented evolution of the same idea.

## Build notes

For the GUI on Linux, install Qt 6 with the SerialPort development module and build it with:

```sh
mkdir build
cd build
qmake6 ../gui/gui.pro
make
```

In Qt Creator, open `gui/gui.pro` and select a Qt 6 desktop kit with the SerialPort module.

## Credits

- Upstream project: `walhi/arduino_eprom27_programmer`
- Inspiration / base concept: `BMBurner`
- Fork hardware redesign: `zetapersei/arduino_eprom27_programmer_kicad`

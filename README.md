# iesy-osm-hardware
Hardware documentation for iesy OSM-Modules and Eval-Platforms

### OSM Modules:


| Module | OSM Size | Product State | Eval-Platform | Project Name |
| ------ | ------ | ------ | ------ | ------ | 
| iesy RPX30 OSM-SF | Size-S | Testing of REV1.00 | iesy RPX30 EVA-MI | CM006 |
| iesy i.MX8M Mini OSM-SF | Size-S | In Development | iesy i.MX8M EVA-MI |CM007 |


### Eval-Platform:
iesy OSM evaluation concept is based on a modular carrier board that is assembled with currently OSM modules and compatible with modules released in the future.

| Name | Formfactor | Product state | Module | Project Name |
| ------ | ------ | ------ | ------ | ------ | 
| iesy RPX30 EVA-MI | mini-ITX | Testing of REV1.00 | iesy RPX30 OSM-SF |BB138 |
| iesy i.MX8M EVA-MI | mini-ITX | In Development | iesy i.MX8M Mini OSM-SF |BB138 |

### OSM-Specification
See https://sget.org/standards/osm/ for newest release of specification.

### Document files:
The following document files are provided in this repository.

BallOut (*.xlsx)
* List of all module contacts / pins that are provided at OSM interface and specification of voltages, pin-directions and important customer notes for carrier implementation

Muxing-Files (*.mex)
* Configuration of SOC pin muxing based on NXP Config Tool; only available for i.MX8M Mini OSM-SF

Schematic-File (*.pdf)
* Entire Schematic print of the embedded design.

Assembly-File (*.pdf)
* Assembly Printing for all components of the embedded design.


### License:
Except where otherwise noted, licensed under a [Creative Commons Plus (CC+) Dual License](https://wiki.creativecommons.org/wiki/CCPlus).


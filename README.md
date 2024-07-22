# Alif Ensemble DevKit Board Layer with Examples

This is the development repository for the Ensemble DevKit-E7 Board Support Pack (BSP).

It contains board layer and standalone examples and it can be added as local repository to enable layer discovery.

## Repository top-level structure

Directory                   | Description
:---------------------------|:--------------
[CMSIS/Driver](https://github.com/VladimirUmek/alif_ensemble_devkit-bsp/tree/main/CMSIS/Driver)       | Contains a [CMSIS-Driver VIO](https://arm-software.github.io/CMSIS_6/latest/Driver/group__vio__interface__gr.html) that is configured for the board peripherals.
[examples/Blinky](https://github.com/VladimirUmek/alif_ensemble_devkit-bsp/tree/main/examples/Blinky) | Blinky example in *csolution project format* using [CMSIS-Driver VIO](https://arm-software.github.io/CMSIS_6/latest/Driver/group__vio__interface__gr.html) and [CMSIS-Compiler](https://arm-software.github.io/CMSIS-Compiler/main/index.html) for printf I/O retargeting.
[layers](https://github.com/VladimirUmek/alif_ensemble_devkit-bsp/tree/main/layers/IoT)               | Board layers for using the board with [CMSIS-Toolbox - Reference Applications](https://github.com/ReinhardKeil/cmsis-toolbox/blob/main/docs/ReferenceApplications.md).

## Usage

This BSP requires the [Device Family Pack (DFP) for the Ensemble series](https://github.com/VladimirUmek/alif_ensemble-cmsis-dfp/tree/dev).

- [examples/Blinky](https://github.com/VladimirUmek/alif_ensemble_devkit-bsp/tree/main/examples/Blinky) shows the usage in a [*csolution project*](https://github.com/VladimirUmek/alif_ensemble_devkit-bsp/blob/main/examples/Blinky/Blinky.csolution.yml).
  
- [Board Layers](https://github.com/VladimirUmek/alif_ensemble_devkit-bsp/tree/main/layers/) are designed for [Reference Applications](https://github.com/Open-CMSIS-Pack/cmsis-toolbox/blob/main/docs/ReferenceApplications.md) and allow to run various device-agnostic examples on this board.

The device is configured for this board using [Alif Conductor](https://conductor.alifsemi.com/).

## Using the development repository

This repository can be used in a local directory and [mapped as software pack](https://github.com/Open-CMSIS-Pack/cmsis-toolbox/blob/main/docs/build-tools.md#install-a-repository) using for example `cpackget` with:

    cpackget add <path>/Keil.Ensemble_DevKit-E7_BSP.pdsc

## License

The BSP is licensed under [![License](https://img.shields.io/github/license/VladimirUmek/alif_ensemble_devkit-bsp?label)](https://github.com/VladimirUmek/alif_ensemble_devkit-bsp/blob/main/LICENSE).

## Issues

Please feel free to raise an [issue on GitHub](https://github.com/VladimirUmek/alif_ensemble_devkit-bsp/issues)
to report misbehavior (i.e. bugs) or start discussions about enhancements. This
is your best way to interact directly with the maintenance team and the community.
We encourage you to append implementation suggestions as this helps to decrease the
workload of the maintenance team.

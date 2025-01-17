# Debug stubs download with Alif Security Toolkit

On Ensemble devices the debug probe connection to the target core is only possible if the target core boots a valid application and therefore, initially a debug stub application must be loaded to the Ensemble device using Alif Security Toolkit (SETOOLS).

This directory contains debug stubs and JSON configuration files that shall be used with SETOOLS to generate and download application stubs that allow debug probe connection.

## Directory structure

Directory                                      | Description
:----------------------------------------------|:--------------
[build/config](./build/config) | JSON configuration files.
[build/images](./build/images) | Binaries containing application stubs.

One can copy `build` directory into SETOOLS installation root.

To develop application using M55_HE one must generate and download debug stubs by executing the following commands from the command window:

    app-gen-toc -f .\build\config\mram_he.json
    app-write-mram -p

while for M55_HP the command lines are slightly different:

    app-gen-toc -f .\build\config\mram_hp.json
    app-write-mram -p


Refer to "Alif Security Toolkit User Guide" for more information.
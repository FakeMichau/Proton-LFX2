Disclaimer
----------

For basic info about Proton, usage and compilation read [Valve's README](https://github.com/ValveSoftware/Proton/blob/bleeding-edge/README.md#install-proton-locally)

Make sure to apply patches before compiling my running

`./patches/apply-patches.sh`


Introduction
------------

**Proton-LFX2** is a fork of Proton that merged [LatencyFlex2](https://github.com/ishitatsuyuki/LatencyFleX2), a library who's goal is to lower input latency by hooking into Nvidia's Reflex. It also tried to streamline the process.

Speaking of streamline - Proton-LFX2 also attempts to bypass [Streamline](https://github.com/NVIDIAGameWorks/Streamline/) to allow the usage of upscalers like CyberFSR or CyberXESS in games that are not supported on Windows by those mods. The usage of those upscalers is also made easier in Proton-LFX2.


LatencyFlex 2
------------

Main reason why this fork was created. All you need to do is to add

`LFX2=1`

to your environment variables.   
Everything else is taken care off **except** `DXVK_NVAPI_USE_LATENCY_MARKERS`. Usually you won't have to care about that but it's sometimes needed. Refer to the [documentation](https://github.com/FakeMichau/latencyflex2/blob/master/docs/shim/installing.md#environment-variables) to read more.  
In case of issues you still can enable LatencyFlex 2 manually, without using the `LFX2` environment variable.


Upscalers
------------

Still an experimental feature. Let's you use mods like CyberFSR, CyberXESS and similar that utilize `nvngx.dll`, simply by using an environment variable - without needing to copy over files and deal with registry changes, also making it easy to go between different versions.  
All upscalers are held in `Proton-LFX2/files/upscalers/` folder. The name of the folder is the name you need to use in the environment variable. To use it add

`PROTON_UPSCALER=2.2.1`

By default only `2.2.1` is usable. It's a version of [CyberFSR](https://github.com/PotatoOfDoom/CyberFSR2) that uses FSR 2.2.1 and works with DirectX 11 games.  
You are free to add more, folder for version 2.1 exists but no DLL is provided to not infringe PotatoOfDoom's license.
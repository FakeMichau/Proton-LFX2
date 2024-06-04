Disclaimer
----------

For basic info about Proton, usage and compilation read [Valve's README](https://github.com/ValveSoftware/Proton/blob/bleeding-edge/README.md#install-proton-locally)

Make sure to apply patches before compiling by running

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



Nukem's FSR3 mod
------------

You can use Nukem's mod with this build thanks to [those patches](https://github.com/ValveSoftware/Proton/issues/7361). But you need to provide _nvngx.dll file from nvidia's driver package - just extract it and copy the file to system32 inside your game's prefix. You also need to add an environment variable to spoof HAGS:

`WINEHAGS=1`

That will also effectively disable LFX2 because currently it causes a crash. But you can still use `LFX2=1` to spoof an Nvidia GPU instead of doing that manually.
So for AMDGPUs you want both.
Also remember about applying the registry signature override file.
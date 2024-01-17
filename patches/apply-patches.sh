#!/bin/bash

pushd dxvk || exit
git reset --hard HEAD
git clean -xdf
echo "DXVK: Add LFX2 support"
patch -Np1 < ../patches/lfx2-dxvk.patch
popd || exit

pushd vkd3d-proton || exit
git reset --hard HEAD
git clean -xdf
echo "VKD3D-Proton: Add LFX2 support"
patch -Np1 < ../patches/lfx2-vkd3d.patch
popd || exit

pushd wine || exit
git reset --hard HEAD
git clean -xdf
echo "Wine: Add HAGS spoof"
patch -Np1 < ../patches/wine-hags-spoof.patch
popd || exit

pushd dxvk-nvapi || exit
git reset --hard HEAD
git clean -xdf
echo "DXVK-NVAPI: Add LFX2 support"
patch -Np1 < ../patches/lfx2-nvapi.patch
popd || exit

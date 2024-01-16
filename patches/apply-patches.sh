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
popd || exit

#!/bin/bash

pushd dxvk || exit
git reset --hard HEAD
git clean -xdf
popd || exit

pushd vkd3d-proton || exit
git reset --hard HEAD
git clean -xdf
popd || exit

pushd wine || exit
git reset --hard HEAD
git clean -xdf
popd || exit

pushd dxvk-nvapi || exit
git reset --hard HEAD
git clean -xdf
popd || exit

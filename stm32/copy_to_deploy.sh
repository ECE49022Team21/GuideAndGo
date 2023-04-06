#!/usr/bin/env bash
cp -r Core/Src/navigation ../stm32-deploy/Core/Src
#cp -r Core/Src/helper_functions.c ../stm32-deploy/Core/Src
cp -r Core/Src/location.c ../stm32-deploy/Core/Src
cp -r Core/Src/test.c ../stm32-deploy/Core/Src

cp -r Core/Inc/lwgps ../stm32-deploy/Core/Inc
cp -r Core/Inc/custom_typedef.h ../stm32-deploy/Core/Inc
cp -r Core/Inc/dijkstra.h ../stm32-deploy/Core/Inc
#cp -r Core/Inc/helper_functions.h ../stm32-deploy/Core/Inc
cp -r Core/Inc/k_d_tree.h ../stm32-deploy/Core/Inc
cp -r Core/Inc/landmarks.h ../stm32-deploy/Core/Inc
cp -r Core/Inc/location.h ../stm32-deploy/Core/Inc
cp -r Core/Inc/navigation_tests.h ../stm32-deploy/Core/Inc
cp -r Core/Inc/navigation.h ../stm32-deploy/Core/Inc
cp -r Core/Inc/proximity.h ../stm32-deploy/Core/Inc
cp -r Core/Inc/test.h ../stm32-deploy/Core/Inc

# Samsung A41 SM-A415F Kernel Source

Kernel Source 4.14.186 for the Samsung Galaxy A41

---
![Samsung Galaxy A41](https://fdn2.gsmarena.com/vv/pics/samsung/samsung-galaxy-a41-3.jpg)


# About Device

Samsung Galaxy A41 (a41xx)

### Specifications

Basic   | Spec Sheet
-------:|:-------------------------
CPU     | Octa-core 2x2.0GHz Cortex-A75 + 6x1.7Ghz Cortex-A55, ARM HMP big.LITTLE GTS
Chipset | Mediatek Helio P65 (12nm)
GPU     | ARM Mali G52 MC2
Memory  | 4 GB / 8 GB
Shipped Android Version | 10.0
Updated Android Version | 11.0
Storage | 64GB
MicroSD | Up to 64 GB
Battery | 3500 mAh (non-removable)
Dimensions | 149.9 x 69.8 x 7.9 mm
Display | 1080 x 2400 pixels, 6.1" Super AMOLED
Rear Camera  | 48.0 MP, 8 MP, 5 MP LED flash
Front Camera | 25.0 MP

---

#  Steps to Compile

Toolchains have been included in toolchain folder.
You need both gcc and clang to compile the kernel.

Then use the existing buildscript to compile by executing the command in a terminal window
You may need to make the script executable using "chmod a+x build_kernel.sh"
example:
```sh
./build_kernel.sh
```
### Thanks to:
 * myself, akhil1999
 * Samsung for providing kernel source

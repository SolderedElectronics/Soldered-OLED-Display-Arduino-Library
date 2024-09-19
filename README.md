# OLED Display Arduino library

[![Make docs and publish to GitHub Pages](https://github.com/SolderedElectronics/Soldered-OLED-Display-Arduino-Library/actions/workflows/make_docs.yml/badge.svg?branch=dev)](https://github.com/SolderedElectronics/Soldered-OLED-Display-Arduino-Library/actions/workflows/make_docs.yml)
[![Arduino Library Manager Compatibility](https://github.com/SolderedElectronics/Soldered-OLED-Display-Arduino-Library/actions/workflows/arduino_lint.yml/badge.svg?branch=dev)](https://github.com/SolderedElectronics/Soldered-OLED-Display-Arduino-Library/actions/workflows/arduino_lint.yml)


| ![Display OLED I2C White 0.96" SSD1306](https://github.com/SolderedElectronics/Display-OLED-I2C-White-0.96-hardware-design/blob/main/OUTPUTS/V1.2.2/333099.jpg) |
| :-------------------------------------------------------------------------------------------------------------------------------------------------------------: |
| [Display OLED I2C White 0.96" SSD1306](https://solde.red/333099) |

| ![Display OLED I2C Blue 0.96" SSD1306](https://github.com/SolderedElectronics/Display-OLED-I2C-Blue-0.96-hardware-design/blob/main/OUTPUTS/V1.2.2/333100.jpg) |
| :-----------------------------------------------------------------------------------------------------------------------------------------------------------: |
|                                              [Display OLED I2C Blue 0.96" SSD1306](https://solde.red/333100)                                              |

Looking to add visuals to your Arduino projects? The I2C OLED breakout board is perfect for that. Because of its high contrast, you will be in awe of its crispness! The display is made from hundreds of LEDs, each representing one pixel in a 128x64 grid. Thus, it doesn't need any backlight, and it needs less power than the classic LCD screens. That’s 8192 pixels all individually lit at your fingertips!

The design is 5V ready with an onboard regulator, so is compatible with any 3.3V board. The breakout board uses only about 20 mA, depending on active pixels. It is easy to control over the I2C interface. It is even easier to connect with the easyC system - no soldering required!

- Screen diagonal: 0.96" wide
- Dimensions: 30 mm x 30 mm
- Current consumption: ~20 mA (depending on active pixels)
- Logic voltage level: 5V (on I2C header)
- Operating voltage: 5V (onboard regulator for 3.3V)
- Communication: I2C (address: 0x3C)
- Connectors: easyC x2
- Pixel color: white
- Mounting holes: 2 (https://www.soldered.com/easyC)

Looking to add visuals to your Arduino projects? The I2C OLED breakout board is perfect for that. Because of its high contrast, you will be in awe of its crispness! The display is made from hundreds of LEDs, each representing one pixel in a 128x64 grid. Thus, it doesn't need any backlight, and it needs less power than the classic LCD screens. That’s 8192 pixels all individually lit at your fingertips!

The design is 5V ready with an onboard regulator, so is compatible with any 3.3V board. The breakout board uses only about 20 mA, depending on active pixels. It is easy to control over the I2C interface. It is even easier to connect with the easyC system - no soldering required!

- Screen diagonal: 0.96" wide
- Dimensions: 30 mm x 30 mm
- Current consumption: ~20 mA (depending on active pixels)
- Logic voltage level: 5V (on I2C header)
- Operating voltage: 5V (onboard regulator for 3.3V)
- Communication: I2C (address: 0x3C)
- Connectors: easyC x2
- Pixel color: blue
- Mounting holes: 2

### Repository Contents

- **/src** - source files for the library (.h & .cpp)
- **/examples** - examples for using the library
- **_other_** - _keywords_ file highlights function words in your IDE, _library.properties_ enables implementation with Arduino Library Manager.

### Hardware design

You can find hardware design for this board in [_Display OLED I2C White 0.96" SSD1306_](https://github.com/SolderedElectronics/Display-OLED-I2C-White-0.96-hardware-design) hardware repository.

You can find hardware design for this board in [_Display OLED I2C Blue 0.96" SSD1306_](https://github.com/SolderedElectronics/Display-OLED-I2C-Blue-0.96-hardware-design) hardware repository.

### Documentation

Access Arduino library documentation [here](https://SolderedElectronics.github.io/Soldered-OLED-Display-Arduino-Library/).

- Tutorial for using the OLED Display board
- Installing an Arduino library

### Board compatibility

The library is compatible with board & microcontroller families shown in green below:

[![Compile Sketches](http://github-actions.40ants.com/e-radionicacom/Soldered-OLED-Display-Arduino-Library/matrix.svg?branch=dev&only=Compile%20Sketches)](https://github.com/SolderedElectronics/Soldered-OLED-Display-Arduino-Library/actions/workflows/compile_test.yml)

### About Soldered

<img src="https://raw.githubusercontent.com/e-radionicacom/Soldered-Generic-Arduino-Library/dev/extras/Soldered-logo-color.png" alt="soldered-logo" width="500"/>

At Soldered, we design and manufacture a wide selection of electronic products to help you turn your ideas into acts and bring you one step closer to your final project. Our products are intented for makers and crafted in-house by our experienced team in Osijek, Croatia. We believe that sharing is a crucial element for improvement and innovation, and we work hard to stay connected with all our makers regardless of their skill or experience level. Therefore, all our products are open-source. Finally, we always have your back. If you face any problem concerning either your shopping experience or your electronics project, our team will help you deal with it, offering efficient customer service and cost-free technical support anytime. Some of those might be useful for you:

- [Web Store](https://www.soldered.com/shop)
- [Tutorials & Projects](https://soldered.com/learn)
- [Community & Technical support](https://soldered.com/community)

### Original source

​
This library is possible thanks to original [Adafruit_SSD1306](https://github.com/adafruit/Adafruit_SSD1306) library. Thank you, Adafruit.

### Open-source license

Soldered invests vast amounts of time into hardware & software for these products, which are all open-source. Please support future development by buying one of our products.

Check license details in the LICENSE file. Long story short, use these open-source files for any purpose you want to, as long as you apply the same open-source licence to it and disclose the original source. No warranty - all designs in this repository are distributed in the hope that they will be useful, but without any warranty. They are provided "AS IS", therefore without warranty of any kind, either expressed or implied. The entire quality and performance of what you do with the contents of this repository are your responsibility. In no event, Soldered (TAVU) will be liable for your damages, losses, including any general, special, incidental or consequential damage arising out of the use or inability to use the contents of this repository.

## Have fun!

And thank you from your fellow makers at Soldered Electronics.

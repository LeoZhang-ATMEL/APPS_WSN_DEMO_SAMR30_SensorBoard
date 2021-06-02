# SAMR30 Module WSN Demo
The Demo will shown how to using [WSN-Monitor](https://gallery.microchip.com/packages/WSN-Monitor-Setup/) to demonstrate MiWi Mesh
protocol by using one [SAM R30M Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/AC164159)
and several [SAMR30M Sensor Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DT100130).

### Project List:
- APPS_WSN_PanCoordinator, WSN PanCoordinator Demo for [SAMR30M Sensor Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DT100130)
- APPS_WSN_Coordinator, WSN Coordinator Demo for [SAMR30M Sensor Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DT100130)
- APPS_WSN_EndDevice, WSN EndDevice Demo for [SAMR30M Sensor Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DT100130)
- APPS_WSN_PanCoordinator_Module_Xplained_Pro, WSN PanCoordinator Demo for [SAM R30M Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/AC164159)

### Hardware Setup
1. Program APPS_WSN_PanCoordinator_Module_Xplained_Pro to one the [SAM R30M Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/AC164159)
2. Program APPS_WSN_Coordinator to one or more of the [SAMR30M Sensor Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DT100130)
3. Make all board power up and the Central PanCoordinator board [SAM R30M Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/AC164159)
was connect to the PC, and the USB CDC port(UART) was success enumerated.

### Running the Demo
1. Set the Tools\jre-6u6-p-windows-i586\jre1.6.0_06-p\bin\java.exe Compatibility properties for Windows 7
2. Click the wsn_lanucher.bat to open the WSN-Monitor as run as administrator
3. Click File->Connect
4. Select WSN_Monitor\protocol\ folder as "Protocol Configuration folder" parameters, Ensure you do not have the protocol field as protocol.null
5. Select Serial as communication interface
6. Select COM port which the PanCoordinator [SAM R30M Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/AC164159) enumerated.





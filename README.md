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
1. Prepare [Atmel-ICE](https://www.microchip.com/DevelopmentTools/ProductDetails/ATATMEL-ICE) to programming the board, [J-32 Debug Probe](https://www.microchip.com/developmenttools/ProductDetails/DV164232) or JLink also can be used with the [Debugger Adapter Board](https://www.microchip.com/developmenttools/ProductDetails/AC102015).
2. Program APPS_WSN_PanCoordinator_Module_Xplained_Pro to one the [SAM R30M Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/AC164159)
![image](https://user-images.githubusercontent.com/20182981/120910682-5dcb9200-c6b3-11eb-99a2-4d1f36d85298.png)
3. Program APPS_WSN_Coordinator to one or more of the [SAMR30M Sensor Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DT100130),
When Power up the [SAMR30M Sensor Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DT100130) with the CR2450 battery, Make sure connect the jumper to the J14 PINs (1 and 2)!![image](https://user-images.githubusercontent.com/20182981/120910637-00cfdc00-c6b3-11eb-85a6-a7698cfa34cd.png)
4. Make all board power up and the Central PanCoordinator board [SAM R30M Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/AC164159)
was connect to the PC, and the USB CDC port(UART) was success enumerated.

### Running the Demo
1. Unzip *Tools/jre-6u6-p-windows-i586.zip*, ensure the java.exe can be find at **Tools/jre-6u6-p-windows-i586/jre1.6.0_06-p/bin/java.exe** ![image](https://user-images.githubusercontent.com/20182981/120910232-c3b61a80-c6af-11eb-9fba-2f84b43f03fe.png)
2. Set the **Tools\jre-6u6-p-windows-i586\jre1.6.0_06-p\bin\java.exe** Compatibility properties for **Windows 7**![image](https://user-images.githubusercontent.com/20182981/120910247-ed6f4180-c6af-11eb-891d-83cd7136d321.png)
3. Run the **wsn_lanucher.bat** as administrator to open the WSN-Monitor.![image](https://user-images.githubusercontent.com/20182981/120910272-1263b480-c6b0-11eb-997b-c74f5e98e3cb.png)
4. Click **File->Connect**, the **connect** setting window will display, and *protocol folder, Interface type, and Port* can be changed here. Those parameter only need to setup first used, it will be saved for next use.
![image](https://user-images.githubusercontent.com/20182981/120910302-5e165e00-c6b0-11eb-9ad8-956e5b0d0bad.png)
5. Select *WSN_Monitor\protocol\* folder as **Protocol Configuration folder** parameters, Ensure you do not have the protocol field as **protocol.null**, you need maunal remove the **null** Suffix string if it displayed.
![image](https://user-images.githubusercontent.com/20182981/120910315-75ede200-c6b0-11eb-8f76-fec495694ccd.png)![image](https://user-images.githubusercontent.com/20182981/120910329-94ec7400-c6b0-11eb-8530-279c2fec657d.png)
6. Select **Serial** as communication interface and **COM port** which the PanCoordinator [SAM R30M Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/AC164159) enumerated.
![image](https://user-images.githubusercontent.com/20182981/120910385-193ef700-c6b1-11eb-8c63-c0ee34a34329.png)


The WSN-Monitor Will display all the MiWi node in the central Panel.
![image](https://user-images.githubusercontent.com/20182981/120910506-0973e280-c6b2-11eb-95b5-6e0a1b01f39d.png)





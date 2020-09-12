Voorstelling Project FabZero 

XiaoShiZi 小獅子

![XiaoShiZi小獅子]({{site.baseurl}}/../../assets/小獅子.png)

```note
 _Dit project word gedocumenteerd op Github met MarkDown documentatie._
```

# Project:

**_"Thermostatische kraan"_** naar Wifi gestuurd brengen.



Dit voor het uitschakelen van ruimten die niet altijd dienen mee opgewarmd te worden in de loop van de dag.

Bevoorbeeld slaapkamers overdag Dicht, in de vooravond late opwarmen tot 16 graden en de living waar de thermostaat hangt s nachts laten afkoelen.

Of zelfs het niet steeds verwarmen van de ruimte met de Thermostaat.

Er word vertrokken met een thermostatische kraan waarbij reeds een motor en sturing aanwezig zijn (toekomst volledig uit te bouwen kraan met herbruik van de metalen moer op een geprinte versie ABS of PETG of siliconemal en gieten in Zelaan hittebestedig, geen vervorming door warmte van de valve/klep)

Hierbij word er een ESP8266 (Geheugen capaciteit 1MB? uitbreidbaar naar 16MB...) ) toegevoegd om de sturing via wifi mogelijk te maken.

Na korte uiteenzetting in Makerspace Ingegno te Drongen kwamen volgende bottlenecks nog naar boven.

Eigen ontwerp van de kraan maken ipv aanschaffing van een programmerbare. 
   -

Protocol om aan te sturen zal via MQTT worden.

Server zal een RPi Zero W (19.90) worden met een 7"Touch Screen (+/- 75€ raspberrystore.nl) of een EPaper (2" is reeds product/3335 35€ zonder touch, touch screen kan met overlay {6€} zoals product/333 maar is out of stock) als scherm. (Op te lossen dringend :-)  

Mogelijkheid verder uit te werken om via de gsm de temperatuurinstelling aan te passen (beveiliging e.d....)

Indien programmabuffer op de esp8266 (12.04€) het toelaat kan er nog een EPaper op de kraan bijkomen om vanaf daar ook de temp in te stellen.

######(Prijzen op Gotron.be of Adafruit of desbetreffende site op 12/09/2020)


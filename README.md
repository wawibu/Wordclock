# WordClock

This is the <b>WordClock</b> software to the thingiverse project: <a href="https://www.thingiverse.com/thing:4693081" target="_blank">Wordclock Wortuhr</a>

Feel free to add functions, ideas and everything else, which helps this project to grow! 

Current version: 4.0

<hr>

<img src="9CA8B21F-5ED3-4F7D-95CA-FCF97703D408.jpeg">
Time here is 07:43 or 19:43 o'clock

<hr>

<b>Hardware:</b>
- Node MCU V3 - ESP8266 board
- RTC (DS3231) board 
- 114 LEDs of an WS2812B led stripe 

<hr>

<b>Available functions:</b>
- Check the settings.h file for the latest functions
- WiFi Manager integration to avoid setting your WiFi credentials manually in the code
- The from your WiFi router received IP-address can be shown as a scrolling text to inform you about the value
- During startup in default a LED test function is shown to check your wiring
- During startuo a text SET WLAN is shown until the WiFi settings were done with for the first time or afterwars until the device received a new IP-address
- The configuraton can be set with an integrated web portal
- The LED color can be comfigured to a static value
- The LED intensity can be set for a day time and optional for a night mode usage
- To every new hour the hour text can flash to notify about the new hour reached
- Optional you can chose to show the date as scrolling text every minute after 30 seconds
- A time span can be selected to turn off the LEDs fully or reduce their intensity for night time usage
- Updates of the software can be done with the web portal as well to avoid connecting the decice to Arduino IDE again. The needed .bin file is included
- During startup you can choose if the following functions should be displayed: IP-address as scrolling text, SET WLAN text, the LED test function
- The LED color can be shown as randomized 'rainbow' color changed every new minute 
- You can choose if the minute LEDs in the corners should be rotated clockwise or anti clockwise
- The in the interal WifiManager settings stored WiFi settings can be set to default on request
- In case the WiFi is no longer available the device will reset the WiFi settings automatically after 240s to avoid flashing with Arduino IDE again
- Optional you can set a IP-address (of f.e. your smart phone) connected on your network to be monitored via PING request 2x per minute. After a set amount of failed PING attempts the LEDs will turn off to reduce power consumption when you are not at home
- 


<hr>

<b>Version history:</b>
- 1.0 to 3.4: 	Initial releases shared on thingiverse
- 3.5 to 3.9.3:	Minor function changes and code cleanup
- 4.0: 		Added an option to periodically ping a IP-address of f.e. your smart phone. 
		If the IP-address does not answer for a period of time the LEDs turn off. 
		This will allow to reduce power consumption of the WordClock when you are away.
		The ping request is done 2x every minute. So if the IP-address can be reached
		again, the LEDs will turn on after a few seconds

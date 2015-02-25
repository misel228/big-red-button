# Big Red Button


This is a simple large red button that shuts down windows or linux systems.

Inside is an Arduino Leonarde that is capable of emulating a keyboard. When the button is pushed it acts as a keyboard and enters  "shutdown -h now" and "shutdown -s -t 0" which are the linux and windows commands for shutting down the computer. Of course this only works if you have access to a root console and which is active at the time of the push. This is also the ony security measure so beware.

![Image of a button connected to a computer][button]

[button]: button.jpg "Shutting down like a boss"

## The Goal of This Fork
A version of smcFanControl that automatically adjusts the fan speed based on the CPU temperature.

## Background
My old MacBook Pro has an overheating problem and for some reason the fans stay at 2000 RPM until the CPU temperature is over 100 Celsius. 

This is a quick and dirty fork of the great smcFanController application. Instead of relying on user-defined favorites, it dynamically adjusts the fan speed based on the CPU temperature as follows:

* 50 C: 3000 RPM
* 55 C: 3500 RPM
* 60 C: 4000 RPM
* 65 C: 4500 RPM
* 70 C: 5000 RPM
* 75 C: 5500 RPM
* 80 C: 6000 RPM

The values can be customized in FanControl.h. The following settings may be easier on the fans.

```objective-c
#define kBaseTemp 70 // The temperature resulting with the lowest RPM
#define kBaseRpm 2000 // The lowest RPM. Warning: This should never be less than 2000.
#define kTempIncrement 5 // How much should the temperature increase before we increase RPM
#define kRpmIncrement 1000 // How much should the RPM be incremented
#define kMaxMultiplier 4 // How many times will the RPM be incremented at maximum
```

Note: Use only at your own risk.

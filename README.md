# :video_game: AdKeyboard Arduino Library :video_game: 
----
#### The library to control your Arduino AdKeyboard easier !!

You can buy this kind of keyboard [here](https://www.ebay.com/itm/144292596073)  


**You can control some keyboards like this or others with 3 pins :** 
- VCC 
- GROUND 
- an OUT / S etc


![](img/adkeyboard.png)

---

## Installation

:one: **Download the release of the library :** 
![Download link of the release](https://github.com/SarahBourgeois/AdKeyboard_manager_Arduino_library/releases/download/v1.0.0/AdKeyboard_manager_V1.h).

:two: **Add this file into your libraries Arduino folder**.

## Usage
In your file ***.ino*** add this : 
```sh
#include "AdKeyboard_manager.h"
```

To controll the different keys : 
``` C
  if (tempKey == DOWN ) { 
    // key press is Down
   // do some stuff
  }  
  if (tempKey == UP ) { 
     // key press is Up
    // do some stuff
  }  
  if (tempKey == RIGHT ) { 
     // key press is Right
    // do some stuff
  } 
  if (tempKey == LEFT ) { 
     // key press is Left
    // do some stuff
  }
  if (tempKey == -1 ) { 
    // no key press
    // do some stuff
  }
```





## License

MIT


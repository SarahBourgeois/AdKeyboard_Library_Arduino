# :video_game: AdKeyboard_manager_Arduino_library :video_game: 
----
#### The library to control your Arduino AdKeyboard

You can buy this keyboard [here](https://www.ebay.com/itm/144292596073). 

![](img/adkeyboard.png)

---

## Installation

:one: **Download the release of the library :** 
![Download link of the release](https://github.com/SarahBourgeois/AdKeyboard_manager_Arduino_library/releases/download/v1.0.0/AdKeyboard_manager_V1.h).

:two: **Add this file into your libraries Arduino folder**.

## Usage
In your file ***.ino*** add this : 
```sh
#include "keys_manager.h"
```

To controll the different keys : 
```sh
  if (tempKey == DOWN ) { go down }  
  if (tempKey == UP ) { go up }  
  if (tempKey == RIGHT ) { go right } 
  if (tempKey == LEFT ) { go left }
  if (tempKey == -1 ) { no key push }
```





## License

MIT


## OS X 與 iOS 內核編程

不要忘記使用sudo
Don't forget use `sudo`

uname -r 查看系統內核版本
sudo chown -R root:wheel HelloWorld.kext     更改權限
sudo kextload HelloWorld.kext     加載內核擴展
kextstat     查看當前內核擴展情況
sudo kextunload HelloWorld.kext     卸載內核擴展
---
使用 Console 查看 system.log
使用 IORegistryExplorer 查看 kext IOLog 輸出信息
使用 USB Prober 查看 usb 使用情況
---
sudo zprint 查看 kalloc 分配的內存域

kextlibs MyFirstUSBDriver.kext 查看 kext 依賴

~~Apple 不允許 Mac App Store 上的軟件獲取 root 權限，所以要求 root 權限的軟件在MAS上是不會出現的~~
<<<<<<< HEAD


=======
>>>>>>> 8df430cd8b311d8e5734b291128548230051520e

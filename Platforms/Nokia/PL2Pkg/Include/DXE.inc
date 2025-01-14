  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

# INF Binaries/PL2/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf

  INF Binaries/PL2/MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf

  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/PL2/QcomPkg/Drivers/FontDxe/FontDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
  INF ArmPkg/Drivers/ArmPsciMpServicesDxe/ArmPsciMpServicesDxe.inf

  INF Binaries/PL2/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/NpaDxe/NpaDxe.inf

  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
  INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf

  INF Binaries/PL2/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf

!if $(USE_DISPLAYDXE) == 1
  INF Binaries/PL2/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF QcomPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF MdeModulePkg/Bus/Pci/PciBusDxe/PciBusDxe.inf
  INF MdeModulePkg/Bus/Pci/NvmExpressDxe/NvmExpressDxe.inf

  INF Binaries/PL2/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/FIHDxe/FIHDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
# INF Binaries/PL2/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/PL2/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/PL2/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/HashDxe/HashDxe.inf
  INF Binaries/PL2/QcomPkg/Drivers/RNGDxe/RngDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf
  INF MdeModulePkg/Universal/Acpi/BootGraphicsResourceTableDxe/BootGraphicsResourceTableDxe.inf
  INF MdeModulePkg/Universal/Acpi/FirmwarePerformanceDataTableDxe/FirmwarePerformanceDxe.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  
  INF Binaries/PL2/QcomPkg/Application/QcomChargerApp/QcomChargerApp.inf
  INF Binaries/PL2/QcomPkg/Application/FIHHWIDApp/FIHHWIDApp.inf
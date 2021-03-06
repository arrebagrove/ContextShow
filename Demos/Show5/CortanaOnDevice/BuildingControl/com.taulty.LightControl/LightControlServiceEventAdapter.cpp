//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#include "pch.h"

using namespace Microsoft::WRL;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Devices::AllJoyn;
using namespace com::taulty::LightControl;

// Note: Unlike an Interface implementation, which provides a single handler for each member, the event
// model allows for 0 or more listeners to be registered. The EventAdapter implementation deals with this
// difference by implementing a last-writer-wins policy. The lack of any return value (i.e., 0 listeners)
// is handled by returning a null result.

// Methods
IAsyncOperation<LightControlGetBuildingDefinitionJsonResult^>^ LightControlServiceEventAdapter::GetBuildingDefinitionJsonAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new LightControlGetBuildingDefinitionJsonCalledEventArgs(info);
    GetBuildingDefinitionJsonCalled(this, args);
    return LightControlGetBuildingDefinitionJsonCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<LightControlSwitchBuildingResult^>^ LightControlServiceEventAdapter::SwitchBuildingAsync(_In_ AllJoynMessageInfo^ info, _In_ bool interfaceMemberOnOff)
{
    auto args = ref new LightControlSwitchBuildingCalledEventArgs(info, interfaceMemberOnOff);
    SwitchBuildingCalled(this, args);
    return LightControlSwitchBuildingCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<LightControlSwitchRoomResult^>^ LightControlServiceEventAdapter::SwitchRoomAsync(_In_ AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberRoomName, _In_ bool interfaceMemberOnOff)
{
    auto args = ref new LightControlSwitchRoomCalledEventArgs(info, interfaceMemberRoomName, interfaceMemberOnOff);
    SwitchRoomCalled(this, args);
    return LightControlSwitchRoomCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<LightControlToggleRoomLightResult^>^ LightControlServiceEventAdapter::ToggleRoomLightAsync(_In_ AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberRoomName, _In_ int32 interfaceMemberLightIndex)
{
    auto args = ref new LightControlToggleRoomLightCalledEventArgs(info, interfaceMemberRoomName, interfaceMemberLightIndex);
    ToggleRoomLightCalled(this, args);
    return LightControlToggleRoomLightCalledEventArgs::GetResultAsync(args);
}

// Property Reads
// Property Writes

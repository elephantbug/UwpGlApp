﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#pragma warning(push)
#pragma warning(disable: 4100) // unreferenced formal parameter

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "OpenGLESPage.xaml.h"

void ::AppForOpenGLES2::OpenGLESPage::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///OpenGLESPage.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::AppForOpenGLES2::OpenGLESPage::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
    case 1:
        {
            this->mainGrid = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
        }
        break;
    case 2:
        {
            this->swapChainPanel = safe_cast<::Windows::UI::Xaml::Controls::SwapChainPanel^>(__target);
        }
        break;
    case 3:
        {
            ::Windows::UI::Xaml::Controls::Button^ element3 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(element3))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::AppForOpenGLES2::OpenGLESPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&OpenGLESPage::Red_Click);
        }
        break;
    case 4:
        {
            ::Windows::UI::Xaml::Controls::Button^ element4 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(element4))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::AppForOpenGLES2::OpenGLESPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&OpenGLESPage::Green_Click);
        }
        break;
    case 5:
        {
            ::Windows::UI::Xaml::Controls::Button^ element5 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(element5))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::AppForOpenGLES2::OpenGLESPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&OpenGLESPage::Black_Click);
        }
        break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::AppForOpenGLES2::OpenGLESPage::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}

#pragma warning(pop)


